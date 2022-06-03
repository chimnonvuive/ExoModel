/*
 * Code generation for system model 'DZ_DSMC'
 *
 * Model                      : DZ_DSMC
 * Model version              : 4.93
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Thu May 19 17:44:59 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "DZ_DSMC.h"
#include "DZ_DSMC_private.h"
#include "rt_powd_snf.h"
#include "rt_powf_snf.h"
#include "rt_remd_snf.h"

P_DZ_DSMC_T DZ_DSMCModelClass::DZ_DSMC_rtP{
  /* Mask Parameter: MATLABFunction5_C
   * Referenced by: '<Root>/MATLAB Function5'
   */
  { 10.0598631F, 0.988227904F },

  /* Mask Parameter: MATLABFunction5_Gam
   * Referenced by: '<Root>/MATLAB Function5'
   */
  { 0.0251162369F, 0.992807806F },

  /* Mask Parameter: MATLABFunction5_Phi
   * Referenced by: '<Root>/MATLAB Function5'
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

  /* Computed Parameter: UnitDelay1_InitialCondition
   * Referenced by: '<S3>/Unit Delay1'
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
void DZ_DSMCModelClass::init(void)
{
  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
  DZ_DSMC_DW.UnitDelay_DSTATE = DZ_DSMC_rtP.UnitDelay_InitialCondition;

  /* InitializeConditions for S-Function (sfix_udelay): '<Root>/Tapped Delay' */
  for (int32_T i{0}; i < 10; i++) {
    DZ_DSMC_DW.TappedDelay_X[i] = DZ_DSMC_rtP.TappedDelay_vinit;
  }

  /* End of InitializeConditions for S-Function (sfix_udelay): '<Root>/Tapped Delay' */

  /* InitializeConditions for UnitDelay: '<S3>/Unit Delay1' */
  DZ_DSMC_DW.UnitDelay1_DSTATE[0] = DZ_DSMC_rtP.UnitDelay1_InitialCondition;
  DZ_DSMC_DW.UnitDelay1_DSTATE[1] = DZ_DSMC_rtP.UnitDelay1_InitialCondition;

  /* SystemInitialize for ModelReference generated from: '<S3>/Model' */
  ModelMDLOBJ1.init();
}

/* System reset for referenced model: 'DZ_DSMC' */
void DZ_DSMCModelClass::reset(void)
{
  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
  DZ_DSMC_DW.UnitDelay_DSTATE = DZ_DSMC_rtP.UnitDelay_InitialCondition;

  /* InitializeConditions for S-Function (sfix_udelay): '<Root>/Tapped Delay' */
  for (int32_T i{0}; i < 10; i++) {
    DZ_DSMC_DW.TappedDelay_X[i] = DZ_DSMC_rtP.TappedDelay_vinit;
  }

  /* End of InitializeConditions for S-Function (sfix_udelay): '<Root>/Tapped Delay' */

  /* InitializeConditions for UnitDelay: '<S3>/Unit Delay1' */
  DZ_DSMC_DW.UnitDelay1_DSTATE[0] = DZ_DSMC_rtP.UnitDelay1_InitialCondition;
  DZ_DSMC_DW.UnitDelay1_DSTATE[1] = DZ_DSMC_rtP.UnitDelay1_InitialCondition;

  /* SystemReset for MATLAB Function: '<Root>/MATLAB Function5' */
  DZ_DSMC_DW.k = 0.0;

  /* SystemReset for ModelReference generated from: '<S3>/Model' */
  ModelMDLOBJ1.reset();
}

/* Output and update for referenced model: 'DZ_DSMC' */
void DZ_DSMCModelClass::step(const real32_T rtu_Ref[2], const real32_T *rtu_Dis,
  real32_T rty_State[2])
{
  int32_T i;
  real32_T rtb_TappedDelay[11];
  real32_T sk;
  if (rtmIsSampleHit(getRTM(), 4, 0)) {
    real_T rtb_DigitalClock;
    real32_T Lamk;
    real32_T Lamk_tmp;
    real32_T rtb_Minus_idx_0;
    real32_T rtb_uk_tmp;
    real32_T udk;

    /* UnitDelay: '<Root>/Unit Delay' */
    DZ_DSMC_B.UnitDelay = DZ_DSMC_DW.UnitDelay_DSTATE;

    /* S-Function (sfix_udelay): '<Root>/Tapped Delay' */
    rtb_TappedDelay[0] = DZ_DSMC_B.UnitDelay;
    for (i = 0; i < 10; i++) {
      rtb_TappedDelay[i + 1] = DZ_DSMC_DW.TappedDelay_X[i];
    }

    /* End of S-Function (sfix_udelay): '<Root>/Tapped Delay' */

    /* DigitalClock: '<Root>/Digital Clock' */
    rtb_DigitalClock = (( rtmGetClockTick4((&DZ_DSMC_M)) + rtmGetClockTickH4
                         ((&DZ_DSMC_M))*4294967296.0 ) * 0.015);

    /* UnitDelay: '<S3>/Unit Delay1' */
    rty_State[0] = DZ_DSMC_DW.UnitDelay1_DSTATE[0];

    /* Sum: '<Root>/Minus' */
    sk = rty_State[0] - rtu_Ref[0];

    /* MATLAB Function: '<Root>/MATLAB Function5' */
    rtb_uk_tmp = DZ_DSMC_rtP.MATLABFunction5_C[0] * sk;

    /* Sum: '<Root>/Minus' */
    rtb_Minus_idx_0 = sk;

    /* UnitDelay: '<S3>/Unit Delay1' */
    rty_State[1] = DZ_DSMC_DW.UnitDelay1_DSTATE[1];

    /* Sum: '<Root>/Minus' */
    sk = rty_State[1] - rtu_Ref[1];

    /* MATLAB Function: '<Root>/MATLAB Function5' */
    rtb_uk_tmp += DZ_DSMC_rtP.MATLABFunction5_C[1] * sk;
    if (DZ_DSMC_DW.k < DZ_DSMC_rtP.MATLABFunction5_n) {
      uint8_T tmp;
      udk = std::ceil(static_cast<real32_T>(rt_remd_snf(rtb_DigitalClock,
        static_cast<real_T>(DZ_DSMC_rtP.MATLABFunction5_Ts))));
      if (udk < 256.0F) {
        if (udk >= 0.0F) {
          tmp = static_cast<uint8_T>(udk);
        } else {
          tmp = 0U;
        }
      } else {
        tmp = MAX_uint8_T;
      }

      if (tmp == 0) {
        rtb_DigitalClock = std::ceil(rtb_DigitalClock);
        if (rtb_DigitalClock < 256.0) {
          if (rtb_DigitalClock >= 0.0) {
            tmp = static_cast<uint8_T>(rtb_DigitalClock);
          } else {
            tmp = 0U;
          }
        } else {
          tmp = MAX_uint8_T;
        }

        if (tmp != 0) {
          DZ_DSMC_DW.k++;
        }
      }
    }

    udk = 0.0F;
    for (i = 0; i < static_cast<int32_T>(DZ_DSMC_DW.k); i++) {
      real_T y;
      if (static_cast<real_T>(i) + 1.0 > DZ_DSMC_DW.k) {
        y = (rtNaN);
      } else {
        rtb_DigitalClock = static_cast<real_T>(i) + 1.0;
        if (static_cast<boolean_T>(static_cast<boolean_T>(std::isinf
              (DZ_DSMC_DW.k) ^ 1) & static_cast<boolean_T>(std::isnan
              (DZ_DSMC_DW.k) ^ 1))) {
          if (static_cast<real_T>(i) + 1.0 > DZ_DSMC_DW.k / 2.0) {
            rtb_DigitalClock = DZ_DSMC_DW.k - (static_cast<real_T>(i) + 1.0);
          }

          if (rtb_DigitalClock > 1000.0) {
            y = (rtInf);
          } else {
            real_T nmk;
            y = 1.0;
            nmk = DZ_DSMC_DW.k - rtb_DigitalClock;
            for (int32_T j{0}; j < static_cast<int32_T>(rtb_DigitalClock); j++)
            {
              y *= ((static_cast<real_T>(j) + 1.0) + nmk) / (static_cast<real_T>
                (j) + 1.0);
            }

            y = std::round(y);
          }
        } else {
          y = (rtNaN);
        }
      }

      udk -= static_cast<real32_T>(rt_powd_snf(-1.0, static_cast<real_T>(i) +
        1.0) * y) * rtb_TappedDelay[i + 1];
    }

    Lamk_tmp = std::abs(rtb_uk_tmp);
    Lamk = (1.0F - DZ_DSMC_rtP.MATLABFunction5_del) * std::exp
      (-DZ_DSMC_rtP.MATLABFunction5_vphi * rt_powf_snf(Lamk_tmp,
        static_cast<real32_T>(DZ_DSMC_rtP.MATLABFunction5_gamm))) +
      DZ_DSMC_rtP.MATLABFunction5_del;
    if (rtb_uk_tmp > DZ_DSMC_rtP.MATLABFunction5_eta) {
      i = 1;
    } else if (Lamk_tmp <= DZ_DSMC_rtP.MATLABFunction5_eta) {
      i = 0;
    } else {
      i = -1;
    }

    rtb_uk_tmp *= (1.0F - DZ_DSMC_rtP.MATLABFunction5_qT) * Lamk;
    Lamk_tmp = DZ_DSMC_rtP.MATLABFunction5_xiT / Lamk * static_cast<real32_T>(i);
    Lamk = (((((DZ_DSMC_rtP.MATLABFunction5_C[0] *
                DZ_DSMC_rtP.MATLABFunction5_Phi[0] +
                DZ_DSMC_rtP.MATLABFunction5_C[1] *
                DZ_DSMC_rtP.MATLABFunction5_Phi[1]) * rtb_Minus_idx_0 +
               (DZ_DSMC_rtP.MATLABFunction5_C[0] *
                DZ_DSMC_rtP.MATLABFunction5_Phi[2] +
                DZ_DSMC_rtP.MATLABFunction5_C[1] *
                DZ_DSMC_rtP.MATLABFunction5_Phi[3]) * sk) - rtb_uk_tmp) +
             Lamk_tmp) + udk) / -(DZ_DSMC_rtP.MATLABFunction5_C[0] *
      DZ_DSMC_rtP.MATLABFunction5_Gam[0] + DZ_DSMC_rtP.MATLABFunction5_C[1] *
      DZ_DSMC_rtP.MATLABFunction5_Gam[1]);

    /* Sum: '<Root>/Add' incorporates:
     *  Gain: '<Root>/C*Gamma'
     *  Gain: '<Root>/C*Phi'
     *  MATLAB Function: '<Root>/MATLAB Function5'
     */
    sk = (((rtb_uk_tmp - Lamk_tmp) + (rtb_TappedDelay[0] - udk)) -
          (DZ_DSMC_rtP.CPhi_Gain[0] * rtb_Minus_idx_0 + DZ_DSMC_rtP.CPhi_Gain[1]
           * sk)) - DZ_DSMC_rtP.CGamma_Gain * Lamk;

    /* Gain: '<S3>/Gain3' incorporates:
     *  DataTypeConversion: '<S3>/Data Type Conversion'
     *  Gain: '<S3>/Gain2'
     *  Sum: '<Root>/Add2'
     */
    DZ_DSMC_B.Gain3 = static_cast<real32_T>(static_cast<int32_T>((*rtu_Dis +
      Lamk) * DZ_DSMC_rtP.Gain2_Gain)) * DZ_DSMC_rtP.Gain3_Gain;
  }

  /* ModelReference generated from: '<S3>/Model' */
  if (rtmIsSampleHit(getRTM(), 1, 0) || rtmIsSampleHit(getRTM(), 2, 0) ||
      rtmIsSampleHit(getRTM(), 3, 0) || rtmIsSampleHit(getRTM(), 4, 0)) {
    ModelMDLOBJ1.step(&DZ_DSMC_B.Gain3, &DZ_DSMC_B.Angle, &DZ_DSMC_B.Speed,
                      &DZ_DSMC_B.Current, &DZ_DSMC_B.Angle_g, &DZ_DSMC_B.Speed_e,
                      &DZ_DSMC_B.Torque);
  }

  /* RateTransition: '<S3>/Rate Transition1' */
  if (rtmIsSampleHit(getRTM(), 2, 0) && rtmIsSampleHit(getRTM(), 4, 0)) {
    DZ_DSMC_DW.RateTransition1_Buffer[0] = DZ_DSMC_B.Angle;
    DZ_DSMC_DW.RateTransition1_Buffer[1] = DZ_DSMC_B.Speed;
  }

  if (rtmIsSampleHit(getRTM(), 4, 0)) {
    /* Update for UnitDelay: '<Root>/Unit Delay' */
    DZ_DSMC_DW.UnitDelay_DSTATE = sk;

    /* Update for S-Function (sfix_udelay): '<Root>/Tapped Delay' */
    for (i = 0; i < 9; i++) {
      DZ_DSMC_DW.TappedDelay_X[9 - i] = DZ_DSMC_DW.TappedDelay_X[8 - i];
    }

    DZ_DSMC_DW.TappedDelay_X[0] = DZ_DSMC_B.UnitDelay;

    /* End of Update for S-Function (sfix_udelay): '<Root>/Tapped Delay' */

    /* Update for UnitDelay: '<S3>/Unit Delay1' */
    DZ_DSMC_DW.UnitDelay1_DSTATE[0] = DZ_DSMC_DW.RateTransition1_Buffer[0];
    DZ_DSMC_DW.UnitDelay1_DSTATE[1] = DZ_DSMC_DW.RateTransition1_Buffer[1];
  }

  /* End of RateTransition: '<S3>/Rate Transition1' */
}

/* Termination for referenced model: 'DZ_DSMC' */
void DZ_DSMCModelClass::terminate(void)
{
  /* Terminate for ModelReference generated from: '<S3>/Model' */
  ModelMDLOBJ1.terminate();
}

/* Model initialize function */
void DZ_DSMCModelClass::initialize()
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* Model Initialize function for ModelReference Block: '<S3>/Model' */

  /* Set error status pointer for ModelReference Block: '<S3>/Model' */
  ModelMDLOBJ1.setErrorStatusPointer(rtmGetErrorStatusPointer((&DZ_DSMC_M)));
  ModelMDLOBJ1.initialize();
}

/* Constructor */
DZ_DSMCModelClass::DZ_DSMCModelClass() :
  DZ_DSMC_B(),
  DZ_DSMC_DW(),
  DZ_DSMC_M()
{
  /* Currently there is no constructor body generated.*/
}

/* Destructor */
DZ_DSMCModelClass::~DZ_DSMCModelClass()
{
  /* Currently there is no destructor body generated.*/
}

/* Real-Time Model get method */
RT_MODEL_DZ_DSMC_T * DZ_DSMCModelClass::getRTM()
{
  return (&DZ_DSMC_M);
}

/* member function to initialize Real-Time model */
void DZ_DSMCModelClass::initializeRTM(const rtTimingBridge *timingBridge, int_T
  mdlref_TID0, int_T mdlref_TID1, int_T mdlref_TID2, int_T mdlref_TID3, int_T
  mdlref_TID4)
{
  setupGlobalTimingEngine(timingBridge, mdlref_TID0, mdlref_TID1, mdlref_TID2,
    mdlref_TID3, mdlref_TID4);
  ModelMDLOBJ1.initializeRTM((&DZ_DSMC_M)->timingBridge, mdlref_TID1,
    mdlref_TID2, mdlref_TID3, mdlref_TID4);
}

/* Private member function to set up the global timing engine */
void DZ_DSMCModelClass::setupGlobalTimingEngine(const rtTimingBridge
  *timingBridge, int_T mdlref_TID0, int_T mdlref_TID1, int_T mdlref_TID2, int_T
  mdlref_TID3, int_T mdlref_TID4)
{
  (&DZ_DSMC_M)->Timing.mdlref_GlobalTID[0] = mdlref_TID0;
  (&DZ_DSMC_M)->Timing.mdlref_GlobalTID[1] = mdlref_TID1;
  (&DZ_DSMC_M)->Timing.mdlref_GlobalTID[2] = mdlref_TID2;
  (&DZ_DSMC_M)->Timing.mdlref_GlobalTID[3] = mdlref_TID3;
  (&DZ_DSMC_M)->Timing.mdlref_GlobalTID[4] = mdlref_TID4;
  (&DZ_DSMC_M)->timingBridge = timingBridge;
}

/* member function to setup error status pointer */
void DZ_DSMCModelClass::setErrorStatusPointer(const char_T **rt_errorStatus)
{
  rtmSetErrorStatusPointer((&DZ_DSMC_M), rt_errorStatus);
}
