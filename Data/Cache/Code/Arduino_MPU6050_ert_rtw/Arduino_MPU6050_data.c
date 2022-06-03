/*
 * File: Arduino_MPU6050_data.c
 *
 * Code generated for Simulink model 'Arduino_MPU6050'.
 *
 * Model version                  : 1.23
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Wed Apr 27 22:23:47 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 * Validation result: Not run
 */

#include "Arduino_MPU6050.h"

/* Invariant block signals (default storage) */
const ConstB rtConstB = {
  1.0F,                                /* '<S7>/Constant Ramp' */
  1.0F,                                /* '<S8>/Constant Ramp' */
  1.0F                                 /* '<S9>/Constant Ramp' */
};

/* Block parameters (default storage) */
P rtP = {
  /* Mask Parameter: WrapToZero_Threshold
   * Referenced by: '<S6>/FixPt Switch'
   */
  3U,

  /* Expression: 0
   * Referenced by: '<S2>/init_Device'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/init_Accel'
   */
  0.0,

  /* Expression: 0.02
   * Referenced by: '<Root>/I2C Read'
   */
  0.02,

  /* Expression: 0.02
   * Referenced by: '<Root>/I2C Read1'
   */
  0.02,

  /* Expression: 1
   * Referenced by: '<Root>/Unit Delay'
   */
  1.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S3>/Discrete-Time Integrator'
   */
  0.02F,

  /* Computed Parameter: DiscreteTimeIntegrator_IC
   * Referenced by: '<S3>/Discrete-Time Integrator'
   */
  0.0F,

  /* Expression: single(0.96)
   * Referenced by: '<S3>/Gain3'
   */
  0.96F,

  /* Expression: single(0.04)
   * Referenced by: '<S3>/Gain4'
   */
  0.04F,

  /* Computed Parameter: DiscreteTimeIntegrator1_gainval
   * Referenced by: '<S3>/Discrete-Time Integrator1'
   */
  0.02F,

  /* Computed Parameter: DiscreteTimeIntegrator1_IC
   * Referenced by: '<S3>/Discrete-Time Integrator1'
   */
  0.0F,

  /* Expression: single(0.96)
   * Referenced by: '<S3>/Gain5'
   */
  0.96F,

  /* Expression: single(0.04)
   * Referenced by: '<S3>/Gain6'
   */
  0.04F,

  /* Computed Parameter: DiscreteTimeIntegrator2_gainval
   * Referenced by: '<S3>/Discrete-Time Integrator2'
   */
  0.02F,

  /* Computed Parameter: DiscreteTimeIntegrator2_IC
   * Referenced by: '<S3>/Discrete-Time Integrator2'
   */
  0.0F,

  /* Expression: single(1/131)
   * Referenced by: '<S3>/Gain2'
   */
  0.00763358781F,

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S6>/Constant'
   */
  0U,

  /* Computed Parameter: Output_InitialCondition
   * Referenced by: '<S1>/Output'
   */
  0U,

  /* Computed Parameter: FixPtConstant_Value
   * Referenced by: '<S5>/FixPt Constant'
   */
  1U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
