/*
 * File: DZ_DSMC.c
 *
 * Code generated for Simulink model 'DZ_DSMC'.
 *
 * Model version                  : 4.49
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Fri Apr  8 14:04:55 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DZ_DSMC_capi.h"
#include "DZ_DSMC.h"
#include "DZ_DSMC_private.h"
#include "rt_remd.h"
#include "rt_roundd.h"

P_DZ_DSMC_T DZ_DSMC_P = {
  /* Mask Parameter: MATLABFunction5_C
   * Referenced by: '<Root>/MATLAB Function5'
   */
  { 10.0598631F, 0.988227904F },

  /* Mask Parameter: MATLABFunction5_Gam
   * Referenced by: '<Root>/MATLAB Function5'
   */
  { 0.0251162369F, 0.992807806F },

  /* Mask Parameter: VariantSubsystem2_Gam
   * Referenced by: '<S3>/Discrete State-Space'
   */
  { 0.0251162369F, 0.992807806F },

  /* Mask Parameter: MATLABFunction5_Phi
   * Referenced by: '<Root>/MATLAB Function5'
   */
  { 0.999403477F, 0.0216036141F, 0.0183158685F, 0.00224760897F },

  /* Mask Parameter: VariantSubsystem2_Phi
   * Referenced by: '<S3>/Discrete State-Space'
   */
  { 0.999403477F, 0.0216036141F, 0.0183158685F, 0.00224760897F },

  /* Mask Parameter: MATLABFunction5_Ts
   * Referenced by: '<Root>/MATLAB Function5'
   */
  0.015F,

  /* Mask Parameter: MATLABFunction5_del
   * Referenced by: '<Root>/MATLAB Function5'
   */
  0.898495138F,

  /* Mask Parameter: MATLABFunction5_eta
   * Referenced by: '<Root>/MATLAB Function5'
   */
  30.0048714F,

  /* Mask Parameter: MATLABFunction5_qT
   * Referenced by: '<Root>/MATLAB Function5'
   */
  0.929886758F,

  /* Mask Parameter: TappedDelay_vinit
   * Referenced by: '<Root>/Tapped Delay'
   */
  0.0F,

  /* Mask Parameter: MATLABFunction5_vphi
   * Referenced by: '<Root>/MATLAB Function5'
   */
  1.00143456E-10F,

  /* Mask Parameter: MATLABFunction5_xiT
   * Referenced by: '<Root>/MATLAB Function5'
   */
  1.04142869F,

  /* Mask Parameter: MATLABFunction5_gamm
   * Referenced by: '<Root>/MATLAB Function5'
   */
  5U,

  /* Mask Parameter: MATLABFunction5_n
   * Referenced by: '<Root>/MATLAB Function5'
   */
  10U,

  /* Computed Parameter: UnitDelay_InitialCondition
   * Referenced by: '<Root>/Unit Delay'
   */
  0.0F,

  /* Computed Parameter: DiscreteStateSpace_C
   * Referenced by: '<S3>/Discrete State-Space'
   */
  { 1.0F, 0.0F, 0.0F, 1.0F },

  /* Computed Parameter: DiscreteStateSpace_D
   * Referenced by: '<S3>/Discrete State-Space'
   */
  { 0.0F, 0.0F },

  /* Computed Parameter: DiscreteStateSpace_InitialCondi
   * Referenced by: '<S3>/Discrete State-Space'
   */
  0.0F,

  /* Expression: single(C*Gam)
   * Referenced by: '<Root>/C*Gamma'
   */
  1.23378623F,

  /* Expression: single(C*Phi)
   * Referenced by: '<Root>/C*Phi'
   */
  { 10.0752115F, 0.186476275F },

  /* Expression: single(30/pi)
   * Referenced by: '<S3>/Gain2'
   */
  9.54929638F,

  /* Expression: single(pi/30)
   * Referenced by: '<S3>/Gain3'
   */
  0.104719758F
};

/* System initialize for referenced model: 'DZ_DSMC' */
void DZ_DSMC_Init(DW_DZ_DSMC_f_T *localDW)
{
  int16_T i;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
  localDW->UnitDelay_DSTATE = DZ_DSMC_P.UnitDelay_InitialCondition;

  /* InitializeConditions for S-Function (sfix_udelay): '<Root>/Tapped Delay' */
  for (i = 0; i < 10; i++) {
    localDW->TappedDelay_X[i] = DZ_DSMC_P.TappedDelay_vinit;
  }

  /* End of InitializeConditions for S-Function (sfix_udelay): '<Root>/Tapped Delay' */

  /* InitializeConditions for DiscreteStateSpace: '<S3>/Discrete State-Space' */
  localDW->DiscreteStateSpace_DSTATE[0] =
    DZ_DSMC_P.DiscreteStateSpace_InitialCondi;
  localDW->DiscreteStateSpace_DSTATE[1] =
    DZ_DSMC_P.DiscreteStateSpace_InitialCondi;
}

/* Output and update for referenced model: 'DZ_DSMC' */
void DZ_DSMC(RT_MODEL_DZ_DSMC_T * const DZ_DSMC_M, const real32_T rtu_Ref[2],
             const real32_T *rtu_Dis, real32_T rty_State[2], B_DZ_DSMC_c_T
             *localB, DW_DZ_DSMC_f_T *localDW)
{
  real_T nmk;
  real_T rtb_DigitalClock;
  real_T y;
  real32_T Lamk;
  real32_T Lamk_tmp;
  real32_T rtb_Minus;
  real32_T rtb_Minus_idx_0;
  real32_T rtb_uk;
  real32_T rtb_uk_tmp;
  real32_T udk;
  int16_T i;
  int_T j;

  /* UnitDelay: '<Root>/Unit Delay' */
  localB->UnitDelay = localDW->UnitDelay_DSTATE;

  /* S-Function (sfix_udelay): '<Root>/Tapped Delay' */
  localB->TappedDelay[0] = localB->UnitDelay;
  for (i = 0; i < 10; i++) {
    localB->TappedDelay[i + 1] = localDW->TappedDelay_X[i];
  }

  /* End of S-Function (sfix_udelay): '<Root>/Tapped Delay' */

  /* DigitalClock: '<Root>/Digital Clock' */
  rtb_DigitalClock = (rtmGetClockTick0(DZ_DSMC_M) * 0.015);

  /* DiscreteStateSpace: '<S3>/Discrete State-Space' */
  rty_State[0] = 0.0F;
  rty_State[0] += DZ_DSMC_P.DiscreteStateSpace_C[0] *
    localDW->DiscreteStateSpace_DSTATE[0];
  rty_State[0] += localDW->DiscreteStateSpace_DSTATE[1] *
    DZ_DSMC_P.DiscreteStateSpace_C[2];

  /* Sum: '<Root>/Minus' */
  rtb_Minus = rty_State[0] - rtu_Ref[0];

  /* MATLAB Function: '<Root>/MATLAB Function5' */
  rtb_uk_tmp = DZ_DSMC_P.MATLABFunction5_C[0] * rtb_Minus;

  /* Sum: '<Root>/Minus' */
  rtb_Minus_idx_0 = rtb_Minus;

  /* DiscreteStateSpace: '<S3>/Discrete State-Space' */
  rty_State[1] = 0.0F;
  rty_State[1] += localDW->DiscreteStateSpace_DSTATE[0] *
    DZ_DSMC_P.DiscreteStateSpace_C[1];
  rty_State[1] += localDW->DiscreteStateSpace_DSTATE[1] *
    DZ_DSMC_P.DiscreteStateSpace_C[3];

  /* Sum: '<Root>/Minus' */
  rtb_Minus = rty_State[1] - rtu_Ref[1];

  /* MATLAB Function: '<Root>/MATLAB Function5' */
  rtb_uk_tmp += DZ_DSMC_P.MATLABFunction5_C[1] * rtb_Minus;
  if (((real32_T)rt_remd(rtb_DigitalClock, (real_T)DZ_DSMC_P.MATLABFunction5_Ts))
      == 0.0F) {
    if ((boolean_T)((int16_T)(((rtb_DigitalClock != 0.0) ? ((int16_T)1) :
           ((int16_T)0)) & ((localDW->k < ((real_T)DZ_DSMC_P.MATLABFunction5_n))
           ? ((int16_T)1) : ((int16_T)0))))) {
      localDW->k++;
    }
  }

  udk = 0.0F;
  for (i = 0; i < ((int16_T)localDW->k); i++) {
    if ((((real_T)i) + 1.0) > localDW->k) {
      y = 0.0;
    } else {
      rtb_DigitalClock = ((real_T)i) + 1.0;
      if ((((real_T)i) + 1.0) > (localDW->k / 2.0)) {
        rtb_DigitalClock = localDW->k - (((real_T)i) + 1.0);
      }

      if (rtb_DigitalClock > 1000.0) {
        y = 1.7976931348623157E+308;
      } else {
        y = 1.0;
        nmk = localDW->k - rtb_DigitalClock;
        for (j = 0; j < ((int_T)((int16_T)rtb_DigitalClock)); j++) {
          y *= ((((real_T)j) + 1.0) + nmk) / (((real_T)j) + 1.0);
        }

        y = rt_roundd(y);
      }
    }

    udk -= ((real32_T)((real_T)(pow(-1.0, ((real_T)i) + 1.0) * y))) *
      localB->TappedDelay[i + 1];
  }

  Lamk_tmp = (real32_T)fabs((real_T)rtb_uk_tmp);
  Lamk = ((1.0F - DZ_DSMC_P.MATLABFunction5_del) * ((real32_T)exp((real_T)
            ((real32_T)((-DZ_DSMC_P.MATLABFunction5_vphi) * ((real32_T)pow
    ((real_T)Lamk_tmp, (real_T)DZ_DSMC_P.MATLABFunction5_gamm))))))) +
    DZ_DSMC_P.MATLABFunction5_del;
  if (rtb_uk_tmp > DZ_DSMC_P.MATLABFunction5_eta) {
    i = 1;
  } else if (Lamk_tmp <= DZ_DSMC_P.MATLABFunction5_eta) {
    i = 0;
  } else {
    i = -1;
  }

  rtb_uk_tmp *= (1.0F - DZ_DSMC_P.MATLABFunction5_qT) * Lamk;
  Lamk_tmp = (DZ_DSMC_P.MATLABFunction5_xiT / Lamk) * ((real32_T)i);
  rtb_uk = (((((((DZ_DSMC_P.MATLABFunction5_C[0] *
                  DZ_DSMC_P.MATLABFunction5_Phi[0]) +
                 (DZ_DSMC_P.MATLABFunction5_C[1] *
                  DZ_DSMC_P.MATLABFunction5_Phi[1])) * rtb_Minus_idx_0) +
               (((DZ_DSMC_P.MATLABFunction5_C[0] *
                  DZ_DSMC_P.MATLABFunction5_Phi[2]) +
                 (DZ_DSMC_P.MATLABFunction5_C[1] *
                  DZ_DSMC_P.MATLABFunction5_Phi[3])) * rtb_Minus)) - rtb_uk_tmp)
             + Lamk_tmp) + udk) / (-((DZ_DSMC_P.MATLABFunction5_C[0] *
    DZ_DSMC_P.MATLABFunction5_Gam[0]) + (DZ_DSMC_P.MATLABFunction5_C[1] *
    DZ_DSMC_P.MATLABFunction5_Gam[1])));

  /* Gain: '<S3>/Gain3' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   *  Gain: '<S3>/Gain2'
   *  Sum: '<Root>/Add2'
   */
  Lamk = ((real32_T)((int32_T)((real32_T)floor((real_T)((real32_T)(((*rtu_Dis) +
    rtb_uk) * DZ_DSMC_P.Gain2_Gain)))))) * DZ_DSMC_P.Gain3_Gain;

  /* Update for UnitDelay: '<Root>/Unit Delay' incorporates:
   *  Gain: '<Root>/C*Gamma'
   *  Gain: '<Root>/C*Phi'
   *  MATLAB Function: '<Root>/MATLAB Function5'
   *  Sum: '<Root>/Add'
   */
  localDW->UnitDelay_DSTATE = (((rtb_uk_tmp - Lamk_tmp) + (localB->TappedDelay[0]
    - udk)) - ((DZ_DSMC_P.CPhi_Gain[0] * rtb_Minus_idx_0) +
               (DZ_DSMC_P.CPhi_Gain[1] * rtb_Minus))) - (DZ_DSMC_P.CGamma_Gain *
    rtb_uk);

  /* Update for S-Function (sfix_udelay): '<Root>/Tapped Delay' incorporates:
   *  DiscreteStateSpace: '<S3>/Discrete State-Space'
   * */
  for (i = 0; i < 9; i++) {
    localDW->TappedDelay_X[9 - i] = localDW->TappedDelay_X[8 - i];
  }

  localDW->TappedDelay_X[0] = localB->UnitDelay;

  /* End of Update for S-Function (sfix_udelay): '<Root>/Tapped Delay' */

  /* Update for DiscreteStateSpace: '<S3>/Discrete State-Space' */
  rtb_Minus = localDW->DiscreteStateSpace_DSTATE[0] *
    DZ_DSMC_P.VariantSubsystem2_Phi[1];
  localDW->DiscreteStateSpace_DSTATE[0] = ((DZ_DSMC_P.VariantSubsystem2_Phi[0] *
    localDW->DiscreteStateSpace_DSTATE[0]) + (localDW->
    DiscreteStateSpace_DSTATE[1] * DZ_DSMC_P.VariantSubsystem2_Phi[2])) +
    (DZ_DSMC_P.VariantSubsystem2_Gam[0] * Lamk);
  localDW->DiscreteStateSpace_DSTATE[1] = ((localDW->DiscreteStateSpace_DSTATE[1]
    * DZ_DSMC_P.VariantSubsystem2_Phi[3]) + rtb_Minus) +
    (DZ_DSMC_P.VariantSubsystem2_Gam[1] * Lamk);
}

/* Model initialize function */
void DZ_DSMC_initialize(const char_T **rt_errorStatus, const rtTimingBridge
  *timingBridge, int_T mdlref_TID0, RT_MODEL_DZ_DSMC_T *const DZ_DSMC_M,
  B_DZ_DSMC_c_T *localB, DW_DZ_DSMC_f_T *localDW, rtwCAPI_ModelMappingInfo
  *rt_ParentMMI, const char_T *rt_ChildPath, int_T rt_ChildMMIIdx, int_T
  rt_CSTATEIdx)
{
  /* Registration code */

  /* setup the global timing engine */
  DZ_DSMC_M->Timing.mdlref_GlobalTID[0] = mdlref_TID0;
  DZ_DSMC_M->timingBridge = (timingBridge);

  /* initialize error status */
  rtmSetErrorStatusPointer(DZ_DSMC_M, rt_errorStatus);

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  {
    DZ_DSMC_InitializeDataMapInfo(DZ_DSMC_M);
  }

  /* Initialize Parent model MMI */
  if ((rt_ParentMMI != (NULL)) && (rt_ChildPath != (NULL))) {
    rtwCAPI_SetChildMMI(*rt_ParentMMI, rt_ChildMMIIdx,
                        &(DZ_DSMC_M->DataMapInfo.mmi));
    rtwCAPI_SetPath(DZ_DSMC_M->DataMapInfo.mmi, rt_ChildPath);
    rtwCAPI_MMISetContStateStartIndex(DZ_DSMC_M->DataMapInfo.mmi, rt_CSTATEIdx);
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
