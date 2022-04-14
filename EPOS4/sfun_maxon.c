#define S_FUNCTION_NAME  sfun_maxon
#define S_FUNCTION_LEVEL 2

#include "simstruc.h"

#include "mex.h"
#include "Definitions.h"
#include "motorInfoStruct.h"

#ifdef _LINUX_
#include "Win2Linux.h"
#endif

#define NODEID 0
#define TSAMP  1
#define OPMODE 2
#define KSAMPOUT 1

#define NODE_ID_PARAM(S) ssGetSFcnParam(S,NODEID)
#define SAMPLE_TIME_PARAM(S) ssGetSFcnParam(S,TSAMP)
#define OP_MODE_PARAM(S) ssGetSFcnParam(S,OPMODE)

#define INPORT1 0
#define OUTPORT1 0

#define IWORK_NODEID 0
#define IWORK_OPMODE 1

#define MAX_CURRENT 3000

/* Global data for all instance of this S-function */
static volatile int mylock = 0;
static volatile int NumberOfInstances = 0;
static HANDLE mHandle = NULL;
static BYTE OpModes[5];

static _inline void EnterLock(void) {
    // Lock a thread in PC to execute 1 code section.
    // More than 1 CPU thread accessing Maxon motor library
    // is not allowed. For more information, visit
    // https://en.wikipedia.org/wiki/Lock_(computer_science)
    while (mylock);
    mylock++;
}

static _inline void LeaveLock(void) { mylock--; }


/* Check Size and Parameters */

static void mdlInitializeSizes(SimStruct *S) {

    ssSetNumSFcnParams(S, 3); /* Number of expected parameters */
    if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S)) {
        return; /* Parameter mismatch will be reported by Simulink */
    }

    /* Obtain Node ID */
    int NodeID = (int) mxGetScalar(ssGetSFcnParam(S, NODEID));

    /* Obtain Sample Time */
    time_T tSamp = mxGetScalar(SAMPLE_TIME_PARAM(S));

    /* Obtain Operation Mode */
    int OperationMode = (int) mxGetScalar(ssGetSFcnParam(S, OPMODE));

    /* Define custom struct data type */
    int dtype;
    char *busName = "motorInfo";
    ssRegisterTypeFromNamedObject(S, busName, &dtype);

    /* Set OpModes */
    if (NumberOfInstances == 0) {
        EnterLock();
        //Cyclic Synchronous Current (Torque) Mode
        OpModes[0] = OMD_CURRENT_MODE;
        //Cyclic Synchronous Velocity Mode
        OpModes[1] = OMD_VELOCITY_MODE;
        //Cyclic Synchronous Position Mode
        OpModes[2] = OMD_POSITION_MODE;
        //Profile Velocity Mode
        OpModes[3] = OMD_PROFILE_VELOCITY_MODE;
        //Profile Position Mode
        OpModes[4] = OMD_PROFILE_POSITION_MODE;
        LeaveLock();
    };

    /* continous and discretes states */
    ssSetNumContStates(S, 0); // convert into continuous states
    ssSetNumDiscStates(S, 0); // convert into discrete states
    
    /* Block based sample time */
    ssSetNumSampleTimes(S, PORT_BASED_SAMPLE_TIMES);

    /* Inputs */

    if (!ssSetNumInputPorts(S, 1)) return;
    // ssSetBusInputAsStruct(S, 0, true);
    ssSetInputPortWidth             (S, 0, 1);
    ssSetInputPortDataType          (S, 0, DYNAMICALLY_TYPED);
    ssSetInputPortDirectFeedThrough (S, 0, FALSE);
    ssSetInputPortRequiredContiguous(S, 0, TRUE);
    ssSetInputPortSampleTime        (S, INPORT1, tSamp);
    ssSetInputPortOffsetTime        (S, INPORT1, 0);

    /* Outputs */
    if (!ssSetNumOutputPorts(S, 1)) return;
    // return with motorInfo struct: angle, velocity, current
    ssSetOutputPortWidth     (S, OUTPORT1, 1);
    ssSetBusOutputObjectName (S, OUTPORT1, busName);
    ssSetOutputPortDataType  (S, OUTPORT1, dtype);
    ssSetBusOutputAsStruct   (S, OUTPORT1, TRUE);
    ssSetOutputPortSampleTime(S, OUTPORT1, tSamp/KSAMPOUT);
    ssSetOutputPortOffsetTime(S, OUTPORT1, 0);

    /* No pointers, real work variables */
    ssSetNumRWork(S, 0);  
    ssSetNumIWork(S, 2); /* Node ID, OperationMode */
    ssSetNumPWork(S, 0);
    ssSetNumModes(S, 0);
    ssSetNumNonsampledZCs(S, 0);

    /* specify the sim state compliance to be same as a built-in block */
    ssSetOperatingPointCompliance(S, USE_DEFAULT_OPERATING_POINT);
    ssSetSimStateCompliance(S, USE_DEFAULT_SIM_STATE);

    /* options */
    ssSetOptions(S,
        (SS_OPTION_WORKS_WITH_CODE_REUSE |
        SS_OPTION_EXCEPTION_FREE_CODE)
//         SS_OPTION_USE_TLC_WITH_ACCELERATOR
        );
}


#define MDL_INITIALIZE_SAMPLE_TIMES
#if defined(MDL_INITIALIZE_SAMPLE_TIMES)
static void mdlInitializeSampleTimes(SimStruct *S) {
//     ssSetSampleTime(S, 0, mxGetScalar(SAMPLE_TIME_PARAM(S)));
//     ssSetOffsetTime(S, 0, 0.0);
//     ssSetSampleTime(S, 1, mxGetScalar(SAMPLE_TIME_PARAM(S))/KSAMPOUT);
//     ssSetOffsetTime(S, 1, 0.0);
    ssSetModelReferenceSampleTimeDefaultInheritance(S);
}
#endif /* MDL_INITIALIZE_SAMPLE_TIMES */

#define MDL_START  /* Change to #undef to remove function */
#if defined(MDL_START)

/* Function: mdlStart =======================================================
 * Abstract:
 *    This function is called once at start of model execution. If you
 *    have states that should be initialized once, this is the place
 *    to do it.
 */
static void mdlStart(SimStruct *S) {
    DWORD ErrCode = 0;
    BOOL Fault = FALSE;
    //LONG actualpos;

    /* Get Node ID from first parameters */
    WORD NodeID = (WORD) mxGetScalar(NODE_ID_PARAM(S));
    
    /* Get operation mode, index starts at 0 */
    int opmode = (int) mxGetScalar(OP_MODE_PARAM(S)) - 1;

    /* Store NodeID */
    ssSetIWorkValue(S, IWORK_NODEID, (int) NodeID);
    ssSetIWorkValue(S, IWORK_OPMODE, opmode);

    EnterLock();
    /* Store handle */
    if (mHandle == NULL) {
        mHandle = VCS_OpenDevice("EPOS4", "MAXON SERIAL V2", "USB", "USB0", &ErrCode);
        if (ErrCode) {
            mexPrintf("Error opening USB, ErrCode is %i\n", (int) ErrCode);
            ssSetErrorStatus(S, "Error opening Device");
            LeaveLock();
            return;
        };
    };

    /* Resetting Error if in error state */
    if (!VCS_GetFaultState(mHandle, NodeID, &Fault, &ErrCode)) {
        mexPrintf("Error Checking Fault, ErrCode is %i\n", (int) ErrCode);
        ssSetErrorStatus(S, "Error Checking Fault State");
        LeaveLock();
        return;
    }
    if (Fault) {
        if (!VCS_ClearFault(mHandle, NodeID, &ErrCode)) {
            mexPrintf("Error clearing fault state, ErrCode is %i\n", (int) ErrCode);
            ssSetErrorStatus(S, "Error Clearing Fault State");
            LeaveLock();
            return;
        }
    }

    /* Enabling device */
    if (!VCS_SetEnableState(mHandle, NodeID, &ErrCode)) {
        mexPrintf("Error Enabling Node, ErrCode is %i\n", (int) ErrCode);
        ssSetErrorStatus(S, "Error Enabling Device");
        LeaveLock();
        return;
    }

    /* Set Encoder to Zero for Actual Position */
    if (!VCS_ActivateHomingMode(mHandle, NodeID, &ErrCode)) {
        mexPrintf("Error activating homing, ErrCode is %i\n", (int) ErrCode);
        ssSetErrorStatus(S, "Error activating homing");
        LeaveLock();
        return;
    };

    /* Set home position */
    /* No homing operation required */
    if (!VCS_DefinePosition(mHandle, NodeID, 0, &ErrCode)) {
        mexPrintf("Error setting position to zero for node %i, ErrCode is %i\n", (int) NodeID, (int) ErrCode);
        ssSetErrorStatus(S, "Error setting zero");
        LeaveLock();
        return;
    };

    /* Changing to Op Mode */
    if (!VCS_SetOperationMode(mHandle, NodeID, OpModes[opmode], &ErrCode)) {
        mexPrintf("Error Setting Operation Mode, ErrCode is %i\n", (int) ErrCode);
        ssSetErrorStatus(S, "Error Setting Operation Mode");
        LeaveLock();
        return;
    }

    /* Update Instance */
    NumberOfInstances++;

    /* release lock */
    LeaveLock();
}

#endif /*  MDL_START */

#define MDL_UPDATE
#if defined(MDL_UPDATE)

static void mdlUpdate(SimStruct *S, int_T tid)
{
    /* Read Encoder Position */
    DWORD ErrCode;
    long inputParam;

    /* Accessing inputs and outputs */
    /* real_T is double in desktop simulation */
    const real_T *u = ssGetInputPortRealSignal(S, INPORT1);
    inputParam = (long) u[0];
    
    /* Get Node ID */
    WORD NodeID = (WORD) ssGetIWorkValue(S, IWORK_NODEID);

    EnterLock();
    switch (ssGetIWorkValue(S, IWORK_OPMODE)) {
        case 0: // Cylic Synchronous Current Mode
            VCS_SetCurrentMustEx(mHandle, NodeID, inputParam, &ErrCode);
            break;
        case 1: // Cylic Synchronous Velocity Mode
            VCS_SetVelocityMust(mHandle, NodeID, inputParam, &ErrCode);
            break;
        case 2: // Cylic Synchronous Position Mode
            VCS_SetPositionMust(mHandle, NodeID, inputParam, &ErrCode);
            break;
        case 3: // Profile velocity mode
            VCS_MoveWithVelocity(mHandle, NodeID, inputParam, &ErrCode);
            break;
        case 4: // Profile position mode
            VCS_MoveToPosition(mHandle, NodeID, inputParam, FALSE, TRUE, &ErrCode);
            break;
    }
    LeaveLock();
}

#endif /* MDL_UPDATE */

/* Function: mdlOutputs =======================================================
 * Abstract:
 *    In this function, you compute the outputs of your S-function
 *    block.
 */
static void mdlOutputs(SimStruct *S, int_T tid) {
    /* Read Encoder Position */
    DWORD ErrCode;
    long pos, vel, cur;
    long vel_avg, cur_avg;
    
    /* Access inputs and outputs */
    motorInfo *sensorSignal = (motorInfo *) ssGetOutputPortSignal(S, 0);
    
    /* Get Node ID */
    WORD NodeID = (WORD) ssGetIWorkValue(S, IWORK_NODEID);

    /* Obtaining actual position */
    EnterLock();
    VCS_GetPositionIs (mHandle, NodeID, &pos, &ErrCode);
    VCS_GetVelocityIsAveraged (mHandle, NodeID, &vel_avg, &ErrCode);
    VCS_GetCurrentIsAveragedEx(mHandle, NodeID, &cur_avg, &ErrCode);
    LeaveLock();

    /* output */
    sensorSignal->Angle = pos;
    sensorSignal->Speed = vel_avg;
    sensorSignal->Current = cur_avg;
}

/* Function: mdlTerminate =====================================================
 * Abstract:
 *    In this function, you should perform any actions that are necessary
 *    at the termination of a simulation.  For example, if memory was
 *    allocated in mdlStart, this is the place to free it.
 */
static void mdlTerminate(SimStruct *S) {
    
    DWORD ErrCode;

    /* Get Data */
    WORD NodeID = (WORD) ssGetIWorkValue(S, IWORK_NODEID);

    EnterLock();

    /* Disable device */
    VCS_SetDisableState(mHandle, NodeID, &ErrCode);

    /* update instances */
    if (--NumberOfInstances <= 0) {
        /* Close Device */
        VCS_CloseDevice(mHandle, &ErrCode);
        mHandle = NULL;
    }
    LeaveLock();
}

/*======================================================*
 * See sfuntmpl_doc.c for the optional S-function methods *
 *======================================================*/

/*=============================*
 * Required S-function trailer *
 *=============================*/

#ifdef  MATLAB_MEX_FILE    /* Is this file being compiled as a MEX-file? */
#include "simulink.c"      /* MEX-file interface mechanism */
#else

#include "cg_sfun.h"       /* Code generation registration function */

#endif