/*
 * File: DZ_DSMC.c
 *
 * Code generated for Simulink model 'DZ_DSMC'.
 *
 * Model version                  : 4.83
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Fri Apr 15 17:33:53 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. MISRA C:2012 guidelines
 * Validation result: Not run
 */

#include "DZ_DSMC.h"
#include "DZ_DSMC_private.h"
#include "rt_remd.h"
#include "rt_roundd.h"

static void rate_scheduler(RT_MODEL_DZ_DSMC_T *const DZ_DSMC_M);

/*
 *         This function updates active task flag for each subrate.
 *         The function is called at model base rate, hence the
 *         generated code self-manages all its subrates.
 */
static void rate_scheduler(RT_MODEL_DZ_DSMC_T *const DZ_DSMC_M)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (DZ_DSMC_M->Timing.TaskCounters.TID[1])++;
  if ((DZ_DSMC_M->Timing.TaskCounters.TID[1]) > 1) {/* Sample time: [2.0E-5s, 0.0s] */
    DZ_DSMC_M->Timing.TaskCounters.TID[1] = 0;
  }

  (DZ_DSMC_M->Timing.TaskCounters.TID[2])++;
  if ((DZ_DSMC_M->Timing.TaskCounters.TID[2]) > 5) {/* Sample time: [6.0E-5s, 0.0s] */
    DZ_DSMC_M->Timing.TaskCounters.TID[2] = 0;
  }

  (DZ_DSMC_M->Timing.TaskCounters.TID[3])++;
  if ((DZ_DSMC_M->Timing.TaskCounters.TID[3]) > 39) {/* Sample time: [0.0004s, 0.0s] */
    DZ_DSMC_M->Timing.TaskCounters.TID[3] = 0;
  }

  (DZ_DSMC_M->Timing.TaskCounters.TID[4])++;
  if ((DZ_DSMC_M->Timing.TaskCounters.TID[4]) > 1499) {/* Sample time: [0.015s, 0.0s] */
    DZ_DSMC_M->Timing.TaskCounters.TID[4] = 0;
  }
}

/* Model step function */
void DZ_DSMC_step(RT_MODEL_DZ_DSMC_T *const DZ_DSMC_M)
{
  DW_DZ_DSMC_T *DZ_DSMC_DW = DZ_DSMC_M->dwork;
  ExtU_DZ_DSMC_T *DZ_DSMC_U = (ExtU_DZ_DSMC_T *) DZ_DSMC_M->inputs;
  ExtY_DZ_DSMC_T *DZ_DSMC_Y = (ExtY_DZ_DSMC_T *) DZ_DSMC_M->outputs;
  int32_T i;
  int32_T j;
  real32_T rtb_TappedDelay[11];
  real32_T sk;
  if (DZ_DSMC_M->Timing.TaskCounters.TID[4] == 0) {
    real_T rtb_DigitalClock;
    real32_T Lamk;
    real32_T rtb_Minus_idx_0;
    real32_T rtb_uk;
    real32_T rtb_uk_tmp;
    real32_T udk;

    /* UnitDelay: '<Root>/Unit Delay' */
    DZ_DSMC_DW->UnitDelay = DZ_DSMC_DW->UnitDelay_DSTATE;

    /* S-Function (sfix_udelay): '<Root>/Tapped Delay' */
    rtb_TappedDelay[0] = DZ_DSMC_DW->UnitDelay;
    for (i = 0; i < 10; i++) {
      rtb_TappedDelay[i + 1] = DZ_DSMC_DW->TappedDelay_X[i];
    }

    /* End of S-Function (sfix_udelay): '<Root>/Tapped Delay' */

    /* DigitalClock: '<Root>/Digital Clock' */
    rtb_DigitalClock = (((DZ_DSMC_M->Timing.clockTick4+
                          DZ_DSMC_M->Timing.clockTickH4* 4294967296.0)) * 0.015);

    /* Outport: '<Root>/State' incorporates:
     *  UnitDelay: '<S3>/Unit Delay1'
     */
    /*  calcualte switching function */
    DZ_DSMC_Y->State[0] = DZ_DSMC_DW->UnitDelay1_DSTATE[0];

    /* Sum: '<Root>/Minus' incorporates:
     *  Inport: '<Root>/Ref'
     *  UnitDelay: '<S3>/Unit Delay1'
     */
    sk = DZ_DSMC_DW->UnitDelay1_DSTATE[0] - DZ_DSMC_U->Xdk[0];

    /* MATLAB Function: '<Root>/MATLAB Function5' */
    rtb_uk_tmp = DZ_DSMC_P.MATLABFunction5_C[0] * sk;

    /* Sum: '<Root>/Minus' */
    rtb_Minus_idx_0 = sk;

    /* Outport: '<Root>/State' incorporates:
     *  UnitDelay: '<S3>/Unit Delay1'
     */
    DZ_DSMC_Y->State[1] = DZ_DSMC_DW->UnitDelay1_DSTATE[1];

    /* Sum: '<Root>/Minus' incorporates:
     *  Inport: '<Root>/Ref'
     *  UnitDelay: '<S3>/Unit Delay1'
     */
    sk = DZ_DSMC_DW->UnitDelay1_DSTATE[1] - DZ_DSMC_U->Xdk[1];

    /* MATLAB Function: '<Root>/MATLAB Function5' */
    rtb_uk_tmp += DZ_DSMC_P.MATLABFunction5_C[1] * sk;

    /*  calculate finite number function */
    if (DZ_DSMC_DW->k < ((real_T)DZ_DSMC_P.MATLABFunction5_n)) {
      uint8_T tmp;
      rtb_uk = ceilf((real32_T)rt_remd(rtb_DigitalClock, (real_T)
        DZ_DSMC_P.MATLABFunction5_Ts));
      if (rtb_uk < 256.0F) {
        if (rtb_uk >= 0.0F) {
          tmp = (uint8_T)rtb_uk;
        } else {
          tmp = 0U;
        }
      } else {
        tmp = MAX_uint8_T;
      }

      if (((int32_T)tmp) == 0) {
        rtb_DigitalClock = ceil(rtb_DigitalClock);
        if (rtb_DigitalClock < 256.0) {
          if (rtb_DigitalClock >= 0.0) {
            tmp = (uint8_T)rtb_DigitalClock;
          } else {
            tmp = 0U;
          }
        } else {
          tmp = MAX_uint8_T;
        }

        if (((int32_T)tmp) != 0) {
          DZ_DSMC_DW->k++;
        }
      }
    }

    /*  calculate ud(k) - high-order compensator */
    udk = 0.0F;
    for (i = 0; i < ((int32_T)DZ_DSMC_DW->k); i++) {
      real_T y;
      if ((((real_T)i) + 1.0) > DZ_DSMC_DW->k) {
        y = 0.0;
      } else {
        rtb_DigitalClock = ((real_T)i) + 1.0;
        if ((((real_T)i) + 1.0) > (DZ_DSMC_DW->k / 2.0)) {
          rtb_DigitalClock = DZ_DSMC_DW->k - (((real_T)i) + 1.0);
        }

        if (rtb_DigitalClock > 1000.0) {
          y = 1.7976931348623157E+308;
        } else {
          real_T nmk;
          y = 1.0;
          nmk = DZ_DSMC_DW->k - rtb_DigitalClock;
          for (j = 0; j < ((int32_T)rtb_DigitalClock); j++) {
            y *= ((((real_T)j) + 1.0) + nmk) / (((real_T)j) + 1.0);
          }

          y = rt_roundd(y);
        }
      }

      udk -= ((real32_T)((real_T)(pow(-1.0, ((real_T)i) + 1.0) * y))) *
        rtb_TappedDelay[i + 1];
    }

    /*  calculate Lambda(k) - exponential function */
    rtb_uk = fabsf(rtb_uk_tmp);
    Lamk = ((1.0F - DZ_DSMC_P.MATLABFunction5_del) * expf
            ((-DZ_DSMC_P.MATLABFunction5_vphi) * powf(rtb_uk, (real32_T)
              DZ_DSMC_P.MATLABFunction5_gamm))) + DZ_DSMC_P.MATLABFunction5_del;

    /*  calculate rho[s(k)] - dead zone function */
    if (rtb_uk_tmp > DZ_DSMC_P.MATLABFunction5_eta) {
      i = 1;
    } else if (rtb_uk <= DZ_DSMC_P.MATLABFunction5_eta) {
      i = 0;
    } else {
      /*  sk<-eta */
      i = -1;
    }

    /*  calcualte high-order difference function */
    /*  calculate one-step forward switching function */
    /*  calculate dead zone reaching law controller */
    rtb_uk_tmp *= (1.0F - DZ_DSMC_P.MATLABFunction5_qT) * Lamk;
    Lamk = (DZ_DSMC_P.MATLABFunction5_xiT / Lamk) * ((real32_T)i);
    rtb_uk = (((((((DZ_DSMC_P.MATLABFunction5_C[0] *
                    DZ_DSMC_P.MATLABFunction5_Phi[0]) +
                   (DZ_DSMC_P.MATLABFunction5_C[1] *
                    DZ_DSMC_P.MATLABFunction5_Phi[1])) * rtb_Minus_idx_0) +
                 (((DZ_DSMC_P.MATLABFunction5_C[0] *
                    DZ_DSMC_P.MATLABFunction5_Phi[2]) +
                   (DZ_DSMC_P.MATLABFunction5_C[1] *
                    DZ_DSMC_P.MATLABFunction5_Phi[3])) * sk)) - rtb_uk_tmp) +
               Lamk) + udk) / (-((DZ_DSMC_P.MATLABFunction5_C[0] *
      DZ_DSMC_P.MATLABFunction5_Gam[0]) + (DZ_DSMC_P.MATLABFunction5_C[1] *
      DZ_DSMC_P.MATLABFunction5_Gam[1])));

    /* Sum: '<Root>/Add' incorporates:
     *  Gain: '<Root>/C*Gamma'
     *  Gain: '<Root>/C*Phi'
     *  MATLAB Function: '<Root>/MATLAB Function5'
     */
    sk = (((rtb_uk_tmp - Lamk) + (rtb_TappedDelay[0] - udk)) -
          ((DZ_DSMC_P.CPhi_Gain[0] * rtb_Minus_idx_0) + (DZ_DSMC_P.CPhi_Gain[1] *
            sk))) - (DZ_DSMC_P.CGamma_Gain * rtb_uk);

    /* Gain: '<S3>/Gain3' incorporates:
     *  DataTypeConversion: '<S3>/Data Type Conversion'
     *  Gain: '<S3>/Gain2'
     *  Inport: '<Root>/Dis'
     *  Sum: '<Root>/Add2'
     */
    DZ_DSMC_DW->Gain3 = ((real32_T)((int32_T)((real32_T)((DZ_DSMC_U->dk + rtb_uk)
      * DZ_DSMC_P.Gain2_Gain)))) * DZ_DSMC_P.Gain3_Gain;
  }

  /* ModelReference generated from: '<S3>/Model' */
  if (DZ_DSMC_M->Timing.TaskCounters.TID[1] == 0 ||
      DZ_DSMC_M->Timing.TaskCounters.TID[2] == 0 ||
      DZ_DSMC_M->Timing.TaskCounters.TID[3] == 0 ||
      DZ_DSMC_M->Timing.TaskCounters.TID[4] == 0) {
    Motor_and_Driver(&(DZ_DSMC_DW->Model_InstanceData.rtm), &DZ_DSMC_DW->Gain3,
                     &DZ_DSMC_DW->Angle, &DZ_DSMC_DW->Speed,
                     &DZ_DSMC_DW->Current, &DZ_DSMC_DW->Angle_g,
                     &DZ_DSMC_DW->Speed_e, &DZ_DSMC_DW->Torque,
                     &(DZ_DSMC_DW->Model_InstanceData.rtdw));
  }

  /* RateTransition: '<S3>/Rate Transition1' */
  if (DZ_DSMC_M->Timing.TaskCounters.TID[2] == 0) {
    if (DZ_DSMC_M->Timing.TaskCounters.TID[4] == 0) {
      DZ_DSMC_DW->RateTransition1_Buffer[0] = DZ_DSMC_DW->Angle;
      DZ_DSMC_DW->RateTransition1_Buffer[1] = DZ_DSMC_DW->Speed;
    }
  }

  if (DZ_DSMC_M->Timing.TaskCounters.TID[4] == 0) {
    /* Update for UnitDelay: '<Root>/Unit Delay' */
    DZ_DSMC_DW->UnitDelay_DSTATE = sk;

    /* Update for S-Function (sfix_udelay): '<Root>/Tapped Delay' */
    for (i = 0; i < 9; i++) {
      DZ_DSMC_DW->TappedDelay_X[9 - i] = DZ_DSMC_DW->TappedDelay_X[8 - i];
    }

    DZ_DSMC_DW->TappedDelay_X[0] = DZ_DSMC_DW->UnitDelay;

    /* End of Update for S-Function (sfix_udelay): '<Root>/Tapped Delay' */

    /* Update for UnitDelay: '<S3>/Unit Delay1' */
    DZ_DSMC_DW->UnitDelay1_DSTATE[0] = DZ_DSMC_DW->RateTransition1_Buffer[0];
    DZ_DSMC_DW->UnitDelay1_DSTATE[1] = DZ_DSMC_DW->RateTransition1_Buffer[1];
  }

  /* End of RateTransition: '<S3>/Rate Transition1' */
  if (DZ_DSMC_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update absolute timer for sample time: [2.0E-5s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 2.0E-5, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    DZ_DSMC_M->Timing.clockTick1++;
    if (!DZ_DSMC_M->Timing.clockTick1) {
      DZ_DSMC_M->Timing.clockTickH1++;
    }
  }

  if (DZ_DSMC_M->Timing.TaskCounters.TID[2] == 0) {
    /* Update absolute timer for sample time: [6.0E-5s, 0.0s] */
    /* The "clockTick2" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 6.0E-5, which is the step size
     * of the task. Size of "clockTick2" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick2 and the high bits
     * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
     */
    DZ_DSMC_M->Timing.clockTick2++;
    if (!DZ_DSMC_M->Timing.clockTick2) {
      DZ_DSMC_M->Timing.clockTickH2++;
    }
  }

  if (DZ_DSMC_M->Timing.TaskCounters.TID[3] == 0) {
    /* Update absolute timer for sample time: [0.0004s, 0.0s] */
    /* The "clockTick3" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.0004, which is the step size
     * of the task. Size of "clockTick3" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick3 and the high bits
     * Timing.clockTickH3. When the low bit overflows to 0, the high bits increment.
     */
    DZ_DSMC_M->Timing.clockTick3++;
    if (!DZ_DSMC_M->Timing.clockTick3) {
      DZ_DSMC_M->Timing.clockTickH3++;
    }
  }

  if (DZ_DSMC_M->Timing.TaskCounters.TID[4] == 0) {
    /* Update absolute timer for sample time: [0.015s, 0.0s] */
    /* The "clockTick4" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.015, which is the step size
     * of the task. Size of "clockTick4" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick4 and the high bits
     * Timing.clockTickH4. When the low bit overflows to 0, the high bits increment.
     */
    DZ_DSMC_M->Timing.clockTick4++;
    if (!DZ_DSMC_M->Timing.clockTick4) {
      DZ_DSMC_M->Timing.clockTickH4++;
    }
  }

  rate_scheduler(DZ_DSMC_M);
}

/* Model initialize function */
void DZ_DSMC_initialize(RT_MODEL_DZ_DSMC_T *const DZ_DSMC_M)
{
  DW_DZ_DSMC_T *DZ_DSMC_DW = DZ_DSMC_M->dwork;

  {
    int32_T i;

    /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
    DZ_DSMC_DW->UnitDelay_DSTATE = DZ_DSMC_P.UnitDelay_InitialCondition;

    /* InitializeConditions for S-Function (sfix_udelay): '<Root>/Tapped Delay' */
    for (i = 0; i < 10; i++) {
      DZ_DSMC_DW->TappedDelay_X[i] = DZ_DSMC_P.TappedDelay_vinit;
    }

    /* End of InitializeConditions for S-Function (sfix_udelay): '<Root>/Tapped Delay' */

    /* InitializeConditions for UnitDelay: '<S3>/Unit Delay1' */
    DZ_DSMC_DW->UnitDelay1_DSTATE[0] = DZ_DSMC_P.UnitDelay1_InitialCondition;
    DZ_DSMC_DW->UnitDelay1_DSTATE[1] = DZ_DSMC_P.UnitDelay1_InitialCondition;

    /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function5' */
    DZ_DSMC_DW->k = 0.0;

    /* SystemInitialize for ModelReference generated from: '<S3>/Model' */
    Motor_and_Driver_Init(&(DZ_DSMC_DW->Model_InstanceData.rtdw));
  }
}

/* Model terminate function */
void DZ_DSMC_terminate(RT_MODEL_DZ_DSMC_T * DZ_DSMC_M)
{
  /* model code */
  rt_FREE(DZ_DSMC_M->inputs);
  rt_FREE(DZ_DSMC_M->outputs);
  rt_FREE(DZ_DSMC_M->dwork);
  rt_FREE(DZ_DSMC_M);
}

/* Model data allocation function */
RT_MODEL_DZ_DSMC_T *DZ_DSMC(void)
{
  RT_MODEL_DZ_DSMC_T *DZ_DSMC_M;
  DZ_DSMC_M = (RT_MODEL_DZ_DSMC_T *) malloc(sizeof(RT_MODEL_DZ_DSMC_T));
  if (DZ_DSMC_M == (NULL)) {
    return (NULL);
  }

  (void) memset((char *)DZ_DSMC_M, 0,
                sizeof(RT_MODEL_DZ_DSMC_T));

  /* states (dwork) */
  {
    DW_DZ_DSMC_T *dwork = (DW_DZ_DSMC_T *) malloc(sizeof(DW_DZ_DSMC_T));
    rt_VALIDATE_MEMORY(DZ_DSMC_M,dwork);
    DZ_DSMC_M->dwork = (dwork);
  }

  /* external inputs */
  {
    ExtU_DZ_DSMC_T *DZ_DSMC_U = (ExtU_DZ_DSMC_T *) malloc(sizeof(ExtU_DZ_DSMC_T));
    rt_VALIDATE_MEMORY(DZ_DSMC_M,DZ_DSMC_U);
    DZ_DSMC_M->inputs = (((ExtU_DZ_DSMC_T *) DZ_DSMC_U));
  }

  /* external outputs */
  {
    ExtY_DZ_DSMC_T *DZ_DSMC_Y = (ExtY_DZ_DSMC_T *) malloc(sizeof(ExtY_DZ_DSMC_T));
    rt_VALIDATE_MEMORY(DZ_DSMC_M,DZ_DSMC_Y);
    DZ_DSMC_M->outputs = (DZ_DSMC_Y);
  }

  {
    DW_DZ_DSMC_T *DZ_DSMC_DW = DZ_DSMC_M->dwork;
    ExtU_DZ_DSMC_T *DZ_DSMC_U = (ExtU_DZ_DSMC_T *) DZ_DSMC_M->inputs;
    ExtY_DZ_DSMC_T *DZ_DSMC_Y = (ExtY_DZ_DSMC_T *) DZ_DSMC_M->outputs;

    /* states (dwork) */
    (void) memset((void *)DZ_DSMC_DW, 0,
                  sizeof(DW_DZ_DSMC_T));

    /* external inputs */
    (void)memset(DZ_DSMC_U, 0, sizeof(ExtU_DZ_DSMC_T));

    /* external outputs */
    (void)memset(DZ_DSMC_Y, 0, sizeof(ExtY_DZ_DSMC_T));

    {
      static uint32_T *clockTickPtrs[5];
      static uint32_T *clockTickHPtrs[5];
      static uint32_T *taskCounterPtrs;
      DZ_DSMC_M->timingBridge.nTasks = 5;
      clockTickPtrs[0] = (NULL);
      clockTickHPtrs[0] = (NULL);
      clockTickPtrs[1] = &(DZ_DSMC_M->Timing.clockTick1);
      clockTickHPtrs[1] = &(DZ_DSMC_M->Timing.clockTickH1);
      clockTickPtrs[2] = &(DZ_DSMC_M->Timing.clockTick2);
      clockTickHPtrs[2] = &(DZ_DSMC_M->Timing.clockTickH2);
      clockTickPtrs[3] = &(DZ_DSMC_M->Timing.clockTick3);
      clockTickHPtrs[3] = &(DZ_DSMC_M->Timing.clockTickH3);
      clockTickPtrs[4] = &(DZ_DSMC_M->Timing.clockTick4);
      clockTickHPtrs[4] = &(DZ_DSMC_M->Timing.clockTickH4);
      DZ_DSMC_M->timingBridge.clockTick = clockTickPtrs;
      DZ_DSMC_M->timingBridge.clockTickH = clockTickHPtrs;
      taskCounterPtrs = &(DZ_DSMC_M->Timing.TaskCounters.TID[0]);
      DZ_DSMC_M->timingBridge.taskCounter = taskCounterPtrs;
    }

    /* Model Initialize function for ModelReference Block: '<S3>/Model' */
    Motor_and_Driver_initialize(&DZ_DSMC_M->timingBridge, 1, 2, 3, 4,
      &(DZ_DSMC_DW->Model_InstanceData.rtm));
  }

  return DZ_DSMC_M;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
