/*
 * File: Motor_and_Driver.c
 *
 * Code generated for Simulink model 'Motor_and_Driver'.
 *
 * Model version                  : 4.61
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Fri Apr 15 17:29:12 2022
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

P_Motor_and_Driver_T Motor_and_Driver_P = {
  /* Variable: x3001_5
   * Referenced by: '<S81>/k_mEPOS4'
   */
  69523.0,

  /* Variable: x30A0_1
   * Referenced by: '<S14>/Constant'
   */
  369404.0,

  /* Variable: x30A0_2
   * Referenced by: '<S15>/Constant'
   */
  466187.0,

  /* Variable: x30A2_1
   * Referenced by: '<S77>/Constant'
   */
  775467.0,

  /* Variable: x30A2_2
   * Referenced by: '<S76>/Constant'
   */
  2.3963356E+7,

  /* Variable: x30A3_1
   * Referenced by: '<S9>/MATLAB Function'
   */
  523.0,

  /* Variable: x30A3_2
   * Referenced by: '<S9>/MATLAB Function'
   */
  331789.0,

  /* Variable: x30A3_3
   * Referenced by: '<S9>/MATLAB Function'
   */
  2.875397E+6,

  /* Variable: x30A3_4
   * Referenced by: '<S82>/r_EPOS4'
   */
  152443.0,

  /* Variable: x30A3_5
   * Referenced by: '<S79>/J_EPOS4'
   */
  4.378489E+6,

  /* Mask Parameter: DiscretePIController_InitialCon
   * Referenced by: '<S49>/Integrator'
   */
  0.0,

  /* Mask Parameter: feedforward_acceleration_Value
   * Referenced by: '<S10>/Constant1'
   */
  80.0,

  /* Mask Parameter: feedforward_velocity_Value
   * Referenced by: '<S11>/Constant1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S68>/Zero'
   */
  0.0,

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S69>/Out1'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S69>/Gain'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<S78>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S40>/Constant1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Rate Transition3'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S6>/Unit Delay1'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S49>/Integrator'
   */
  6.0E-5,

  /* Expression: 0
   * Referenced by: '<S66>/Merge'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S66>/Merge1'
   */
  0.0,

  /* Expression: pm_unit('N*m', 'N*mm', 'linear')
   * Referenced by: '<S92>/GAIN'
   */
  1000.0,

  /* Expression: 0
   * Referenced by: '<S40>/ZeroGain'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Rate Transition1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S9>/Unit Delay'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S9>/Discrete-Time Integrator'
   */
  0.0004,

  /* Expression: 0
   * Referenced by: '<S9>/Discrete-Time Integrator'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator1_gainval
   * Referenced by: '<S9>/Discrete-Time Integrator1'
   */
  0.0004,

  /* Expression: 0
   * Referenced by: '<S9>/Discrete-Time Integrator1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Rate Transition'
   */
  0.0,

  /* Expression: 1e-7
   * Referenced by: '<S10>/Gain1'
   */
  1.0E-7,

  /* Computed Parameter: DiscreteTimeIntegrator_gai_bz4v
   * Referenced by: '<S8>/Discrete-Time Integrator'
   */
  0.0004,

  /* Expression: 0
   * Referenced by: '<S8>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S8>/Unit Delay'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S78>/ZeroGain'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gai_lwd1
   * Referenced by: '<Root>/Discrete-Time Integrator'
   */
  0.015,

  /* Expression: 0
   * Referenced by: '<Root>/Discrete-Time Integrator'
   */
  0.0,

  /* Computed Parameter: UnitDelay_InitialCondition_gjec
   * Referenced by: '<S1>/Unit Delay'
   */
  0.0F,

  /* Computed Parameter: Memory_InitialCondition
   * Referenced by: '<S78>/Memory'
   */
  false
};

/* System initialize for referenced model: 'Motor_and_Driver' */
void Motor_and_Driver_Init(DW_Motor_and_Driver_fwu4_T *localDW)
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
  localDW->STATE_1_Simulator = (void *)tmp;
  tmp_0 = pointer_is_null(localDW->STATE_1_Simulator);
  if (tmp_0) {
    Motor_and_Driver_678d4e8_1_gateway();
    tmp = nesl_lease_simulator("Motor_and_Driver/Solver Configuration_1", 0, 0);
    localDW->STATE_1_Simulator = (void *)tmp;
  }

  ;
  tmp_1 = nesl_create_simulation_data();
  localDW->STATE_1_SimData = (void *)tmp_1;
  diagnosticManager = rtw_create_diagnostics();
  localDW->STATE_1_DiagMgr = (void *)diagnosticManager;
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
  diagnosticManager = (NeuDiagnosticManager *)localDW->STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_3 = nesl_initialize_simulator((NeslSimulator *)localDW->STATE_1_Simulator,
    &modelParameters, diagnosticManager);
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
  localDW->OUTPUT_1_0_Simulator = (void *)tmp;
  tmp_0 = pointer_is_null(localDW->OUTPUT_1_0_Simulator);
  if (tmp_0) {
    Motor_and_Driver_678d4e8_1_gateway();
    tmp = nesl_lease_simulator("Motor_and_Driver/Solver Configuration_1", 1, 0);
    localDW->OUTPUT_1_0_Simulator = (void *)tmp;
  }

  ;
  tmp_1 = nesl_create_simulation_data();
  localDW->OUTPUT_1_0_SimData = (void *)tmp_1;
  diagnosticManager = rtw_create_diagnostics();
  localDW->OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
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
  diagnosticManager = (NeuDiagnosticManager *)localDW->OUTPUT_1_0_DiagMgr;
  diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_3 = nesl_initialize_simulator((NeslSimulator *)
    localDW->OUTPUT_1_0_Simulator, &modelParameters_0, diagnosticManager);
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
  localDW->RateTransition3_Buffer[0] =
    Motor_and_Driver_P.RateTransition3_InitialConditio;

  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay1' */
  localDW->UnitDelay1_DSTATE = Motor_and_Driver_P.UnitDelay1_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S49>/Integrator' */
  localDW->Integrator_DSTATE =
    Motor_and_Driver_P.DiscretePIController_InitialCon;

  /* InitializeConditions for RateTransition: '<S1>/Rate Transition1' */
  localDW->RateTransition1_Buffer[0] =
    Motor_and_Driver_P.RateTransition1_InitialConditio;

  /* InitializeConditions for UnitDelay: '<S9>/Unit Delay' */
  localDW->UnitDelay_DSTATE = Motor_and_Driver_P.UnitDelay_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S9>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE =
    Motor_and_Driver_P.DiscreteTimeIntegrator_IC;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  localDW->UnitDelay_DSTATE_jn0o =
    Motor_and_Driver_P.UnitDelay_InitialCondition_gjec;

  /* InitializeConditions for DiscreteIntegrator: '<S9>/Discrete-Time Integrator1' */
  localDW->DiscreteTimeIntegrator1_DSTATE =
    Motor_and_Driver_P.DiscreteTimeIntegrator1_IC;

  /* InitializeConditions for RateTransition: '<Root>/Rate Transition' */
  localDW->RateTransition_Buffer[0] =
    Motor_and_Driver_P.RateTransition_InitialCondition;
  localDW->RateTransition_Buffer[1] =
    Motor_and_Driver_P.RateTransition_InitialCondition;
  localDW->RateTransition_Buffer[2] =
    Motor_and_Driver_P.RateTransition_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S8>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DST_do51 =
    Motor_and_Driver_P.DiscreteTimeIntegrator_IC_f5eg;

  /* InitializeConditions for UnitDelay: '<S8>/Unit Delay' */
  localDW->UnitDelay_DSTATE_f5ht =
    Motor_and_Driver_P.UnitDelay_InitialCondition_mz0d;

  /* InitializeConditions for Memory: '<S78>/Memory' */
  localDW->Memory_PreviousInput = Motor_and_Driver_P.Memory_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<Root>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DST_ju3b =
    Motor_and_Driver_P.DiscreteTimeIntegrator_IC_etzk;

  /* SystemInitialize for Merge: '<S66>/Merge' */
  localDW->Merge = Motor_and_Driver_P.Merge_InitialOutput;

  /* SystemInitialize for Merge: '<S66>/Merge1' */
  localDW->Merge1 = Motor_and_Driver_P.Merge1_InitialOutput;
}

/* Output and update for referenced model: 'Motor_and_Driver' */
void Motor_and_Driver(RT_MODEL_Motor_and_Driver_T * const Motor_and_Driver_M,
                      const real32_T *rtu_RefSignal, real32_T
                      *rty_motorInfo_Angle, real32_T *rty_motorInfo_Speed,
                      real32_T *rty_motorInfo_Current, real32_T
                      *rty_RespSignal_Angle, real32_T *rty_RespSignal_Speed,
                      real32_T *rty_RespSignal_Torque,
                      DW_Motor_and_Driver_fwu4_T *localDW)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  real_T tmp_3[25];
  real_T tmp_0[8];
  real_T tmp_5[8];
  real_T rtb_OUTPUT_1_0[6];
  real_T rtb_RateTransition[3];
  real_T rtb_DataTypeConversion;
  real_T rtb_DeadZone;
  real_T rtb_DiscreteTimeIntegrator;
  real_T rtb_IProdOut;
  real_T rtb_RateTransition1;
  real_T rtb_SignPreIntegrator;
  real_T rtb_SignPreSat_owyc;
  real_T rtb_UnitDelay1;
  real_T rtb_current_set;
  real_T rtb_current_set_mbp0;
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
  real32_T rtb_DataTypeConversion_ndiq;
  real32_T rtb_RateTransition2;
  boolean_T rtb_AND;
  boolean_T tmp;

  /* RateTransition: '<S1>/Rate Transition3' */
  if (rtmIsSampleHit(Motor_and_Driver_M, 1, 0)) {
    NeuDiagnosticTree *diagnosticTree;
    NeuDiagnosticTree *diagnosticTree_0;
    real32_T rtb_DataTypeConversion_glm1;
    rtb_current_set_mbp0 = localDW->RateTransition3_Buffer
      [localDW->RateTransition3_ActiveBufIdx];

    /* UnitDelay: '<S6>/Unit Delay1' */
    rtb_UnitDelay1 = localDW->UnitDelay1_DSTATE;

    /* Sum: '<S6>/Sum' */
    rtb_IProdOut = rtb_current_set_mbp0 - rtb_UnitDelay1;

    /* Sum: '<S58>/Sum' incorporates:
     *  Constant: '<S14>/Constant'
     *  DiscreteIntegrator: '<S49>/Integrator'
     *  Product: '<S54>/PProd Out'
     *  UnitConversion: '<S14>/Unit Conversion'
     */
    /* Unit Conversion - from: uV/A to: V/A
       Expression: output = (1e-06*input) + (0) */
    rtb_SignPreSat_owyc = (rtb_IProdOut * (1.0E-6 * Motor_and_Driver_P.x30A0_1))
      + localDW->Integrator_DSTATE;

    /* Saturate: '<S56>/Saturation' */
    if (rtb_SignPreSat_owyc > rtP_x607325_VNom) {
      rtb_current_set_mbp0 = rtP_x607325_VNom;
    } else if (rtb_SignPreSat_owyc < (-rtP_x607325_VNom)) {
      rtb_current_set_mbp0 = -rtP_x607325_VNom;
    } else {
      rtb_current_set_mbp0 = rtb_SignPreSat_owyc;
    }

    /* End of Saturate: '<S56>/Saturation' */

    /* If: '<S66>/If1' */
    if (rtb_current_set_mbp0 >= 0.0) {
      /* Outputs for IfAction SubSystem: '<S66>/If Action Subsystem' incorporates:
       *  ActionPort: '<S68>/Action Port'
       */
      /* Merge: '<S66>/Merge1' incorporates:
       *  Constant: '<S68>/Zero'
       *  SignalConversion generated from: '<S68>/Out2'
       */
      localDW->Merge1 = Motor_and_Driver_P.Zero_Value;

      /* Merge: '<S66>/Merge' incorporates:
       *  Inport: '<S68>/In1'
       */
      localDW->Merge = rtb_current_set_mbp0;

      /* End of Outputs for SubSystem: '<S66>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S66>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S69>/Action Port'
       */
      /* Merge: '<S66>/Merge1' incorporates:
       *  Constant: '<S69>/Constant'
       *  SignalConversion generated from: '<S69>/Out2'
       */
      localDW->Merge1 = rtP_x607325_VNom;

      /* Merge: '<S66>/Merge' incorporates:
       *  Gain: '<S69>/Gain'
       */
      localDW->Merge = Motor_and_Driver_P.Gain_Gain * rtb_current_set_mbp0;

      /* End of Outputs for SubSystem: '<S66>/If Action Subsystem1' */
    }

    /* End of If: '<S66>/If1' */

    /* SimscapeInputBlock: '<S99>/INPUT_1_1_1' */
    if (rtmIsSampleHit(Motor_and_Driver_M, 1, 0)) {
      localDW->INPUT_1_1_1[0] = localDW->Merge;
      localDW->INPUT_1_1_1[1] = 0.0;
      localDW->INPUT_1_1_1[2] = 0.0;
      localDW->INPUT_1_1_1_Discrete[0] = (localDW->INPUT_1_1_1[0] !=
        localDW->INPUT_1_1_1_Discrete[1]);
      localDW->INPUT_1_1_1_Discrete[1] = localDW->INPUT_1_1_1[0];
      localDW->INPUT_1_1_1[0] = localDW->INPUT_1_1_1_Discrete[1];
      localDW->INPUT_1_1_1[3] = localDW->INPUT_1_1_1_Discrete[0];

      /* SimscapeInputBlock: '<S99>/INPUT_2_1_1' incorporates:
       *  SimscapeInputBlock: '<S99>/INPUT_1_1_1'
       */
      localDW->INPUT_2_1_1[0] = localDW->Merge1;
      localDW->INPUT_2_1_1[1] = 0.0;
      localDW->INPUT_2_1_1[2] = 0.0;
      localDW->INPUT_2_1_1_Discrete[0] = (localDW->INPUT_2_1_1[0] !=
        localDW->INPUT_2_1_1_Discrete[1]);
      localDW->INPUT_2_1_1_Discrete[1] = localDW->INPUT_2_1_1[0];
      localDW->INPUT_2_1_1[0] = localDW->INPUT_2_1_1_Discrete[1];
      localDW->INPUT_2_1_1[3] = localDW->INPUT_2_1_1_Discrete[0];
    }

    /* End of SimscapeInputBlock: '<S99>/INPUT_1_1_1' */

    /* SimscapeExecutionBlock: '<S99>/STATE_1' incorporates:
     *  SimscapeExecutionBlock: '<S99>/OUTPUT_1_0'
     */
    simulationData = (NeslSimulationData *)localDW->STATE_1_SimData;
    rtb_current_set_mbp0 = (( rtmGetClockTick0(Motor_and_Driver_M) +
      rtmGetClockTickH0(Motor_and_Driver_M)*4294967296.0 ) * 2.0E-5);
    time = rtb_current_set_mbp0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 14;
    simulationData->mData->mDiscStates.mX = &localDW->STATE_1_Discrete[0];
    simulationData->mData->mModeVector.mN = 3;
    simulationData->mData->mModeVector.mX = &localDW->STATE_1_Modes[0];
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
    tmp_0[0] = localDW->INPUT_1_1_1[0];
    tmp_0[1] = localDW->INPUT_1_1_1[1];
    tmp_0[2] = localDW->INPUT_1_1_1[2];
    tmp_0[3] = localDW->INPUT_1_1_1[3];
    tmp_1[1] = 4;
    tmp_0[4] = localDW->INPUT_2_1_1[0];
    tmp_0[5] = localDW->INPUT_2_1_1[1];
    tmp_0[6] = localDW->INPUT_2_1_1[2];
    tmp_0[7] = localDW->INPUT_2_1_1[3];
    tmp_1[2] = 8;
    simulationData->mData->mInputValues.mN = 8;
    simulationData->mData->mInputValues.mX = &tmp_0[0];
    simulationData->mData->mInputOffsets.mN = 3;
    simulationData->mData->mInputOffsets.mX = &tmp_1[0];
    simulationData->mData->mOutputs.mN = 17;
    simulationData->mData->mOutputs.mX = &localDW->STATE_1[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    tmp = rtmIsSampleHit(Motor_and_Driver_M, 1, 0);
    simulationData->mData->mIsFundamentalSampleHit = tmp;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)localDW->STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)localDW->STATE_1_Simulator,
      NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
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
    simulationData = (NeslSimulationData *)localDW->OUTPUT_1_0_SimData;
    time_0 = rtb_current_set_mbp0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_0;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &localDW->OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &localDW->OUTPUT_1_0_Modes;
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
    tmp_3[0] = localDW->INPUT_1_1_1[0];
    tmp_3[1] = localDW->INPUT_1_1_1[1];
    tmp_3[2] = localDW->INPUT_1_1_1[2];
    tmp_3[3] = localDW->INPUT_1_1_1[3];
    tmp_4[1] = 4;
    tmp_3[4] = localDW->INPUT_2_1_1[0];
    tmp_3[5] = localDW->INPUT_2_1_1[1];
    tmp_3[6] = localDW->INPUT_2_1_1[2];
    tmp_3[7] = localDW->INPUT_2_1_1[3];
    tmp_4[2] = 8;
    memcpy(&tmp_3[8], &localDW->STATE_1[0], 17U * (sizeof(real_T)));
    tmp_4[3] = 25;
    simulationData->mData->mInputValues.mN = 25;
    simulationData->mData->mInputValues.mX = &tmp_3[0];
    simulationData->mData->mInputOffsets.mN = 4;
    simulationData->mData->mInputOffsets.mX = &tmp_4[0];
    simulationData->mData->mOutputs.mN = 6;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_1_0[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    tmp = rtmIsSampleHit(Motor_and_Driver_M, 1, 0);
    simulationData->mData->mIsFundamentalSampleHit = tmp;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)localDW->OUTPUT_1_0_DiagMgr;
    diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)localDW->OUTPUT_1_0_Simulator,
      NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(((void*) 0));
      if (tmp) {
        char *msg_0;
        msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
        ((void) 0);
      }
    }

    /* DataTypeConversion: '<S67>/Data Type Conversion' */
    rtb_DataTypeConversion_glm1 = (real32_T)rtb_OUTPUT_1_0[0];

    /* DataTypeConversion: '<S67>/Data Type Conversion1' */
    rtb_current_set_mbp0 = rtb_DataTypeConversion_glm1;

    /* DataTypeConversion: '<S83>/Data Type Conversion1' */
    rtb_DataTypeConversion1_a1dj = (real32_T)rtb_OUTPUT_1_0[1];

    /* DataTypeConversion: '<S83>/Data Type Conversion' */
    rtb_DataTypeConversion_ndiq = (real32_T)rtb_OUTPUT_1_0[2];

    /* BusCreator: '<S3>/Bus Creator' */
    localDW->BusCreator.Angle = rtb_DataTypeConversion1_a1dj;
    localDW->BusCreator.Speed = rtb_DataTypeConversion_ndiq;
    localDW->BusCreator.Current = rtb_DataTypeConversion_glm1;
  }

  /* End of RateTransition: '<S1>/Rate Transition3' */

  /* RateTransition: '<S1>/Rate Transition2' */
  if (rtmIsSampleHit(Motor_and_Driver_M, 2, 0)) {
    rtb_RateTransition2 = localDW->BusCreator.Angle;
  }

  /* End of RateTransition: '<S1>/Rate Transition2' */
  if (rtmIsSampleHit(Motor_and_Driver_M, 1, 0)) {
    real_T rtb_IProdOut_0;

    /* SignalConversion generated from: '<Root>/motorInfo' */
    *rty_motorInfo_Angle = localDW->BusCreator.Angle;

    /* SignalConversion generated from: '<Root>/motorInfo' */
    *rty_motorInfo_Speed = localDW->BusCreator.Speed;

    /* SignalConversion generated from: '<Root>/motorInfo' */
    *rty_motorInfo_Current = localDW->BusCreator.Current;

    /* Gain: '<S92>/GAIN' */
    rtb_SignPreIntegrator = Motor_and_Driver_P.GAIN_Gain * rtb_OUTPUT_1_0[3];

    /* SignalConversion generated from: '<Root>/RespSignal' incorporates:
     *  Constant: '<S84>/Constant'
     *  Product: '<S84>/Divide'
     */
    *rty_RespSignal_Angle = rtb_DataTypeConversion1_a1dj /
      rtP_x28_000006_reduction;

    /* SignalConversion generated from: '<Root>/RespSignal' incorporates:
     *  Constant: '<S85>/Constant1'
     *  Product: '<S85>/Divide1'
     */
    *rty_RespSignal_Speed = rtb_DataTypeConversion_ndiq /
      rtP_x28_000006_reduction;

    /* SignalConversion generated from: '<Root>/RespSignal' incorporates:
     *  DataTypeConversion: '<S86>/Data Type Conversion'
     */
    *rty_RespSignal_Torque = (real32_T)rtb_SignPreIntegrator;

    /* Gain: '<S40>/ZeroGain' */
    rtb_SignPreIntegrator = Motor_and_Driver_P.ZeroGain_Gain *
      rtb_SignPreSat_owyc;

    /* DeadZone: '<S42>/DeadZone' */
    if (rtb_SignPreSat_owyc > rtP_x607325_VNom) {
      rtb_SignPreSat_owyc -= rtP_x607325_VNom;
    } else if (rtb_SignPreSat_owyc >= (-rtP_x607325_VNom)) {
      rtb_SignPreSat_owyc = 0.0;
    } else {
      rtb_SignPreSat_owyc -= -rtP_x607325_VNom;
    }

    /* End of DeadZone: '<S42>/DeadZone' */

    /* Product: '<S46>/IProd Out' incorporates:
     *  Constant: '<S15>/Constant'
     *  UnitConversion: '<S15>/Unit Conversion'
     */
    /* Unit Conversion - from: uV/(A*ms) to: V/(A*s)
       Expression: output = (0.001*input) + (0) */
    rtb_IProdOut *= 0.001 * Motor_and_Driver_P.x30A0_2;

    /* Signum: '<S40>/SignPreSat' */
    if (rtb_SignPreSat_owyc < 0.0) {
      rtb_current_set = -1.0;
    } else if (rtb_SignPreSat_owyc > 0.0) {
      rtb_current_set = 1.0;
    } else {
      rtb_current_set = rtb_SignPreSat_owyc;
    }

    /* End of Signum: '<S40>/SignPreSat' */

    /* Signum: '<S40>/SignPreIntegrator' */
    if (rtb_IProdOut < 0.0) {
      rtb_IProdOut_0 = -1.0;
    } else if (rtb_IProdOut > 0.0) {
      rtb_IProdOut_0 = 1.0;
    } else {
      rtb_IProdOut_0 = rtb_IProdOut;
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
           rtb_current_set) == ((int8_T)rtb_IProdOut_0)))) {
      rtb_SignPreIntegrator = Motor_and_Driver_P.Constant1_Value;
    } else {
      rtb_SignPreIntegrator = rtb_IProdOut;
    }

    /* End of Switch: '<S40>/Switch' */

    /* RateTransition: '<S1>/Rate Transition1' */
    localDW->RateTransition1_Buffer[localDW->RateTransition1_semaphoreTaken == 0]
      = rtb_UnitDelay1;
    localDW->RateTransition1_ActiveBufIdx = (int8_T)
      (localDW->RateTransition1_semaphoreTaken == 0);
  }

  /* RateTransition: '<S1>/Rate Transition1' incorporates:
   *  RateTransition: '<S1>/Rate Transition3'
   */
  if (rtmIsSampleHit(Motor_and_Driver_M, 2, 0)) {
    localDW->RateTransition1_semaphoreTaken =
      localDW->RateTransition1_ActiveBufIdx;
    rtb_RateTransition1 = localDW->RateTransition1_Buffer
      [localDW->RateTransition1_semaphoreTaken];

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
      Motor_and_Driver_P.x3001_5)) - (localDW->DiscreteTimeIntegrator_DSTATE *
      (9.54929658551372E-9 * Motor_and_Driver_P.x30A3_4))) -
      localDW->UnitDelay_DSTATE) / (1.0E-10 * Motor_and_Driver_P.x30A3_5);

    /* MATLAB Function: '<S9>/MATLAB Function' incorporates:
     *  DataTypeConversion: '<S9>/Data Type Conversion'
     *  DiscreteIntegrator: '<S9>/Discrete-Time Integrator'
     *  DiscreteIntegrator: '<S9>/Discrete-Time Integrator1'
     *  UnitDelay: '<S1>/Unit Delay'
     *  UnitDelay: '<S9>/Unit Delay'
     */
    rtb_UnitDelay1 = localDW->UnitDelay_DSTATE_jn0o -
      (localDW->DiscreteTimeIntegrator1_DSTATE + ((Motor_and_Driver_P.x30A3_1 /
         1000.0) * (localDW->UnitDelay_DSTATE_jn0o -
                    localDW->DiscreteTimeIntegrator1_DSTATE)));
    rtb_omgHatk = localDW->DiscreteTimeIntegrator_DSTATE +
      ((Motor_and_Driver_P.x30A3_2 / 1000.0) * rtb_UnitDelay1);
    thetaHatk = localDW->UnitDelay_DSTATE + ((Motor_and_Driver_P.x30A3_3 /
      1.0E+6) * rtb_UnitDelay1);

    /* Saturate: '<S9>/Saturation' */
    rtb_pre_sat_signal = (-rtP_x607325_Torq) / 1000.0;
    rtb_DeadZone = rtP_x607325_Torq / 1000.0;
    if (thetaHatk > rtb_DeadZone) {
      thetaHatk = rtb_DeadZone;
    } else if (thetaHatk < rtb_pre_sat_signal) {
      thetaHatk = rtb_pre_sat_signal;
    }

    /* End of Saturate: '<S9>/Saturation' */

    /* RateTransition: '<Root>/Rate Transition' */
    tmp_2 = localDW->RateTransition_ActiveBufIdx * 3;
    rtb_RateTransition[1] = localDW->RateTransition_Buffer[tmp_2 + 1];
    rtb_RateTransition[2] = localDW->RateTransition_Buffer[tmp_2 + 2];

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
      (rtP_x607325_RotIner + Motor_and_Driver_P.feedforward_acceleration_Value))
      / (0.001 * rtP_x607325_TorqConst)) * rtb_RateTransition[2]) +
      (((9.5492965855137212E-6 * Motor_and_Driver_P.feedforward_velocity_Value) /
        (0.001 * rtP_x607325_TorqConst)) * rtb_RateTransition[1])) +
                          (rtb_UnitDelay1 * (1.0E-6 * Motor_and_Driver_P.x30A2_1)))
      + localDW->DiscreteTimeIntegrator_DST_do51;

    /* Saturate: '<S8>/Saturation' */
    if (rtb_pre_sat_signal > rtP_x520886_ICont) {
      rtb_current_set = rtP_x520886_ICont;
    } else if (rtb_pre_sat_signal < (-rtP_x520886_ICont)) {
      rtb_current_set = -rtP_x520886_ICont;
    } else {
      rtb_current_set = rtb_pre_sat_signal;
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
    if (localDW->UnitDelay_DSTATE_f5ht > rtP_x520886_ICont) {
      rtb_DeadZone = localDW->UnitDelay_DSTATE_f5ht - rtP_x520886_ICont;
    } else if (localDW->UnitDelay_DSTATE_f5ht >= (-rtP_x520886_ICont)) {
      rtb_DeadZone = 0.0;
    } else {
      rtb_DeadZone = localDW->UnitDelay_DSTATE_f5ht - (-rtP_x520886_ICont);
    }

    /* End of DeadZone: '<S78>/Dead Zone' */

    /* Signum: '<S78>/SignPreSat' */
    if (rtb_DeadZone < 0.0) {
      rtb_IProdOut = -1.0;
    } else if (rtb_DeadZone > 0.0) {
      rtb_IProdOut = 1.0;
    } else {
      rtb_IProdOut = rtb_DeadZone;
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
                localDW->UnitDelay_DSTATE_f5ht) != rtb_DeadZone) & (((int8_T)
      rtb_IProdOut) == ((int8_T)rtb_SignPreSat_owyc));

    /* Switch: '<S78>/Switch' incorporates:
     *  Constant: '<S78>/Constant'
     *  Memory: '<S78>/Memory'
     */
    if (localDW->Memory_PreviousInput) {
      rtb_DeadZone = Motor_and_Driver_P.Constant_Value;
    } else {
      rtb_DeadZone = rtb_UnitDelay1;
    }

    /* End of Switch: '<S78>/Switch' */
    localDW->RateTransition3_Buffer[localDW->RateTransition3_ActiveBufIdx == 0] =
      rtb_current_set;
    localDW->RateTransition3_ActiveBufIdx = (int8_T)
      (localDW->RateTransition3_ActiveBufIdx == 0);
  }

  if (rtmIsSampleHit(Motor_and_Driver_M, 3, 0)) {
    /* DataTypeConversion: '<Root>/Data Type Conversion' */
    rtb_DataTypeConversion = *rtu_RefSignal;

    /* DiscreteIntegrator: '<Root>/Discrete-Time Integrator' */
    rtb_DiscreteTimeIntegrator = localDW->DiscreteTimeIntegrator_DST_ju3b;
  }

  if (rtmIsSampleHit(Motor_and_Driver_M, 1, 0)) {
    NeuDiagnosticTree *diagnosticTree_1;

    /* Update for UnitDelay: '<S6>/Unit Delay1' */
    localDW->UnitDelay1_DSTATE = rtb_current_set_mbp0;

    /* Update for DiscreteIntegrator: '<S49>/Integrator' */
    localDW->Integrator_DSTATE += Motor_and_Driver_P.Integrator_gainval *
      rtb_SignPreIntegrator;

    /* Update for SimscapeExecutionBlock: '<S99>/STATE_1' */
    simulationData = (NeslSimulationData *)localDW->STATE_1_SimData;
    time_1 = (( rtmGetClockTick0(Motor_and_Driver_M) + rtmGetClockTickH0
               (Motor_and_Driver_M)*4294967296.0 ) * 2.0E-5);
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 14;
    simulationData->mData->mDiscStates.mX = &localDW->STATE_1_Discrete[0];
    simulationData->mData->mModeVector.mN = 3;
    simulationData->mData->mModeVector.mX = &localDW->STATE_1_Modes[0];
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
    tmp_5[0] = localDW->INPUT_1_1_1[0];
    tmp_5[1] = localDW->INPUT_1_1_1[1];
    tmp_5[2] = localDW->INPUT_1_1_1[2];
    tmp_5[3] = localDW->INPUT_1_1_1[3];
    tmp_6[1] = 4;
    tmp_5[4] = localDW->INPUT_2_1_1[0];
    tmp_5[5] = localDW->INPUT_2_1_1[1];
    tmp_5[6] = localDW->INPUT_2_1_1[2];
    tmp_5[7] = localDW->INPUT_2_1_1[3];
    tmp_6[2] = 8;
    simulationData->mData->mInputValues.mN = 8;
    simulationData->mData->mInputValues.mX = &tmp_5[0];
    simulationData->mData->mInputOffsets.mN = 3;
    simulationData->mData->mInputOffsets.mX = &tmp_6[0];
    diagnosticManager = (NeuDiagnosticManager *)localDW->STATE_1_DiagMgr;
    diagnosticTree_1 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)localDW->STATE_1_Simulator,
      NESL_SIM_UPDATE, simulationData, diagnosticManager);
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

  if (rtmIsSampleHit(Motor_and_Driver_M, 2, 0)) {
    /* Update for UnitDelay: '<S9>/Unit Delay' */
    localDW->UnitDelay_DSTATE = thetaHatk;

    /* Update for DiscreteIntegrator: '<S9>/Discrete-Time Integrator' */
    localDW->DiscreteTimeIntegrator_DSTATE +=
      Motor_and_Driver_P.DiscreteTimeIntegrator_gainval * rtb_RateTransition1;
    rtb_current_set_mbp0 = (rtP_x607325_RotOmgMax * 3.1415926535897931) / 30.0;
    if (localDW->DiscreteTimeIntegrator_DSTATE >= rtb_current_set_mbp0) {
      localDW->DiscreteTimeIntegrator_DSTATE = rtb_current_set_mbp0;
    } else {
      rtb_current_set_mbp0 = ((-rtP_x607325_RotOmgMax) * 3.1415926535897931) /
        30.0;
      if (localDW->DiscreteTimeIntegrator_DSTATE <= rtb_current_set_mbp0) {
        localDW->DiscreteTimeIntegrator_DSTATE = rtb_current_set_mbp0;
      }
    }

    /* End of Update for DiscreteIntegrator: '<S9>/Discrete-Time Integrator' */

    /* Update for UnitDelay: '<S1>/Unit Delay' */
    localDW->UnitDelay_DSTATE_jn0o = rtb_RateTransition2;

    /* Update for DiscreteIntegrator: '<S9>/Discrete-Time Integrator1' */
    localDW->DiscreteTimeIntegrator1_DSTATE +=
      Motor_and_Driver_P.DiscreteTimeIntegrator1_gainval * rtb_omgHatk;

    /* Update for DiscreteIntegrator: '<S8>/Discrete-Time Integrator' */
    localDW->DiscreteTimeIntegrator_DST_do51 +=
      Motor_and_Driver_P.DiscreteTimeIntegrator_gai_bz4v * rtb_DeadZone;

    /* Update for UnitDelay: '<S8>/Unit Delay' */
    localDW->UnitDelay_DSTATE_f5ht = rtb_pre_sat_signal;

    /* Update for Memory: '<S78>/Memory' */
    localDW->Memory_PreviousInput = rtb_AND;
  }

  /* Update for RateTransition: '<Root>/Rate Transition' */
  if (rtmIsSampleHit(Motor_and_Driver_M, 3, 0)) {
    localDW->RateTransition_Buffer[(localDW->RateTransition_ActiveBufIdx == 0) *
      3] = 0.0;
    localDW->RateTransition_Buffer[1 + ((localDW->RateTransition_ActiveBufIdx ==
      0) * 3)] = rtb_DataTypeConversion;
    localDW->RateTransition_Buffer[2 + ((localDW->RateTransition_ActiveBufIdx ==
      0) * 3)] = rtb_DiscreteTimeIntegrator;
    localDW->RateTransition_ActiveBufIdx = (int8_T)
      (localDW->RateTransition_ActiveBufIdx == 0);

    /* Update for DiscreteIntegrator: '<Root>/Discrete-Time Integrator' */
    localDW->DiscreteTimeIntegrator_DST_ju3b +=
      Motor_and_Driver_P.DiscreteTimeIntegrator_gai_lwd1 *
      rtb_DataTypeConversion;
  }

  /* End of Update for RateTransition: '<Root>/Rate Transition' */
}

/* Model initialize function */
void Motor_and_Driver_initialize(const rtTimingBridge *timingBridge, int_T
  mdlref_TID0, int_T mdlref_TID1, int_T mdlref_TID2, int_T mdlref_TID3,
  RT_MODEL_Motor_and_Driver_T *const Motor_and_Driver_M)
{
  /* Registration code */

  /* setup the global timing engine */
  Motor_and_Driver_M->Timing.mdlref_GlobalTID[0] = mdlref_TID0;
  Motor_and_Driver_M->Timing.mdlref_GlobalTID[1] = mdlref_TID1;
  Motor_and_Driver_M->Timing.mdlref_GlobalTID[2] = mdlref_TID2;
  Motor_and_Driver_M->Timing.mdlref_GlobalTID[3] = mdlref_TID3;
  Motor_and_Driver_M->timingBridge = (timingBridge);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
