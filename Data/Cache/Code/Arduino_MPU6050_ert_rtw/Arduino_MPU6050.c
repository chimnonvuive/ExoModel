/*
 * File: Arduino_MPU6050.c
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

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#include "dsp_rt.h"  /* DSP System Toolbox general run time support functions */
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFU) ) || ( INT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFUL) ) || ( LONG_MAX != (0x7FFFFFFFL) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

/* Block signals (default storage) */
B rtB;

/* Block states (default storage) */
DW rtDW;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;
static void IfActionSubsystem(real32_T rtu_In1, real32_T rtu_In2, real32_T
  rtu_In3, real32_T rtu_In4, real32_T rtu_In5, real32_T rtu_In6, real32_T
  *rty_Out1, real32_T *rty_Out2);
static void IfActionSubsystem1(real32_T rtu_In1, real32_T rtu_In2, real32_T
  *rty_Out1, real32_T *rty_Out2);

/*
 * Output and update for action system:
 *    '<S7>/If Action Subsystem'
 *    '<S8>/If Action Subsystem'
 *    '<S9>/If Action Subsystem'
 */
static void IfActionSubsystem(real32_T rtu_In1, real32_T rtu_In2, real32_T
  rtu_In3, real32_T rtu_In4, real32_T rtu_In5, real32_T rtu_In6, real32_T
  *rty_Out1, real32_T *rty_Out2)
{
  /* Product: '<S13>/linear term6' incorporates:
   *  Product: '<S13>/linear term3'
   *  Product: '<S13>/linear term4'
   *  Sum: '<S13>/Sum1'
   */
  *rty_Out2 = (rtu_In5 * rtu_In3 - rtu_In4 * rtu_In1) / rtu_In6;

  /* Product: '<S13>/linear term5' incorporates:
   *  Product: '<S13>/linear term1'
   *  Product: '<S13>/linear term2'
   *  Sum: '<S13>/Sum4'
   */
  *rty_Out1 = (rtu_In1 * rtu_In2 - rtu_In3 * rtu_In4) / rtu_In6;
}

/*
 * Output and update for action system:
 *    '<S7>/If Action Subsystem1'
 *    '<S8>/If Action Subsystem1'
 *    '<S9>/If Action Subsystem1'
 */
static void IfActionSubsystem1(real32_T rtu_In1, real32_T rtu_In2, real32_T
  *rty_Out1, real32_T *rty_Out2)
{
  /* SignalConversion generated from: '<S14>/Out2' */
  *rty_Out2 = rtu_In2;

  /* SignalConversion generated from: '<S14>/Out1' incorporates:
   *  S-Function (sdspihcplx2): '<S14>/Inherit Complexity'
   */
  *rty_Out1 = rtu_In1;
}

/* Model step function */
void Arduino_MPU6050_step(void)
{
  /* local block i/o variables */
  real32_T rtb_Inherit;
  real32_T rtb_Inherit_g;
  real32_T rtb_Inherit_i;
  real32_T aX;
  real32_T aY;
  real32_T aZ;
  real32_T rtb_Sum1;
  int16_T b_output[3];
  uint8_T output_raw[6];
  uint8_T b_SwappedDataBytes[2];
  uint8_T b_x[2];
  uint8_T status;
  boolean_T aVarTruthTableCondition_1;
  boolean_T aVarTruthTableCondition_2;
  boolean_T aVarTruthTableCondition_3;
  boolean_T aVarTruthTableCondition_4;
  boolean_T tmp;
  boolean_T tmp_0;
  boolean_T tmp_2;

  /* Reset subsysRan breadcrumbs */
  srClearBC(rtDW.EnabledSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(rtDW.IfActionSubsystem_c.IfActionSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(rtDW.IfActionSubsystem1_g.IfActionSubsystem1_SubsysRanBC);

  /* MATLABSystem: '<Root>/I2C Read' */
  if (rtDW.obj_j.SampleTime != rtP.I2CRead_SampleTime) {
    rtDW.obj_j.SampleTime = rtP.I2CRead_SampleTime;
  }

  status = 59U;
  status = MW_I2C_MasterWrite(rtDW.obj_j.I2CDriverObj.MW_I2C_HANDLE, 104UL,
    &status, 1UL, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(rtDW.obj_j.I2CDriverObj.MW_I2C_HANDLE, 104UL, &output_raw
                      [0], 6UL, false, true);
    memcpy((void *)&b_output[0], (void *)&output_raw[0], (uint16_T)((size_t)3 *
            sizeof(int16_T)));
    memcpy((void *)&b_SwappedDataBytes[0], (void *)&b_output[0], (uint16_T)
           ((size_t)2 * sizeof(uint8_T)));
    b_x[0] = b_SwappedDataBytes[1];
    b_x[1] = b_SwappedDataBytes[0];
    memcpy((void *)&b_output[0], (void *)&b_x[0], (uint16_T)((size_t)1 * sizeof
            (int16_T)));
    memcpy((void *)&b_SwappedDataBytes[0], (void *)&b_output[1], (uint16_T)
           ((size_t)2 * sizeof(uint8_T)));
    b_x[0] = b_SwappedDataBytes[1];
    b_x[1] = b_SwappedDataBytes[0];
    memcpy((void *)&b_output[1], (void *)&b_x[0], (uint16_T)((size_t)1 * sizeof
            (int16_T)));
    memcpy((void *)&b_SwappedDataBytes[0], (void *)&b_output[2], (uint16_T)
           ((size_t)2 * sizeof(uint8_T)));
    b_x[0] = b_SwappedDataBytes[1];
    b_x[1] = b_SwappedDataBytes[0];
    memcpy((void *)&b_output[2], (void *)&b_x[0], (uint16_T)((size_t)1 * sizeof
            (int16_T)));
  } else {
    b_output[0] = 0;
    b_output[1] = 0;
    b_output[2] = 0;
  }

  /* MATLAB Function: '<S3>/MATLAB Function' incorporates:
   *  MATLABSystem: '<Root>/I2C Read'
   */
  aX = (real32_T)b_output[0] / 16384.0F;
  aY = (real32_T)b_output[1] / 16384.0F;
  aZ = (real32_T)b_output[2] / 16384.0F;
  aZ *= aZ;

  /* Math: '<S3>/Transpose' incorporates:
   *  DiscreteIntegrator: '<S3>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S3>/Discrete-Time Integrator1'
   *  DiscreteIntegrator: '<S3>/Discrete-Time Integrator2'
   *  Gain: '<S3>/Gain3'
   *  Gain: '<S3>/Gain4'
   *  Gain: '<S3>/Gain5'
   *  Gain: '<S3>/Gain6'
   *  MATLAB Function: '<S3>/MATLAB Function'
   *  Sum: '<S3>/Add2'
   *  Sum: '<S3>/Add3'
   */
  rtB.Transpose[0] = (atanf(aY / sqrtf(aX * aX + aZ)) * 180.0F / 3.14159274F -
                      0.58F) * rtP.Gain4_Gain + rtP.Gain3_Gain *
    rtDW.DiscreteTimeIntegrator_DSTATE;
  rtB.Transpose[1] = (atanf(-aX / sqrtf(aY * aY + aZ)) * 180.0F / 3.14159274F +
                      1.58F) * rtP.Gain6_Gain + rtP.Gain5_Gain *
    rtDW.DiscreteTimeIntegrator1_DSTATE;
  rtB.Transpose[2] = rtDW.DiscreteTimeIntegrator2_DSTATE;

  /* MATLABSystem: '<Root>/I2C Read1' */
  if (rtDW.obj.SampleTime != rtP.I2CRead1_SampleTime) {
    rtDW.obj.SampleTime = rtP.I2CRead1_SampleTime;
  }

  status = 67U;
  status = MW_I2C_MasterWrite(rtDW.obj.I2CDriverObj.MW_I2C_HANDLE, 104UL,
    &status, 1UL, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(rtDW.obj.I2CDriverObj.MW_I2C_HANDLE, 104UL, &output_raw[0],
                      6UL, false, true);
    memcpy((void *)&b_output[0], (void *)&output_raw[0], (uint16_T)((size_t)3 *
            sizeof(int16_T)));
    memcpy((void *)&b_SwappedDataBytes[0], (void *)&b_output[0], (uint16_T)
           ((size_t)2 * sizeof(uint8_T)));
    b_x[0] = b_SwappedDataBytes[1];
    b_x[1] = b_SwappedDataBytes[0];
    memcpy((void *)&b_output[0], (void *)&b_x[0], (uint16_T)((size_t)1 * sizeof
            (int16_T)));
    memcpy((void *)&b_SwappedDataBytes[0], (void *)&b_output[1], (uint16_T)
           ((size_t)2 * sizeof(uint8_T)));
    b_x[0] = b_SwappedDataBytes[1];
    b_x[1] = b_SwappedDataBytes[0];
    memcpy((void *)&b_output[1], (void *)&b_x[0], (uint16_T)((size_t)1 * sizeof
            (int16_T)));
    memcpy((void *)&b_SwappedDataBytes[0], (void *)&b_output[2], (uint16_T)
           ((size_t)2 * sizeof(uint8_T)));
    b_x[0] = b_SwappedDataBytes[1];
    b_x[1] = b_SwappedDataBytes[0];
    memcpy((void *)&b_output[2], (void *)&b_x[0], (uint16_T)((size_t)1 * sizeof
            (int16_T)));
  } else {
    b_output[0] = 0;
    b_output[1] = 0;
    b_output[2] = 0;
  }

  /* Gain: '<S3>/Gain2' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion1'
   *  MATLABSystem: '<Root>/I2C Read1'
   */
  rtB.Gain2[0] = rtP.Gain2_Gain * (real32_T)b_output[0];
  rtB.Gain2[1] = rtP.Gain2_Gain * (real32_T)b_output[1];
  rtB.Gain2[2] = rtP.Gain2_Gain * (real32_T)b_output[2];

  /* DotProduct: '<S7>/Dot Product2' incorporates:
   *  Product: '<S7>/linear term2'
   *  S-Function (sdspramp): '<S7>/Constant Ramp'
   */
  aZ = rtConstB.ramp * rtConstB.ramp;

  /* Sum: '<S7>/Sum1' incorporates:
   *  DotProduct: '<S7>/Dot Product2'
   *  Product: '<S7>/linear term3'
   *  S-Function (sdspstatminmax): '<S7>/Maximum'
   */
  rtb_Sum1 = aZ * rtConstB.ramp - aZ;

  /* If: '<S7>/else' incorporates:
   *  DotProduct: '<S7>/Dot Product'
   *  DotProduct: '<S7>/Dot Product2'
   *  S-Function (sdspramp): '<S7>/Constant Ramp'
   *  S-Function (sdspstatminmax): '<S7>/Maximum'
   *  Sum: '<S7>/Matrix Sum1'
   *  Sum: '<S7>/Matrix Sum2'
   */
  if (rtb_Sum1 > 1.0F) {
    /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem' incorporates:
     *  ActionPort: '<S13>/Action Port'
     */
    IfActionSubsystem(rtConstB.ramp * rtB.Gain2[0], rtConstB.ramp, rtB.Gain2[0],
                      rtConstB.ramp, aZ, rtb_Sum1, &aX, &aY);

    /* End of Outputs for SubSystem: '<S7>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S14>/Action Port'
     */
    IfActionSubsystem1(rtb_Sum1, rtB.Gain2[0], &aX, &aY);

    /* End of Outputs for SubSystem: '<S7>/If Action Subsystem1' */
  }

  /* End of If: '<S7>/else' */

  /* DotProduct: '<S8>/Dot Product2' incorporates:
   *  Product: '<S8>/linear term2'
   *  S-Function (sdspramp): '<S8>/Constant Ramp'
   */
  aZ = rtConstB.ramp_i * rtConstB.ramp_i;

  /* Sum: '<S7>/Sum4' incorporates:
   *  Product: '<S7>/linear term1'
   *  Sum: '<S7>/Sum5'
   */
  aY = rtB.Gain2[0] - (rtConstB.ramp * aX + aY);

  /* S-Function (sdspfrmconv): '<S15>/Inherit' */
  /* DSP System Toolbox Frame Status Conversion (sdspfrmconv) - <S15>/Inherit */
  rtb_Inherit = aY;

  /* Sum: '<S8>/Sum1' incorporates:
   *  DotProduct: '<S8>/Dot Product2'
   *  Product: '<S8>/linear term3'
   *  S-Function (sdspstatminmax): '<S8>/Maximum'
   */
  rtb_Sum1 = aZ * rtConstB.ramp_i - aZ;

  /* If: '<S8>/else' incorporates:
   *  DotProduct: '<S8>/Dot Product'
   *  DotProduct: '<S8>/Dot Product2'
   *  S-Function (sdspramp): '<S8>/Constant Ramp'
   *  S-Function (sdspstatminmax): '<S8>/Maximum'
   *  Sum: '<S8>/Matrix Sum1'
   *  Sum: '<S8>/Matrix Sum2'
   */
  if (rtb_Sum1 > 1.0F) {
    /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem' incorporates:
     *  ActionPort: '<S18>/Action Port'
     */
    IfActionSubsystem(rtConstB.ramp_i * rtB.Gain2[1], rtConstB.ramp_i,
                      rtB.Gain2[1], rtConstB.ramp_i, aZ, rtb_Sum1, &aY, &aX);

    /* End of Outputs for SubSystem: '<S8>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S19>/Action Port'
     */
    IfActionSubsystem1(rtb_Sum1, rtB.Gain2[1], &aY, &aX);

    /* End of Outputs for SubSystem: '<S8>/If Action Subsystem1' */
  }

  /* End of If: '<S8>/else' */

  /* DotProduct: '<S9>/Dot Product2' incorporates:
   *  Product: '<S9>/linear term2'
   *  S-Function (sdspramp): '<S9>/Constant Ramp'
   */
  aZ = rtConstB.ramp_f * rtConstB.ramp_f;

  /* Sum: '<S9>/Sum4' incorporates:
   *  Product: '<S8>/linear term1'
   *  Sum: '<S8>/Sum4'
   *  Sum: '<S8>/Sum5'
   */
  aX = rtB.Gain2[1] - (rtConstB.ramp_i * aY + aX);

  /* S-Function (sdspfrmconv): '<S20>/Inherit' */
  /* DSP System Toolbox Frame Status Conversion (sdspfrmconv) - <S20>/Inherit */
  rtb_Inherit_g = aX;

  /* Sum: '<S9>/Sum1' incorporates:
   *  DotProduct: '<S9>/Dot Product2'
   *  Product: '<S9>/linear term3'
   *  S-Function (sdspstatminmax): '<S9>/Maximum'
   */
  rtb_Sum1 = aZ * rtConstB.ramp_f - aZ;

  /* If: '<S9>/else' incorporates:
   *  DotProduct: '<S9>/Dot Product'
   *  DotProduct: '<S9>/Dot Product2'
   *  S-Function (sdspramp): '<S9>/Constant Ramp'
   *  S-Function (sdspstatminmax): '<S9>/Maximum'
   *  Sum: '<S9>/Matrix Sum1'
   *  Sum: '<S9>/Matrix Sum2'
   */
  if (rtb_Sum1 > 1.0F) {
    /* Outputs for IfAction SubSystem: '<S9>/If Action Subsystem' incorporates:
     *  ActionPort: '<S23>/Action Port'
     */
    IfActionSubsystem(rtConstB.ramp_f * rtB.Gain2[2], rtConstB.ramp_f,
                      rtB.Gain2[2], rtConstB.ramp_f, aZ, rtb_Sum1, &aY, &aX);

    /* End of Outputs for SubSystem: '<S9>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S9>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S24>/Action Port'
     */
    IfActionSubsystem1(rtb_Sum1, rtB.Gain2[2], &aY, &aX);

    /* End of Outputs for SubSystem: '<S9>/If Action Subsystem1' */
  }

  /* End of If: '<S9>/else' */

  /* Sum: '<S9>/Sum4' incorporates:
   *  Product: '<S9>/linear term1'
   *  Sum: '<S9>/Sum5'
   */
  aX = rtB.Gain2[2] - (rtConstB.ramp_f * aY + aX);

  /* S-Function (sdspfrmconv): '<S25>/Inherit' */
  /* DSP System Toolbox Frame Status Conversion (sdspfrmconv) - <S25>/Inherit */
  rtb_Inherit_i = aX;

  /* DataTypeConversion: '<Root>/Cast To Single' incorporates:
   *  UnitDelay: '<S1>/Output'
   */
  rtB.CastToSingle = rtDW.Output_DSTATE;

  /* Truth Table: '<Root>/Truth Table' */
  /*  Accelerometer 1 */
  aVarTruthTableCondition_1 = (rtB.CastToSingle == 0);

  /*  Accelerometer 2 */
  aVarTruthTableCondition_2 = (rtB.CastToSingle == 1);

  /*  Accelerometer 3 */
  aVarTruthTableCondition_3 = (rtB.CastToSingle == 2);

  /*  Accelerometer 4 */
  aVarTruthTableCondition_4 = (rtB.CastToSingle == 3);
  tmp = !aVarTruthTableCondition_3;
  tmp_0 = !aVarTruthTableCondition_4;
  tmp_2 = !aVarTruthTableCondition_2;
  if (aVarTruthTableCondition_1 && tmp_2 && tmp && tmp_0) {
    /*  SNSR1 */
    aVarTruthTableCondition_1 = false;
    aVarTruthTableCondition_2 = true;
    aVarTruthTableCondition_3 = true;
    rtB.turnOffSensor4 = true;
  } else {
    boolean_T tmp_1;
    tmp_1 = !aVarTruthTableCondition_1;
    if (tmp_1 && aVarTruthTableCondition_2 && tmp && tmp_0) {
      /*  SNSR2 */
      aVarTruthTableCondition_1 = true;
      aVarTruthTableCondition_2 = false;
      aVarTruthTableCondition_3 = true;
      rtB.turnOffSensor4 = true;
    } else if (tmp_1 && tmp_2 && aVarTruthTableCondition_3 && tmp_0) {
      /*  SNSR3 */
      aVarTruthTableCondition_1 = true;
      aVarTruthTableCondition_2 = true;
      aVarTruthTableCondition_3 = false;
      rtB.turnOffSensor4 = true;
    } else if ((!aVarTruthTableCondition_1) && tmp_2 && tmp &&
               aVarTruthTableCondition_4) {
      /*  SNSR4 */
      aVarTruthTableCondition_1 = true;
      aVarTruthTableCondition_2 = true;
      aVarTruthTableCondition_3 = true;
      rtB.turnOffSensor4 = false;
    } else {
      /*  Default */
      /*  Error */
      aVarTruthTableCondition_1 = true;
      aVarTruthTableCondition_2 = true;
      aVarTruthTableCondition_3 = true;
      rtB.turnOffSensor4 = true;
    }
  }

  /* End of Truth Table: '<Root>/Truth Table' */

  /* MATLABSystem: '<Root>/Digital Output' */
  writeDigitalPin(51, (uint8_T)aVarTruthTableCondition_2);

  /* MATLABSystem: '<Root>/Digital Output1' */
  writeDigitalPin(52, (uint8_T)aVarTruthTableCondition_3);

  /* MATLABSystem: '<Root>/Digital Output2' */
  writeDigitalPin(53, (uint8_T)rtB.turnOffSensor4);

  /* MATLABSystem: '<Root>/Digital Output3' */
  writeDigitalPin(50, (uint8_T)aVarTruthTableCondition_1);

  /* Sum: '<S5>/FixPt Sum1' incorporates:
   *  Constant: '<S5>/FixPt Constant'
   *  UnitDelay: '<S1>/Output'
   */
  status = (uint8_T)((uint8_T)((uint16_T)rtDW.Output_DSTATE +
    rtP.FixPtConstant_Value) & 3);

  /* Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S2>/Enable'
   */
  /* UnitDelay: '<Root>/Unit Delay' */
  if (rtDW.UnitDelay_DSTATE > 0.0) {
    /* MATLABSystem: '<S2>/I2C Write' incorporates:
     *  Constant: '<S2>/init_Device'
     *  DataTypeConversion: '<S2>/Data Type Conversion'
     */
    b_SwappedDataBytes[0] = 107U;
    b_SwappedDataBytes[1] = (uint8_T)rtP.init_Device_Value;
    MW_I2C_MasterWrite(rtDW.obj_e.I2CDriverObj.MW_I2C_HANDLE, 104UL,
                       &b_SwappedDataBytes[0], 2UL, false, false);

    /* MATLABSystem: '<S2>/I2C Write1' incorporates:
     *  Constant: '<S2>/init_Accel'
     *  DataTypeConversion: '<S2>/Data Type Conversion1'
     */
    b_SwappedDataBytes[0] = 28U;
    b_SwappedDataBytes[1] = (uint8_T)rtP.init_Accel_Value;
    MW_I2C_MasterWrite(rtDW.obj_n.I2CDriverObj.MW_I2C_HANDLE, 104UL,
                       &b_SwappedDataBytes[0], 2UL, false, false);
    srUpdateBC(rtDW.EnabledSubsystem_SubsysRanBC);
  }

  /* End of UnitDelay: '<Root>/Unit Delay' */
  /* End of Outputs for SubSystem: '<Root>/Enabled Subsystem' */

  /* Update for DiscreteIntegrator: '<S3>/Discrete-Time Integrator' */
  rtDW.DiscreteTimeIntegrator_DSTATE += rtP.DiscreteTimeIntegrator_gainval *
    rtb_Inherit;

  /* Update for DiscreteIntegrator: '<S3>/Discrete-Time Integrator1' */
  rtDW.DiscreteTimeIntegrator1_DSTATE += rtP.DiscreteTimeIntegrator1_gainval *
    rtb_Inherit_g;

  /* Update for DiscreteIntegrator: '<S3>/Discrete-Time Integrator2' */
  rtDW.DiscreteTimeIntegrator2_DSTATE += rtP.DiscreteTimeIntegrator2_gainval *
    rtb_Inherit_i;

  /* Switch: '<S6>/FixPt Switch' incorporates:
   *  Sum: '<S5>/FixPt Sum1'
   */
  if (status > rtP.WrapToZero_Threshold) {
    /* Update for UnitDelay: '<S1>/Output' incorporates:
     *  Constant: '<S6>/Constant'
     */
    rtDW.Output_DSTATE = rtP.Constant_Value;
  } else {
    /* Update for UnitDelay: '<S1>/Output' */
    rtDW.Output_DSTATE = status;
  }

  /* End of Switch: '<S6>/FixPt Switch' */

  /* Update for UnitDelay: '<Root>/Unit Delay' */
  rtDW.UnitDelay_DSTATE = 0.0;

  {                                    /* Sample time: [0.02s, 0.0s] */
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  rtM->Timing.taskTime0 =
    ((time_T)(++rtM->Timing.clockTick0)) * rtM->Timing.stepSize0;
}

/* Model initialize function */
void Arduino_MPU6050_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(rtM, -1);
  rtM->Timing.stepSize0 = 0.02;

  /* External mode info */
  rtM->Sizes.checksums[0] = (3071317063U);
  rtM->Sizes.checksums[1] = (510741223U);
  rtM->Sizes.checksums[2] = (995843770U);
  rtM->Sizes.checksums[3] = (2696989591U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[19];
    rtM->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = (sysRanDType *)&rtDW.EnabledSubsystem_SubsysRanBC;
    systemRan[7] = (sysRanDType *)&rtDW.EnabledSubsystem_SubsysRanBC;
    systemRan[8] = (sysRanDType *)&rtDW.EnabledSubsystem_SubsysRanBC;
    systemRan[9] = &rtAlwaysEnabled;
    systemRan[10] = &rtAlwaysEnabled;
    systemRan[11] = (sysRanDType *)
      &rtDW.IfActionSubsystem_c.IfActionSubsystem_SubsysRanBC;
    systemRan[12] = (sysRanDType *)
      &rtDW.IfActionSubsystem1_g.IfActionSubsystem1_SubsysRanBC;
    systemRan[13] = (sysRanDType *)
      &rtDW.IfActionSubsystem_a.IfActionSubsystem_SubsysRanBC;
    systemRan[14] = (sysRanDType *)
      &rtDW.IfActionSubsystem1_p.IfActionSubsystem1_SubsysRanBC;
    systemRan[15] = (sysRanDType *)
      &rtDW.IfActionSubsystem_o.IfActionSubsystem_SubsysRanBC;
    systemRan[16] = (sysRanDType *)
      &rtDW.IfActionSubsystem1_d.IfActionSubsystem1_SubsysRanBC;
    systemRan[17] = &rtAlwaysEnabled;
    systemRan[18] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(rtM->extModeInfo, &rtM->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(rtM->extModeInfo, rtM->Sizes.checksums);
    rteiSetTPtr(rtM->extModeInfo, rtmGetTPtr(rtM));
  }

  {
    uint32_T i2cname;
    codertarget_arduinobase_inter_k *obj;
    codertarget_arduinobase_interna *obj_0;
    uint32_T varargin_1;

    /* InitializeConditions for DiscreteIntegrator: '<S3>/Discrete-Time Integrator' */
    rtDW.DiscreteTimeIntegrator_DSTATE = rtP.DiscreteTimeIntegrator_IC;

    /* InitializeConditions for DiscreteIntegrator: '<S3>/Discrete-Time Integrator1' */
    rtDW.DiscreteTimeIntegrator1_DSTATE = rtP.DiscreteTimeIntegrator1_IC;

    /* InitializeConditions for DiscreteIntegrator: '<S3>/Discrete-Time Integrator2' */
    rtDW.DiscreteTimeIntegrator2_DSTATE = rtP.DiscreteTimeIntegrator2_IC;

    /* InitializeConditions for UnitDelay: '<S1>/Output' */
    rtDW.Output_DSTATE = rtP.Output_InitialCondition;

    /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
    rtDW.UnitDelay_DSTATE = rtP.UnitDelay_InitialCondition;

    /* SystemInitialize for Enabled SubSystem: '<Root>/Enabled Subsystem' */
    /* Start for MATLABSystem: '<S2>/I2C Write' */
    rtDW.obj_e.matlabCodegenIsDeleted = true;
    rtDW.obj_e.DefaultMaximumBusSpeedInHz = 400000.0;
    rtDW.obj_e.isInitialized = 0L;
    rtDW.obj_e.I2CDriverObj.MW_I2C_HANDLE = NULL;
    rtDW.obj_e.matlabCodegenIsDeleted = false;
    obj_0 = &rtDW.obj_e;
    rtDW.obj_e.isSetupComplete = false;
    rtDW.obj_e.isInitialized = 1L;
    i2cname = 0;
    obj_0->I2CDriverObj.MW_I2C_HANDLE = MW_I2C_Open(i2cname, 0);
    rtDW.obj_e.BusSpeed = 100000UL;
    varargin_1 = rtDW.obj_e.BusSpeed;
    MW_I2C_SetBusSpeed(rtDW.obj_e.I2CDriverObj.MW_I2C_HANDLE, varargin_1);
    rtDW.obj_e.isSetupComplete = true;

    /* Start for MATLABSystem: '<S2>/I2C Write1' */
    rtDW.obj_n.matlabCodegenIsDeleted = true;
    rtDW.obj_n.DefaultMaximumBusSpeedInHz = 400000.0;
    rtDW.obj_n.isInitialized = 0L;
    rtDW.obj_n.I2CDriverObj.MW_I2C_HANDLE = NULL;
    rtDW.obj_n.matlabCodegenIsDeleted = false;
    obj_0 = &rtDW.obj_n;
    rtDW.obj_n.isSetupComplete = false;
    rtDW.obj_n.isInitialized = 1L;
    i2cname = 0;
    obj_0->I2CDriverObj.MW_I2C_HANDLE = MW_I2C_Open(i2cname, 0);
    rtDW.obj_n.BusSpeed = 100000UL;
    varargin_1 = rtDW.obj_n.BusSpeed;
    MW_I2C_SetBusSpeed(rtDW.obj_n.I2CDriverObj.MW_I2C_HANDLE, varargin_1);
    rtDW.obj_n.isSetupComplete = true;

    /* End of SystemInitialize for SubSystem: '<Root>/Enabled Subsystem' */

    /* Start for MATLABSystem: '<Root>/I2C Read' */
    rtDW.obj_j.matlabCodegenIsDeleted = true;
    rtDW.obj_j.DefaultMaximumBusSpeedInHz = 400000.0;
    rtDW.obj_j.isInitialized = 0L;
    rtDW.obj_j.SampleTime = -1.0;
    rtDW.obj_j.I2CDriverObj.MW_I2C_HANDLE = NULL;
    rtDW.obj_j.matlabCodegenIsDeleted = false;
    rtDW.obj_j.SampleTime = rtP.I2CRead_SampleTime;
    obj = &rtDW.obj_j;
    rtDW.obj_j.isSetupComplete = false;
    rtDW.obj_j.isInitialized = 1L;
    i2cname = 0;
    obj->I2CDriverObj.MW_I2C_HANDLE = MW_I2C_Open(i2cname, 0);
    rtDW.obj_j.BusSpeed = 100000UL;
    varargin_1 = rtDW.obj_j.BusSpeed;
    MW_I2C_SetBusSpeed(rtDW.obj_j.I2CDriverObj.MW_I2C_HANDLE, varargin_1);
    rtDW.obj_j.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/I2C Read1' */
    rtDW.obj.matlabCodegenIsDeleted = true;
    rtDW.obj.DefaultMaximumBusSpeedInHz = 400000.0;
    rtDW.obj.isInitialized = 0L;
    rtDW.obj.SampleTime = -1.0;
    rtDW.obj.I2CDriverObj.MW_I2C_HANDLE = NULL;
    rtDW.obj.matlabCodegenIsDeleted = false;
    rtDW.obj.SampleTime = rtP.I2CRead1_SampleTime;
    obj = &rtDW.obj;
    rtDW.obj.isSetupComplete = false;
    rtDW.obj.isInitialized = 1L;
    i2cname = 0;
    obj->I2CDriverObj.MW_I2C_HANDLE = MW_I2C_Open(i2cname, 0);
    rtDW.obj.BusSpeed = 100000UL;
    varargin_1 = rtDW.obj.BusSpeed;
    MW_I2C_SetBusSpeed(rtDW.obj.I2CDriverObj.MW_I2C_HANDLE, varargin_1);
    rtDW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output' */
    rtDW.obj_o.matlabCodegenIsDeleted = false;
    rtDW.obj_o.isInitialized = 1L;
    digitalIOSetup(51, 1);
    rtDW.obj_o.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output1' */
    rtDW.obj_jz.matlabCodegenIsDeleted = false;
    rtDW.obj_jz.isInitialized = 1L;
    digitalIOSetup(52, 1);
    rtDW.obj_jz.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output2' */
    rtDW.obj_e4.matlabCodegenIsDeleted = false;
    rtDW.obj_e4.isInitialized = 1L;
    digitalIOSetup(53, 1);
    rtDW.obj_e4.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output3' */
    rtDW.obj_p.matlabCodegenIsDeleted = false;
    rtDW.obj_p.isInitialized = 1L;
    digitalIOSetup(50, 1);
    rtDW.obj_p.isSetupComplete = true;
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
