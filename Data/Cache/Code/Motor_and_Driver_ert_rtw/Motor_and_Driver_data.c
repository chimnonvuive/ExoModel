/*
 * File: Motor_and_Driver_data.c
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

/* Block parameters (default storage) */
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

  /* Variable: x520886_ICont
   * Referenced by:
   *   '<S8>/Saturation'
   *   '<S78>/Dead Zone'
   */
  15.0,

  /* Variable: x607325_RotIner
   * Referenced by: '<S10>/Constant'
   */
  5060.0,

  /* Variable: x607325_RotOmgMax
   * Referenced by: '<S9>/Discrete-Time Integrator'
   */
  2100.0,

  /* Variable: x607325_Torq
   * Referenced by: '<S9>/Saturation'
   */
  1010.0,

  /* Variable: x607325_TorqConst
   * Referenced by:
   *   '<S10>/Constant2'
   *   '<S11>/Constant'
   */
  80.7,

  /* Variable: x607325_VNom
   * Referenced by:
   *   '<S56>/Saturation'
   *   '<S69>/Constant'
   *   '<S42>/DeadZone'
   */
  18.0,

  /* Variable: x28_000006_reduction
   * Referenced by:
   *   '<S84>/Constant'
   *   '<S85>/Constant1'
   */
  100.0F,

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

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
