/*
 * File: DZ_DSMC.h
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

#ifndef RTW_HEADER_DZ_DSMC_h_
#define RTW_HEADER_DZ_DSMC_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef DZ_DSMC_COMMON_INCLUDES_
#define DZ_DSMC_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#endif                                 /* DZ_DSMC_COMMON_INCLUDES_ */

#include "DZ_DSMC_types.h"

/* Shared type includes */
#include "model_reference_types.h"

/* Child system includes */
#include "Motor_and_Driver.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetRootDWork
#define rtmGetRootDWork(rtm)           ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
#define rtmSetRootDWork(rtm, val)      ((rtm)->dwork = (val))
#endif

#ifndef rtmGetU
#define rtmGetU(rtm)                   ((rtm)->inputs)
#endif

#ifndef rtmSetU
#define rtmSetU(rtm, val)              ((rtm)->inputs = (val))
#endif

#ifndef rtmGetY
#define rtmGetY(rtm)                   ((rtm)->outputs)
#endif

#ifndef rtmSetY
#define rtmSetY(rtm, val)              ((rtm)->outputs = (val))
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  ((const char_T **)(&((rtm)->errorStatus)))
#endif

#define DZ_DSMC_M_TYPE                 RT_MODEL_DZ_DSMC_T

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  MdlrefDW_Motor_and_Driver_T Model_InstanceData;/* '<S3>/Model' */
  real_T k;                            /* '<Root>/MATLAB Function5' */
  real32_T TappedDelay_X[10];          /* '<Root>/Tapped Delay' */
  real32_T UnitDelay1_DSTATE[2];       /* '<S3>/Unit Delay1' */
  real32_T RateTransition1_Buffer[2];  /* '<S3>/Rate Transition1' */
  real32_T UnitDelay;                  /* '<Root>/Unit Delay' */
  real32_T Gain3;                      /* '<S3>/Gain3' */
  real32_T Angle;                      /* '<S3>/Model' */
  real32_T Speed;                      /* '<S3>/Model' */
  real32_T Current;                    /* '<S3>/Model' */
  real32_T Angle_g;                    /* '<S3>/Model' */
  real32_T Speed_e;                    /* '<S3>/Model' */
  real32_T Torque;                     /* '<S3>/Model' */
  real32_T UnitDelay_DSTATE;           /* '<Root>/Unit Delay' */
} DW_DZ_DSMC_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T Xdk[2];                     /* '<Root>/Ref' */
  real32_T dk;                         /* '<Root>/Dis' */
} ExtU_DZ_DSMC_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T State[2];                   /* '<Root>/State' */
} ExtY_DZ_DSMC_T;

/* Parameters (default storage) */
struct P_DZ_DSMC_T_ {
  real32_T MATLABFunction5_C[2];       /* Mask Parameter: MATLABFunction5_C
                                        * Referenced by: '<Root>/MATLAB Function5'
                                        */
  real32_T MATLABFunction5_Gam[2];     /* Mask Parameter: MATLABFunction5_Gam
                                        * Referenced by: '<Root>/MATLAB Function5'
                                        */
  real32_T MATLABFunction5_Phi[4];     /* Mask Parameter: MATLABFunction5_Phi
                                        * Referenced by: '<Root>/MATLAB Function5'
                                        */
  real32_T MATLABFunction5_Ts;         /* Mask Parameter: MATLABFunction5_Ts
                                        * Referenced by: '<Root>/MATLAB Function5'
                                        */
  real32_T MATLABFunction5_del;        /* Mask Parameter: MATLABFunction5_del
                                        * Referenced by: '<Root>/MATLAB Function5'
                                        */
  real32_T MATLABFunction5_eta;        /* Mask Parameter: MATLABFunction5_eta
                                        * Referenced by: '<Root>/MATLAB Function5'
                                        */
  real32_T MATLABFunction5_qT;         /* Mask Parameter: MATLABFunction5_qT
                                        * Referenced by: '<Root>/MATLAB Function5'
                                        */
  real32_T TappedDelay_vinit;          /* Mask Parameter: TappedDelay_vinit
                                        * Referenced by: '<Root>/Tapped Delay'
                                        */
  real32_T MATLABFunction5_vphi;       /* Mask Parameter: MATLABFunction5_vphi
                                        * Referenced by: '<Root>/MATLAB Function5'
                                        */
  real32_T MATLABFunction5_xiT;        /* Mask Parameter: MATLABFunction5_xiT
                                        * Referenced by: '<Root>/MATLAB Function5'
                                        */
  uint8_T MATLABFunction5_gamm;        /* Mask Parameter: MATLABFunction5_gamm
                                        * Referenced by: '<Root>/MATLAB Function5'
                                        */
  uint8_T MATLABFunction5_n;           /* Mask Parameter: MATLABFunction5_n
                                        * Referenced by: '<Root>/MATLAB Function5'
                                        */
  real32_T UnitDelay_InitialCondition;
                               /* Computed Parameter: UnitDelay_InitialCondition
                                * Referenced by: '<Root>/Unit Delay'
                                */
  real32_T UnitDelay1_InitialCondition;
                              /* Computed Parameter: UnitDelay1_InitialCondition
                               * Referenced by: '<S3>/Unit Delay1'
                               */
  real32_T CGamma_Gain;                /* Expression: single(C*Gam)
                                        * Referenced by: '<Root>/C*Gamma'
                                        */
  real32_T CPhi_Gain[2];               /* Expression: single(C*Phi)
                                        * Referenced by: '<Root>/C*Phi'
                                        */
  real32_T Gain2_Gain;                 /* Expression: single(30/pi)
                                        * Referenced by: '<S3>/Gain2'
                                        */
  real32_T Gain3_Gain;                 /* Expression: single(pi/30)
                                        * Referenced by: '<S3>/Gain3'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_DZ_DSMC_T {
  const char_T * volatile errorStatus;
  rtTimingBridge timingBridge;
  ExtU_DZ_DSMC_T *inputs;
  ExtY_DZ_DSMC_T *outputs;
  DW_DZ_DSMC_T *dwork;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick1;
    uint32_T clockTickH1;
    uint32_T clockTick2;
    uint32_T clockTickH2;
    uint32_T clockTick3;
    uint32_T clockTickH3;
    uint32_T clockTick4;
    uint32_T clockTickH4;
    struct {
      uint32_T TID[5];
    } TaskCounters;
  } Timing;
};

/* Block parameters (default storage) */
extern P_DZ_DSMC_T DZ_DSMC_P;

/* External data declarations for dependent source files */
extern const char *RT_MEMORY_ALLOCATION_ERROR;
extern P_DZ_DSMC_T DZ_DSMC_P;          /* parameters */

/* Model block global parameters (default storage) */
extern real_T rtP_x520886_ICont;       /* Variable: x520886_ICont
                                        * Referenced by: '<S3>/Model'
                                        */
extern real_T rtP_x607325_RotIner;     /* Variable: x607325_RotIner
                                        * Referenced by: '<S3>/Model'
                                        */
extern real_T rtP_x607325_RotOmgMax;   /* Variable: x607325_RotOmgMax
                                        * Referenced by: '<S3>/Model'
                                        */
extern real_T rtP_x607325_Torq;        /* Variable: x607325_Torq
                                        * Referenced by: '<S3>/Model'
                                        */
extern real_T rtP_x607325_TorqConst;   /* Variable: x607325_TorqConst
                                        * Referenced by: '<S3>/Model'
                                        */
extern real_T rtP_x607325_VNom;        /* Variable: x607325_VNom
                                        * Referenced by: '<S3>/Model'
                                        */
extern real32_T rtP_x28_000006_reduction;/* Variable: x28_000006_reduction
                                          * Referenced by: '<S3>/Model'
                                          */

/* Model entry point functions */
extern RT_MODEL_DZ_DSMC_T *DZ_DSMC(void);
extern void DZ_DSMC_initialize(RT_MODEL_DZ_DSMC_T *const DZ_DSMC_M);
extern void DZ_DSMC_step(RT_MODEL_DZ_DSMC_T *const DZ_DSMC_M);
extern void DZ_DSMC_terminate(RT_MODEL_DZ_DSMC_T * DZ_DSMC_M);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<S3>/Rate Transition' : Eliminated since input and output rates are identical
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'DZ_DSMC'
 * '<S1>'   : 'DZ_DSMC/MATLAB Function5'
 * '<S2>'   : 'DZ_DSMC/Variant Subsystem2'
 * '<S3>'   : 'DZ_DSMC/Variant Subsystem2/High-fidelity model'
 */
#endif                                 /* RTW_HEADER_DZ_DSMC_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
