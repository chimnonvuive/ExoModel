/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Wed Apr 20 17:24:56 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "untitled.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

/* Block states (default storage) */
DW rtDW;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;
extern real_T rt_roundd_snf(real_T u);
real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Model step function */
void untitled_step(void)
{
  real_T tmp;
  uint8_T tmp_0;

  /* MATLABSystem: '<Root>/Digital Output' incorporates:
   *  Constant: '<Root>/Constant'
   */
  tmp = rt_roundd_snf(rtP.Constant_Value);
  if (tmp < 256.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint8_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  writeDigitalPin(6, tmp_0);

  /* End of MATLABSystem: '<Root>/Digital Output' */

  /* MATLABSystem: '<Root>/Digital Output1' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  tmp = rt_roundd_snf(rtP.Constant1_Value);
  if (tmp < 256.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint8_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  writeDigitalPin(7, tmp_0);

  /* End of MATLABSystem: '<Root>/Digital Output1' */
  {                                    /* Sample time: [0.2s, 0.0s] */
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
void untitled_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(rtM, -1);
  rtM->Timing.stepSize0 = 0.2;

  /* External mode info */
  rtM->Sizes.checksums[0] = (2180964621U);
  rtM->Sizes.checksums[1] = (2962407025U);
  rtM->Sizes.checksums[2] = (4042991912U);
  rtM->Sizes.checksums[3] = (2827791428U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[3];
    rtM->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(rtM->extModeInfo, &rtM->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(rtM->extModeInfo, rtM->Sizes.checksums);
    rteiSetTPtr(rtM->extModeInfo, rtmGetTPtr(rtM));
  }

  /* Start for MATLABSystem: '<Root>/Digital Output' */
  rtDW.obj_j.matlabCodegenIsDeleted = false;
  rtDW.obj_j.isInitialized = 1L;
  digitalIOSetup(6, 1);
  rtDW.obj_j.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output1' */
  rtDW.obj.matlabCodegenIsDeleted = false;
  rtDW.obj.isInitialized = 1L;
  digitalIOSetup(7, 1);
  rtDW.obj.isSetupComplete = true;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
