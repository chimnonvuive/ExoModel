/*
 * File: Motor_and_Driver.c
 *
 * Code generated for Simulink model 'Motor_and_Driver'.
 *
 * Model version                  : 4.59
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Fri Apr 15 17:20:30 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 * Validation result: Not run
 */

#include "Motor_and_Driver.h"
#include "Motor_and_Driver_private.h"

/* Block signals and states (default storage) */
DW_Motor_and_Driver_T Motor_and_Driver_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Motor_and_Driver_T Motor_and_Driver_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Motor_and_Driver_T Motor_and_Driver_Y;

/* Real-time model */
static RT_MODEL_Motor_and_Driver_T Motor_and_Driver_M_;
RT_MODEL_Motor_and_Driver_T *const Motor_and_Driver_M = &Motor_and_Driver_M_;
static void rate_scheduler(void);

/*
 *         This function updates active task flag for each subrate.
 *         The function is called at model base rate, hence the
 *         generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (Motor_and_Driver_M->Timing.TaskCounters.TID[1])++;
  if ((Motor_and_Driver_M->Timing.TaskCounters.TID[1]) > 2) {/* Sample time: [6.0E-5s, 0.0s] */
    Motor_and_Driver_M->Timing.TaskCounters.TID[1] = 0;
  }

  (Motor_and_Driver_M->Timing.TaskCounters.TID[2])++;
  if ((Motor_and_Driver_M->Timing.TaskCounters.TID[2]) > 19) {/* Sample time: [0.0004s, 0.0s] */
    Motor_and_Driver_M->Timing.TaskCounters.TID[2] = 0;
  }

  (Motor_and_Driver_M->Timing.TaskCounters.TID[3])++;
  if ((Motor_and_Driver_M->Timing.TaskCounters.TID[3]) > 749) {/* Sample time: [0.015s, 0.0s] */
    Motor_and_Driver_M->Timing.TaskCounters.TID[3] = 0;
  }
}

/* Model step function */
void Motor_and_Driver_step(void)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  real_T tmp_3[25];
  real_T tmp_0[8];
  real_T tmp_5[8];
  real_T rtb_OUTPUT_1_0[6];
  real_T rtb_RateTransition[3];
  real_T rtb_DataTypeConversion;
  real_T rtb_DataTypeConversion1;
  real_T rtb_DeadZone;
  real_T rtb_DiscreteTimeIntegrator;
  real_T rtb_RateTransition1;
  real_T rtb_Saturation;
  real_T rtb_SignPreIntegrator;
  real_T rtb_SignPreSat_owyc;
  real_T rtb_UnitDelay1;
  real_T rtb_current_set;
  real_T rtb_omgHatk;
  real_T rtb_pre_sat_signal;
  real_T thetaHatk;
  real_T time;
  real_T time_0;
  real_T time_1;
  int32_T tmp_2;
  int_T tmp_4[4];
  int_T tmp_1[3];
  int_T tmp_6[3];
  real32_T rtb_DataTypeConversion1_a1dj;
  real32_T rtb_DataTypeConversion_dvlg;
  real32_T rtb_DataTypeConversion_ndiq;
  real32_T rtb_RateTransition2;
  boolean_T rtb_AND;
  boolean_T tmp;

  /* RateTransition: '<S1>/Rate Transition3' */
  if (Motor_and_Driver_M->Timing.TaskCounters.TID[1] == 0) {
    NeuDiagnosticTree *diagnosticTree;
    NeuDiagnosticTree *diagnosticTree_0;
    rtb_current_set =
      Motor_and_Driver_DW.RateTransition3_Buffer[Motor_and_Driver_DW.RateTransition3_ActiveBufIdx];

    /* UnitDelay: '<S6>/Unit Delay1' */
    rtb_UnitDelay1 = Motor_and_Driver_DW.UnitDelay1_DSTATE;

    /* Sum: '<S6>/Sum' */
    rtb_current_set -= rtb_UnitDelay1;

    /* Sum: '<S58>/Sum' incorporates:
     *  Constant: '<S14>/Constant'
     *  DiscreteIntegrator: '<S49>/Integrator'
     *  Product: '<S54>/PProd Out'
     *  UnitConversion: '<S14>/Unit Conversion'
     */
    /* Unit Conversion - from: uV/A to: V/A
       Expression: output = (1e-06*input) + (0) */
    rtb_SignPreSat_owyc = (rtb_current_set * (1.0E-6 *
      Motor_and_Driver_P.x30A0_1)) + Motor_and_Driver_DW.Integrator_DSTATE;

    /* Saturate: '<S56>/Saturation' */
    if (rtb_SignPreSat_owyc > Motor_and_Driver_P.x607325_VNom) {
      rtb_Saturation = Motor_and_Driver_P.x607325_VNom;
    } else if (rtb_SignPreSat_owyc < (-Motor_and_Driver_P.x607325_VNom)) {
      rtb_Saturation = -Motor_and_Driver_P.x607325_VNom;
    } else {
      rtb_Saturation = rtb_SignPreSat_owyc;
    }

    /* End of Saturate: '<S56>/Saturation' */

    /* If: '<S66>/If1' */
    if (rtb_Saturation >= 0.0) {
      /* Outputs for IfAction SubSystem: '<S66>/If Action Subsystem' incorporates:
       *  ActionPort: '<S68>/Action Port'
       */
      /* Merge: '<S66>/Merge1' incorporates:
       *  Constant: '<S68>/Zero'
       *  SignalConversion generated from: '<S68>/Out2'
       */
      Motor_and_Driver_DW.Merge1 = Motor_and_Driver_P.Zero_Value;

      /* Merge: '<S66>/Merge' incorporates:
       *  Inport: '<S68>/In1'
       */
      Motor_and_Driver_DW.Merge = rtb_Saturation;

      /* End of Outputs for SubSystem: '<S66>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S66>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S69>/Action Port'
       */
      /* Merge: '<S66>/Merge1' incorporates:
       *  Constant: '<S69>/Constant'
       *  SignalConversion generated from: '<S69>/Out2'
       */
      Motor_and_Driver_DW.Merge1 = Motor_and_Driver_P.x607325_VNom;

      /* Merge: '<S66>/Merge' incorporates:
       *  Gain: '<S69>/Gain'
       */
      Motor_and_Driver_DW.Merge = Motor_and_Driver_P.Gain_Gain * rtb_Saturation;

      /* End of Outputs for SubSystem: '<S66>/If Action Subsystem1' */
    }

    /* End of If: '<S66>/If1' */

    /* SimscapeInputBlock: '<S99>/INPUT_1_1_1' */
    if (Motor_and_Driver_M->Timing.TaskCounters.TID[1] == 0) {
      Motor_and_Driver_DW.INPUT_1_1_1[0] = Motor_and_Driver_DW.Merge;
      Motor_and_Driver_DW.INPUT_1_1_1[1] = 0.0;
      Motor_and_Driver_DW.INPUT_1_1_1[2] = 0.0;
      Motor_and_Driver_DW.INPUT_1_1_1_Discrete[0] =
        (Motor_and_Driver_DW.INPUT_1_1_1[0] !=
         Motor_and_Driver_DW.INPUT_1_1_1_Discrete[1]);
      Motor_and_Driver_DW.INPUT_1_1_1_Discrete[1] =
        Motor_and_Driver_DW.INPUT_1_1_1[0];
      Motor_and_Driver_DW.INPUT_1_1_1[0] =
        Motor_and_Driver_DW.INPUT_1_1_1_Discrete[1];
      Motor_and_Driver_DW.INPUT_1_1_1[3] =
        Motor_and_Driver_DW.INPUT_1_1_1_Discrete[0];

      /* SimscapeInputBlock: '<S99>/INPUT_2_1_1' incorporates:
       *  SimscapeInputBlock: '<S99>/INPUT_1_1_1'
       */
      Motor_and_Driver_DW.INPUT_2_1_1[0] = Motor_and_Driver_DW.Merge1;
      Motor_and_Driver_DW.INPUT_2_1_1[1] = 0.0;
      Motor_and_Driver_DW.INPUT_2_1_1[2] = 0.0;
      Motor_and_Driver_DW.INPUT_2_1_1_Discrete[0] =
        (Motor_and_Driver_DW.INPUT_2_1_1[0] !=
         Motor_and_Driver_DW.INPUT_2_1_1_Discrete[1]);
      Motor_and_Driver_DW.INPUT_2_1_1_Discrete[1] =
        Motor_and_Driver_DW.INPUT_2_1_1[0];
      Motor_and_Driver_DW.INPUT_2_1_1[0] =
        Motor_and_Driver_DW.INPUT_2_1_1_Discrete[1];
      Motor_and_Driver_DW.INPUT_2_1_1[3] =
        Motor_and_Driver_DW.INPUT_2_1_1_Discrete[0];
    }

    /* End of SimscapeInputBlock: '<S99>/INPUT_1_1_1' */

    /* SimscapeExecutionBlock: '<S99>/STATE_1' incorporates:
     *  SimscapeExecutionBlock: '<S99>/OUTPUT_1_0'
     */
    simulationData = (NeslSimulationData *)Motor_and_Driver_DW.STATE_1_SimData;
    rtb_Saturation = (((Motor_and_Driver_M->Timing.clockTick0+
                        Motor_and_Driver_M->Timing.clockTickH0* 4294967296.0)) *
                      2.0E-5);
    time = rtb_Saturation;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 14;
    simulationData->mData->mDiscStates.mX =
      &Motor_and_Driver_DW.STATE_1_Discrete[0];
    simulationData->mData->mModeVector.mN = 3;
    simulationData->mData->mModeVector.mX = &Motor_and_Driver_DW.STATE_1_Modes[0];
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = true;
    tmp_1[0] = 0;
    tmp_0[0] = Motor_and_Driver_DW.INPUT_1_1_1[0];
    tmp_0[1] = Motor_and_Driver_DW.INPUT_1_1_1[1];
    tmp_0[2] = Motor_and_Driver_DW.INPUT_1_1_1[2];
    tmp_0[3] = Motor_and_Driver_DW.INPUT_1_1_1[3];
    tmp_1[1] = 4;
    tmp_0[4] = Motor_and_Driver_DW.INPUT_2_1_1[0];
    tmp_0[5] = Motor_and_Driver_DW.INPUT_2_1_1[1];
    tmp_0[6] = Motor_and_Driver_DW.INPUT_2_1_1[2];
    tmp_0[7] = Motor_and_Driver_DW.INPUT_2_1_1[3];
    tmp_1[2] = 8;
    simulationData->mData->mInputValues.mN = 8;
    simulationData->mData->mInputValues.mX = &tmp_0[0];
    simulationData->mData->mInputOffsets.mN = 3;
    simulationData->mData->mInputOffsets.mX = &tmp_1[0];
    simulationData->mData->mOutputs.mN = 17;
    simulationData->mData->mOutputs.mX = &Motor_and_Driver_DW.STATE_1[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    tmp = Motor_and_Driver_M->Timing.TaskCounters.TID[1] == 0;
    simulationData->mData->mIsFundamentalSampleHit = tmp;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Motor_and_Driver_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)
      Motor_and_Driver_DW.STATE_1_Simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(((void*) 0));
      if (tmp) {
        char *msg;
        msg = rtw_diagnostics_msg(diagnosticTree);
        ((void) 0);
      }
    }

    /* End of SimscapeExecutionBlock: '<S99>/STATE_1' */

    /* SimscapeExecutionBlock: '<S99>/OUTPUT_1_0' */
    simulationData = (NeslSimulationData *)
      Motor_and_Driver_DW.OUTPUT_1_0_SimData;
    time_0 = rtb_Saturation;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_0;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Motor_and_Driver_DW.OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Motor_and_Driver_DW.OUTPUT_1_0_Modes;
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = true;
    tmp_4[0] = 0;
    tmp_3[0] = Motor_and_Driver_DW.INPUT_1_1_1[0];
    tmp_3[1] = Motor_and_Driver_DW.INPUT_1_1_1[1];
    tmp_3[2] = Motor_and_Driver_DW.INPUT_1_1_1[2];
    tmp_3[3] = Motor_and_Driver_DW.INPUT_1_1_1[3];
    tmp_4[1] = 4;
    tmp_3[4] = Motor_and_Driver_DW.INPUT_2_1_1[0];
    tmp_3[5] = Motor_and_Driver_DW.INPUT_2_1_1[1];
    tmp_3[6] = Motor_and_Driver_DW.INPUT_2_1_1[2];
    tmp_3[7] = Motor_and_Driver_DW.INPUT_2_1_1[3];
    tmp_4[2] = 8;
    memcpy(&tmp_3[8], &Motor_and_Driver_DW.STATE_1[0], 17U * (sizeof(real_T)));
    tmp_4[3] = 25;
    simulationData->mData->mInputValues.mN = 25;
    simulationData->mData->mInputValues.mX = &tmp_3[0];
    simulationData->mData->mInputOffsets.mN = 4;
    simulationData->mData->mInputOffsets.mX = &tmp_4[0];
    simulationData->mData->mOutputs.mN = 6;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_1_0[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    tmp = Motor_and_Driver_M->Timing.TaskCounters.TID[1] == 0;
    simulationData->mData->mIsFundamentalSampleHit = tmp;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Motor_and_Driver_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)
      Motor_and_Driver_DW.OUTPUT_1_0_Simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(((void*) 0));
      if (tmp) {
        char *msg_0;
        msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
        ((void) 0);
      }
    }

    /* DataTypeConversion: '<S83>/Data Type Conversion1' */
    rtb_DataTypeConversion1_a1dj = (real32_T)rtb_OUTPUT_1_0[1];

    /* DataTypeConversion: '<S83>/Data Type Conversion' */
    rtb_DataTypeConversion_dvlg = (real32_T)rtb_OUTPUT_1_0[2];

    /* DataTypeConversion: '<S67>/Data Type Conversion' */
    rtb_DataTypeConversion_ndiq = (real32_T)rtb_OUTPUT_1_0[0];

    /* BusCreator: '<S3>/Bus Creator' incorporates:
     *  Outport: '<Root>/motorInfo'
     */
    Motor_and_Driver_Y.motorInfo_owf2.Angle = rtb_DataTypeConversion1_a1dj;
    Motor_and_Driver_Y.motorInfo_owf2.Speed = rtb_DataTypeConversion_dvlg;
    Motor_and_Driver_Y.motorInfo_owf2.Current = rtb_DataTypeConversion_ndiq;
  }

  /* End of RateTransition: '<S1>/Rate Transition3' */

  /* RateTransition: '<S1>/Rate Transition2' incorporates:
   *  Outport: '<Root>/motorInfo'
   */
  if (Motor_and_Driver_M->Timing.TaskCounters.TID[2] == 0) {
    rtb_RateTransition2 = Motor_and_Driver_Y.motorInfo_owf2.Angle;
  }

  /* End of RateTransition: '<S1>/Rate Transition2' */
  if (Motor_and_Driver_M->Timing.TaskCounters.TID[1] == 0) {
    real_T rtb_current_set_0;

    /* DataTypeConversion: '<S67>/Data Type Conversion1' */
    rtb_DataTypeConversion1 = rtb_DataTypeConversion_ndiq;

    /* Product: '<S85>/Divide1' incorporates:
     *  Constant: '<S85>/Constant1'
     */
    Motor_and_Driver_Y.RespSignal_k25n.Speed = rtb_DataTypeConversion_dvlg /
      Motor_and_Driver_P.x28_000006_reduction;

    /* Product: '<S84>/Divide' incorporates:
     *  Constant: '<S84>/Constant'
     */
    Motor_and_Driver_Y.RespSignal_k25n.Angle = rtb_DataTypeConversion1_a1dj /
      Motor_and_Driver_P.x28_000006_reduction;

    /* Gain: '<S92>/GAIN' */
    rtb_SignPreIntegrator = Motor_and_Driver_P.GAIN_Gain * rtb_OUTPUT_1_0[3];

    /* BusCreator: '<S2>/Bus Creator1' incorporates:
     *  DataTypeConversion: '<S86>/Data Type Conversion'
     *  Outport: '<Root>/RespSignal'
     */
    Motor_and_Driver_Y.RespSignal_k25n.Torque = (real32_T)rtb_SignPreIntegrator;

    /* Gain: '<S40>/ZeroGain' */
    rtb_SignPreIntegrator = Motor_and_Driver_P.ZeroGain_Gain *
      rtb_SignPreSat_owyc;

    /* DeadZone: '<S42>/DeadZone' */
    if (rtb_SignPreSat_owyc > Motor_and_Driver_P.x607325_VNom) {
      rtb_SignPreSat_owyc -= Motor_and_Driver_P.x607325_VNom;
    } else if (rtb_SignPreSat_owyc >= (-Motor_and_Driver_P.x607325_VNom)) {
      rtb_SignPreSat_owyc = 0.0;
    } else {
      rtb_SignPreSat_owyc -= -Motor_and_Driver_P.x607325_VNom;
    }

    /* End of DeadZone: '<S42>/DeadZone' */

    /* Product: '<S46>/IProd Out' incorporates:
     *  Constant: '<S15>/Constant'
     *  UnitConversion: '<S15>/Unit Conversion'
     */
    /* Unit Conversion - from: uV/(A*ms) to: V/(A*s)
       Expression: output = (0.001*input) + (0) */
    rtb_current_set *= 0.001 * Motor_and_Driver_P.x30A0_2;

    /* Signum: '<S40>/SignPreSat' */
    if (rtb_SignPreSat_owyc < 0.0) {
      rtb_Saturation = -1.0;
    } else if (rtb_SignPreSat_owyc > 0.0) {
      rtb_Saturation = 1.0;
    } else {
      rtb_Saturation = rtb_SignPreSat_owyc;
    }

    /* End of Signum: '<S40>/SignPreSat' */

    /* Signum: '<S40>/SignPreIntegrator' */
    if (rtb_current_set < 0.0) {
      rtb_current_set_0 = -1.0;
    } else if (rtb_current_set > 0.0) {
      rtb_current_set_0 = 1.0;
    } else {
      rtb_current_set_0 = rtb_current_set;
    }

    /* End of Signum: '<S40>/SignPreIntegrator' */

    /* Switch: '<S40>/Switch' incorporates:
     *  Constant: '<S40>/Constant1'
     *  DataTypeConversion: '<S40>/DataTypeConv1'
     *  DataTypeConversion: '<S40>/DataTypeConv2'
     *  Logic: '<S40>/AND3'
     *  RelationalOperator: '<S40>/Equal1'
     *  RelationalOperator: '<S40>/NotEqual'
     */
    if ((boolean_T)((rtb_SignPreIntegrator != rtb_SignPreSat_owyc) & (((int8_T)
           rtb_Saturation) == ((int8_T)rtb_current_set_0)))) {
      rtb_SignPreIntegrator = Motor_and_Driver_P.Constant1_Value;
    } else {
      rtb_SignPreIntegrator = rtb_current_set;
    }

    /* End of Switch: '<S40>/Switch' */

    /* RateTransition: '<S1>/Rate Transition1' */
    Motor_and_Driver_DW.RateTransition1_Buffer[Motor_and_Driver_DW.RateTransition1_semaphoreTaken
      == 0] = rtb_UnitDelay1;
    Motor_and_Driver_DW.RateTransition1_ActiveBufIdx = (int8_T)
      (Motor_and_Driver_DW.RateTransition1_semaphoreTaken == 0);
  }

  /* RateTransition: '<S1>/Rate Transition1' incorporates:
   *  RateTransition: '<S1>/Rate Transition3'
   */
  if (Motor_and_Driver_M->Timing.TaskCounters.TID[2] == 0) {
    Motor_and_Driver_DW.RateTransition1_semaphoreTaken =
      Motor_and_Driver_DW.RateTransition1_ActiveBufIdx;
    rtb_RateTransition1 =
      Motor_and_Driver_DW.RateTransition1_Buffer[Motor_and_Driver_DW.RateTransition1_semaphoreTaken];

    /* Product: '<S79>/Product' incorporates:
     *  Constant: '<S79>/J_EPOS4'
     *  Constant: '<S81>/k_mEPOS4'
     *  Constant: '<S82>/r_EPOS4'
     *  DiscreteIntegrator: '<S9>/Discrete-Time Integrator'
     *  Product: '<S81>/Product'
     *  Product: '<S82>/Product'
     *  Sum: '<S9>/Add1'
     *  UnitConversion: '<S79>/Unit Conversion'
     *  UnitConversion: '<S81>/Unit Conversion'
     *  UnitConversion: '<S82>/Unit Conversion'
     *  UnitDelay: '<S9>/Unit Delay'
     */
    /* Unit Conversion - from: uN*m/A to: N*m/A
       Expression: output = (1e-06*input) + (0) */
    /* Unit Conversion - from: uN*mm/rpm to: N*m/(rad/s)
       Expression: output = (9.5493e-09*input) + (0) */
    /* Unit Conversion - from: mg*cm^2 to: kg*m^2
       Expression: output = (1e-10*input) + (0) */
    rtb_RateTransition1 = (((rtb_RateTransition1 * (1.0E-6 *
      Motor_and_Driver_P.x3001_5)) -
      (Motor_and_Driver_DW.DiscreteTimeIntegrator_DSTATE * (9.54929658551372E-9 *
      Motor_and_Driver_P.x30A3_4))) - Motor_and_Driver_DW.UnitDelay_DSTATE) /
      (1.0E-10 * Motor_and_Driver_P.x30A3_5);

    /* MATLAB Function: '<S9>/MATLAB Function' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion'
     *  DiscreteIntegrator: '<S9>/Discrete-Time Integrator'
     *  DiscreteIntegrator: '<S9>/Discrete-Time Integrator1'
     *  UnitDelay: '<S1>/Unit Delay'
     *  UnitDelay: '<S9>/Unit Delay'
     */
    rtb_current_set = Motor_and_Driver_DW.UnitDelay_DSTATE_jn0o -
      (Motor_and_Driver_DW.DiscreteTimeIntegrator1_DSTATE +
       ((Motor_and_Driver_P.x30A3_1 / 1000.0) *
        (Motor_and_Driver_DW.UnitDelay_DSTATE_jn0o -
         Motor_and_Driver_DW.DiscreteTimeIntegrator1_DSTATE)));
    rtb_omgHatk = Motor_and_Driver_DW.DiscreteTimeIntegrator_DSTATE +
      ((Motor_and_Driver_P.x30A3_2 / 1000.0) * rtb_current_set);
    thetaHatk = Motor_and_Driver_DW.UnitDelay_DSTATE +
      ((Motor_and_Driver_P.x30A3_3 / 1.0E+6) * rtb_current_set);

    /* Saturate: '<S9>/Saturation' */
    rtb_pre_sat_signal = (-Motor_and_Driver_P.x607325_Torq) / 1000.0;
    rtb_DeadZone = Motor_and_Driver_P.x607325_Torq / 1000.0;
    if (thetaHatk > rtb_DeadZone) {
      thetaHatk = rtb_DeadZone;
    } else if (thetaHatk < rtb_pre_sat_signal) {
      thetaHatk = rtb_pre_sat_signal;
    }

    /* End of Saturate: '<S9>/Saturation' */

    /* RateTransition: '<Root>/Rate Transition' */
    tmp_2 = Motor_and_Driver_DW.RateTransition_ActiveBufIdx * 3;
    rtb_RateTransition[1] = Motor_and_Driver_DW.RateTransition_Buffer[tmp_2 + 1];
    rtb_RateTransition[2] = Motor_and_Driver_DW.RateTransition_Buffer[tmp_2 + 2];

    /* Sum: '<S1>/Sum' */
    rtb_UnitDelay1 = rtb_RateTransition[1] - rtb_omgHatk;

    /* Sum: '<S8>/Add' incorporates:
     *  Constant: '<S10>/Constant'
     *  Constant: '<S10>/Constant1'
     *  Constant: '<S10>/Constant2'
     *  Constant: '<S11>/Constant'
     *  Constant: '<S11>/Constant1'
     *  Constant: '<S77>/Constant'
     *  DiscreteIntegrator: '<S8>/Discrete-Time Integrator'
     *  Gain: '<S10>/Gain1'
     *  Product: '<S10>/Product'
     *  Product: '<S11>/Product'
     *  Product: '<S77>/Product'
     *  Sum: '<S10>/Add'
     *  UnitConversion: '<S10>/Unit Conversion'
     *  UnitConversion: '<S11>/Unit Conversion'
     *  UnitConversion: '<S11>/Unit Conversion1'
     *  UnitConversion: '<S77>/Unit Conversion'
     */
    /* Unit Conversion - from: uA*s/rad to: A*s/rad
       Expression: output = (1e-06*input) + (0) */
    /* Unit Conversion - from: mN*m/A to: N*m/A
       Expression: output = (0.001*input) + (0) */
    /* Unit Conversion - from: uN*m/(rpm) to: N*m/(rad/s)
       Expression: output = (9.5493e-06*input) + (0) */
    /* Unit Conversion - from: mN*m/A to: N*m/A
       Expression: output = (0.001*input) + (0) */
    rtb_pre_sat_signal = (((((Motor_and_Driver_P.Gain1_Gain *
      (Motor_and_Driver_P.x607325_RotIner +
       Motor_and_Driver_P.feedforward_acceleration_Value)) / (0.001 *
      Motor_and_Driver_P.x607325_TorqConst)) * rtb_RateTransition[2]) +
      (((9.5492965855137212E-6 * Motor_and_Driver_P.feedforward_velocity_Value) /
        (0.001 * Motor_and_Driver_P.x607325_TorqConst)) * rtb_RateTransition[1]))
                          + (rtb_UnitDelay1 * (1.0E-6 *
      Motor_and_Driver_P.x30A2_1))) +
      Motor_and_Driver_DW.DiscreteTimeIntegrator_DST_do51;

    /* Saturate: '<S8>/Saturation' */
    if (rtb_pre_sat_signal > Motor_and_Driver_P.x520886_ICont) {
      rtb_Saturation = Motor_and_Driver_P.x520886_ICont;
    } else if (rtb_pre_sat_signal < (-Motor_and_Driver_P.x520886_ICont)) {
      rtb_Saturation = -Motor_and_Driver_P.x520886_ICont;
    } else {
      rtb_Saturation = rtb_pre_sat_signal;
    }

    /* End of Saturate: '<S8>/Saturation' */

    /* Product: '<S76>/Product' incorporates:
     *  Constant: '<S76>/Constant'
     *  UnitConversion: '<S76>/Unit Conversion'
     */
    /* Unit Conversion - from: uA/rad to: A/rad
       Expression: output = (1e-06*input) + (0) */
    rtb_UnitDelay1 *= 1.0E-6 * Motor_and_Driver_P.x30A2_2;

    /* DeadZone: '<S78>/Dead Zone' incorporates:
     *  UnitDelay: '<S8>/Unit Delay'
     */
    if (Motor_and_Driver_DW.UnitDelay_DSTATE_f5ht >
        Motor_and_Driver_P.x520886_ICont) {
      rtb_DeadZone = Motor_and_Driver_DW.UnitDelay_DSTATE_f5ht -
        Motor_and_Driver_P.x520886_ICont;
    } else if (Motor_and_Driver_DW.UnitDelay_DSTATE_f5ht >=
               (-Motor_and_Driver_P.x520886_ICont)) {
      rtb_DeadZone = 0.0;
    } else {
      rtb_DeadZone = Motor_and_Driver_DW.UnitDelay_DSTATE_f5ht -
        (-Motor_and_Driver_P.x520886_ICont);
    }

    /* End of DeadZone: '<S78>/Dead Zone' */

    /* Signum: '<S78>/SignPreSat' */
    if (rtb_DeadZone < 0.0) {
      rtb_current_set = -1.0;
    } else if (rtb_DeadZone > 0.0) {
      rtb_current_set = 1.0;
    } else {
      rtb_current_set = rtb_DeadZone;
    }

    /* End of Signum: '<S78>/SignPreSat' */

    /* Signum: '<S78>/SignPreInt' */
    if (rtb_UnitDelay1 < 0.0) {
      rtb_SignPreSat_owyc = -1.0;
    } else if (rtb_UnitDelay1 > 0.0) {
      rtb_SignPreSat_owyc = 1.0;
    } else {
      rtb_SignPreSat_owyc = rtb_UnitDelay1;
    }

    /* End of Signum: '<S78>/SignPreInt' */

    /* Logic: '<S78>/AND' incorporates:
     *  DataTypeConversion: '<S78>/Data Type Conversion'
     *  DataTypeConversion: '<S78>/Data Type Conversion1'
     *  Gain: '<S78>/ZeroGain'
     *  RelationalOperator: '<S78>/Equal'
     *  RelationalOperator: '<S78>/NotEqual'
     *  UnitDelay: '<S8>/Unit Delay'
     */
    rtb_AND = ((Motor_and_Driver_P.ZeroGain_Gain_m40c *
                Motor_and_Driver_DW.UnitDelay_DSTATE_f5ht) != rtb_DeadZone) &
      (((int8_T)rtb_current_set) == ((int8_T)rtb_SignPreSat_owyc));

    /* Switch: '<S78>/Switch' incorporates:
     *  Constant: '<S78>/Constant'
     *  Memory: '<S78>/Memory'
     */
    if (Motor_and_Driver_DW.Memory_PreviousInput) {
      rtb_DeadZone = Motor_and_Driver_P.Constant_Value;
    } else {
      rtb_DeadZone = rtb_UnitDelay1;
    }

    /* End of Switch: '<S78>/Switch' */
    Motor_and_Driver_DW.RateTransition3_Buffer[Motor_and_Driver_DW.RateTransition3_ActiveBufIdx
      == 0] = rtb_Saturation;
    Motor_and_Driver_DW.RateTransition3_ActiveBufIdx = (int8_T)
      (Motor_and_Driver_DW.RateTransition3_ActiveBufIdx == 0);
  }

  if (Motor_and_Driver_M->Timing.TaskCounters.TID[3] == 0) {
    /* DataTypeConversion: '<Root>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/RefSignal'
     */
    rtb_DataTypeConversion = Motor_and_Driver_U.RefSignal;

    /* DiscreteIntegrator: '<Root>/Discrete-Time Integrator' */
    rtb_DiscreteTimeIntegrator =
      Motor_and_Driver_DW.DiscreteTimeIntegrator_DST_ju3b;
  }

  if (Motor_and_Driver_M->Timing.TaskCounters.TID[1] == 0) {
    NeuDiagnosticTree *diagnosticTree_1;

    /* Update for UnitDelay: '<S6>/Unit Delay1' */
    Motor_and_Driver_DW.UnitDelay1_DSTATE = rtb_DataTypeConversion1;

    /* Update for DiscreteIntegrator: '<S49>/Integrator' */
    Motor_and_Driver_DW.Integrator_DSTATE +=
      Motor_and_Driver_P.Integrator_gainval * rtb_SignPreIntegrator;

    /* Update for SimscapeExecutionBlock: '<S99>/STATE_1' */
    simulationData = (NeslSimulationData *)Motor_and_Driver_DW.STATE_1_SimData;
    time_1 = (((Motor_and_Driver_M->Timing.clockTick0+
                Motor_and_Driver_M->Timing.clockTickH0* 4294967296.0)) * 2.0E-5);
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 14;
    simulationData->mData->mDiscStates.mX =
      &Motor_and_Driver_DW.STATE_1_Discrete[0];
    simulationData->mData->mModeVector.mN = 3;
    simulationData->mData->mModeVector.mX = &Motor_and_Driver_DW.STATE_1_Modes[0];
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    simulationData->mData->mIsMajorTimeStep = true;
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = true;
    tmp_6[0] = 0;
    tmp_5[0] = Motor_and_Driver_DW.INPUT_1_1_1[0];
    tmp_5[1] = Motor_and_Driver_DW.INPUT_1_1_1[1];
    tmp_5[2] = Motor_and_Driver_DW.INPUT_1_1_1[2];
    tmp_5[3] = Motor_and_Driver_DW.INPUT_1_1_1[3];
    tmp_6[1] = 4;
    tmp_5[4] = Motor_and_Driver_DW.INPUT_2_1_1[0];
    tmp_5[5] = Motor_and_Driver_DW.INPUT_2_1_1[1];
    tmp_5[6] = Motor_and_Driver_DW.INPUT_2_1_1[2];
    tmp_5[7] = Motor_and_Driver_DW.INPUT_2_1_1[3];
    tmp_6[2] = 8;
    simulationData->mData->mInputValues.mN = 8;
    simulationData->mData->mInputValues.mX = &tmp_5[0];
    simulationData->mData->mInputOffsets.mN = 3;
    simulationData->mData->mInputOffsets.mX = &tmp_6[0];
    diagnosticManager = (NeuDiagnosticManager *)
      Motor_and_Driver_DW.STATE_1_DiagMgr;
    diagnosticTree_1 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)
      Motor_and_Driver_DW.STATE_1_Simulator, NESL_SIM_UPDATE, simulationData,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(((void*) 0));
      if (tmp) {
        char *msg_1;
        msg_1 = rtw_diagnostics_msg(diagnosticTree_1);
        ((void) 0);
      }
    }

    /* End of Update for SimscapeExecutionBlock: '<S99>/STATE_1' */
  }

  if (Motor_and_Driver_M->Timing.TaskCounters.TID[2] == 0) {
    /* Update for UnitDelay: '<S9>/Unit Delay' */
    Motor_and_Driver_DW.UnitDelay_DSTATE = thetaHatk;

    /* Update for DiscreteIntegrator: '<S9>/Discrete-Time Integrator' */
    Motor_and_Driver_DW.DiscreteTimeIntegrator_DSTATE +=
      Motor_and_Driver_P.DiscreteTimeIntegrator_gainval * rtb_RateTransition1;
    rtb_DataTypeConversion1 = (Motor_and_Driver_P.x607325_RotOmgMax *
      3.1415926535897931) / 30.0;
    if (Motor_and_Driver_DW.DiscreteTimeIntegrator_DSTATE >=
        rtb_DataTypeConversion1) {
      Motor_and_Driver_DW.DiscreteTimeIntegrator_DSTATE =
        rtb_DataTypeConversion1;
    } else {
      rtb_DataTypeConversion1 = ((-Motor_and_Driver_P.x607325_RotOmgMax) *
        3.1415926535897931) / 30.0;
      if (Motor_and_Driver_DW.DiscreteTimeIntegrator_DSTATE <=
          rtb_DataTypeConversion1) {
        Motor_and_Driver_DW.DiscreteTimeIntegrator_DSTATE =
          rtb_DataTypeConversion1;
      }
    }

    /* End of Update for DiscreteIntegrator: '<S9>/Discrete-Time Integrator' */

    /* Update for UnitDelay: '<S1>/Unit Delay' */
    Motor_and_Driver_DW.UnitDelay_DSTATE_jn0o = rtb_RateTransition2;

    /* Update for DiscreteIntegrator: '<S9>/Discrete-Time Integrator1' */
    Motor_and_Driver_DW.DiscreteTimeIntegrator1_DSTATE +=
      Motor_and_Driver_P.DiscreteTimeIntegrator1_gainval * rtb_omgHatk;

    /* Update for DiscreteIntegrator: '<S8>/Discrete-Time Integrator' */
    Motor_and_Driver_DW.DiscreteTimeIntegrator_DST_do51 +=
      Motor_and_Driver_P.DiscreteTimeIntegrator_gai_bz4v * rtb_DeadZone;

    /* Update for UnitDelay: '<S8>/Unit Delay' */
    Motor_and_Driver_DW.UnitDelay_DSTATE_f5ht = rtb_pre_sat_signal;

    /* Update for Memory: '<S78>/Memory' */
    Motor_and_Driver_DW.Memory_PreviousInput = rtb_AND;
  }

  /* Update for RateTransition: '<Root>/Rate Transition' */
  if (Motor_and_Driver_M->Timing.TaskCounters.TID[3] == 0) {
    Motor_and_Driver_DW.RateTransition_Buffer
      [(Motor_and_Driver_DW.RateTransition_ActiveBufIdx == 0) * 3] = 0.0;
    Motor_and_Driver_DW.RateTransition_Buffer[1 +
      ((Motor_and_Driver_DW.RateTransition_ActiveBufIdx == 0) * 3)] =
      rtb_DataTypeConversion;
    Motor_and_Driver_DW.RateTransition_Buffer[2 +
      ((Motor_and_Driver_DW.RateTransition_ActiveBufIdx == 0) * 3)] =
      rtb_DiscreteTimeIntegrator;
    Motor_and_Driver_DW.RateTransition_ActiveBufIdx = (int8_T)
      (Motor_and_Driver_DW.RateTransition_ActiveBufIdx == 0);

    /* Update for DiscreteIntegrator: '<Root>/Discrete-Time Integrator' */
    Motor_and_Driver_DW.DiscreteTimeIntegrator_DST_ju3b +=
      Motor_and_Driver_P.DiscreteTimeIntegrator_gai_lwd1 *
      rtb_DataTypeConversion;
  }

  /* End of Update for RateTransition: '<Root>/Rate Transition' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 2.0E-5, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  Motor_and_Driver_M->Timing.clockTick0++;
  if (!Motor_and_Driver_M->Timing.clockTick0) {
    Motor_and_Driver_M->Timing.clockTickH0++;
  }

  rate_scheduler();
}

/* Model initialize function */
void Motor_and_Driver_initialize(void)
{
  {
    NeModelParameters modelParameters;
    NeModelParameters modelParameters_0;
    NeslSimulationData *tmp_1;
    NeslSimulator *tmp;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    NeuDiagnosticTree *diagnosticTree_0;
    real_T tmp_2;
    int32_T tmp_3;
    boolean_T tmp_0;

    /* Start for SimscapeExecutionBlock: '<S99>/STATE_1' */
    tmp = nesl_lease_simulator("Motor_and_Driver/Solver Configuration_1", 0, 0);
    Motor_and_Driver_DW.STATE_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Motor_and_Driver_DW.STATE_1_Simulator);
    if (tmp_0) {
      Motor_and_Driver_678d4e8_1_gateway();
      tmp = nesl_lease_simulator("Motor_and_Driver/Solver Configuration_1", 0, 0);
      Motor_and_Driver_DW.STATE_1_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Motor_and_Driver_DW.STATE_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Motor_and_Driver_DW.STATE_1_DiagMgr = (void *)diagnosticManager;
    modelParameters.mSolverType = NE_SOLVER_TYPE_DISCRETE;
    modelParameters.mSolverTolerance = 0.001;
    modelParameters.mVariableStepSolver = false;
    modelParameters.mIsUsingODEN = false;
    modelParameters.mFixedStepSize = 0.001;
    modelParameters.mStartTime = 0.0;
    modelParameters.mLoadInitialState = false;
    modelParameters.mUseSimState = false;
    modelParameters.mLinTrimCompile = false;
    modelParameters.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters.mRTWModifiedTimeStamp = 5.71940484E+8;
    modelParameters.mZcDisabled = false;
    tmp_2 = 0.001;
    modelParameters.mSolverTolerance = tmp_2;
    tmp_2 = 2.0E-5;
    modelParameters.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters.mIsUsingODEN = tmp_0;
    modelParameters.mLoadInitialState = false;
    modelParameters.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Motor_and_Driver_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator((NeslSimulator *)
      Motor_and_Driver_DW.STATE_1_Simulator, &modelParameters, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(((void*) 0));
      if (tmp_0) {
        char *msg;
        msg = rtw_diagnostics_msg(diagnosticTree);
        ((void) 0);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S99>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S99>/OUTPUT_1_0' */
    tmp = nesl_lease_simulator("Motor_and_Driver/Solver Configuration_1", 1, 0);
    Motor_and_Driver_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Motor_and_Driver_DW.OUTPUT_1_0_Simulator);
    if (tmp_0) {
      Motor_and_Driver_678d4e8_1_gateway();
      tmp = nesl_lease_simulator("Motor_and_Driver/Solver Configuration_1", 1, 0);
      Motor_and_Driver_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Motor_and_Driver_DW.OUTPUT_1_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Motor_and_Driver_DW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_0.mSolverType = NE_SOLVER_TYPE_DISCRETE;
    modelParameters_0.mSolverTolerance = 0.001;
    modelParameters_0.mVariableStepSolver = false;
    modelParameters_0.mIsUsingODEN = false;
    modelParameters_0.mFixedStepSize = 0.001;
    modelParameters_0.mStartTime = 0.0;
    modelParameters_0.mLoadInitialState = false;
    modelParameters_0.mUseSimState = false;
    modelParameters_0.mLinTrimCompile = false;
    modelParameters_0.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_0.mRTWModifiedTimeStamp = 5.71940484E+8;
    modelParameters_0.mZcDisabled = false;
    tmp_2 = 0.001;
    modelParameters_0.mSolverTolerance = tmp_2;
    tmp_2 = 2.0E-5;
    modelParameters_0.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters_0.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_0.mIsUsingODEN = tmp_0;
    modelParameters_0.mLoadInitialState = false;
    modelParameters_0.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Motor_and_Driver_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator((NeslSimulator *)
      Motor_and_Driver_DW.OUTPUT_1_0_Simulator, &modelParameters_0,
      diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(((void*) 0));
      if (tmp_0) {
        char *msg_0;
        msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
        ((void) 0);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S99>/OUTPUT_1_0' */

    /* InitializeConditions for RateTransition: '<S1>/Rate Transition3' */
    Motor_and_Driver_DW.RateTransition3_Buffer[0] =
      Motor_and_Driver_P.RateTransition3_InitialConditio;

    /* InitializeConditions for UnitDelay: '<S6>/Unit Delay1' */
    Motor_and_Driver_DW.UnitDelay1_DSTATE =
      Motor_and_Driver_P.UnitDelay1_InitialCondition;

    /* InitializeConditions for DiscreteIntegrator: '<S49>/Integrator' */
    Motor_and_Driver_DW.Integrator_DSTATE =
      Motor_and_Driver_P.DiscretePIController_InitialCon;

    /* InitializeConditions for RateTransition: '<S1>/Rate Transition1' */
    Motor_and_Driver_DW.RateTransition1_Buffer[0] =
      Motor_and_Driver_P.RateTransition1_InitialConditio;

    /* InitializeConditions for UnitDelay: '<S9>/Unit Delay' */
    Motor_and_Driver_DW.UnitDelay_DSTATE =
      Motor_and_Driver_P.UnitDelay_InitialCondition;

    /* InitializeConditions for DiscreteIntegrator: '<S9>/Discrete-Time Integrator' */
    Motor_and_Driver_DW.DiscreteTimeIntegrator_DSTATE =
      Motor_and_Driver_P.DiscreteTimeIntegrator_IC;

    /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
    Motor_and_Driver_DW.UnitDelay_DSTATE_jn0o =
      Motor_and_Driver_P.UnitDelay_InitialCondition_gjec;

    /* InitializeConditions for DiscreteIntegrator: '<S9>/Discrete-Time Integrator1' */
    Motor_and_Driver_DW.DiscreteTimeIntegrator1_DSTATE =
      Motor_and_Driver_P.DiscreteTimeIntegrator1_IC;

    /* InitializeConditions for RateTransition: '<Root>/Rate Transition' */
    Motor_and_Driver_DW.RateTransition_Buffer[0] =
      Motor_and_Driver_P.RateTransition_InitialCondition;
    Motor_and_Driver_DW.RateTransition_Buffer[1] =
      Motor_and_Driver_P.RateTransition_InitialCondition;
    Motor_and_Driver_DW.RateTransition_Buffer[2] =
      Motor_and_Driver_P.RateTransition_InitialCondition;

    /* InitializeConditions for DiscreteIntegrator: '<S8>/Discrete-Time Integrator' */
    Motor_and_Driver_DW.DiscreteTimeIntegrator_DST_do51 =
      Motor_and_Driver_P.DiscreteTimeIntegrator_IC_f5eg;

    /* InitializeConditions for UnitDelay: '<S8>/Unit Delay' */
    Motor_and_Driver_DW.UnitDelay_DSTATE_f5ht =
      Motor_and_Driver_P.UnitDelay_InitialCondition_mz0d;

    /* InitializeConditions for Memory: '<S78>/Memory' */
    Motor_and_Driver_DW.Memory_PreviousInput =
      Motor_and_Driver_P.Memory_InitialCondition;

    /* InitializeConditions for DiscreteIntegrator: '<Root>/Discrete-Time Integrator' */
    Motor_and_Driver_DW.DiscreteTimeIntegrator_DST_ju3b =
      Motor_and_Driver_P.DiscreteTimeIntegrator_IC_etzk;

    /* SystemInitialize for Merge: '<S66>/Merge' */
    Motor_and_Driver_DW.Merge = Motor_and_Driver_P.Merge_InitialOutput;

    /* SystemInitialize for Merge: '<S66>/Merge1' */
    Motor_and_Driver_DW.Merge1 = Motor_and_Driver_P.Merge1_InitialOutput;
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
