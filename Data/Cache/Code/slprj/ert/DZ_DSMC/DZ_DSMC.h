/*
 * File: DZ_DSMC.h
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

#ifndef RTW_HEADER_DZ_DSMC_h_
#define RTW_HEADER_DZ_DSMC_h_
#include <math.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef DZ_DSMC_COMMON_INCLUDES_
#define DZ_DSMC_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* DZ_DSMC_COMMON_INCLUDES_ */

#include "DZ_DSMC_types.h"

/* Shared type includes */
#include "model_reference_types.h"
#include "MW_target_hardware_resources.h"

/* Block signals for model 'DZ_DSMC' */
typedef struct {
  real32_T TappedDelay[11];            /* '<Root>/Tapped Delay' */
  real32_T UnitDelay;                  /* '<Root>/Unit Delay' */
} B_DZ_DSMC_c_T;

/* Block states (default storage) for model 'DZ_DSMC' */
typedef struct {
  real_T k;                            /* '<Root>/MATLAB Function5' */
  real32_T UnitDelay_DSTATE;           /* '<Root>/Unit Delay' */
  real32_T TappedDelay_X[10];          /* '<Root>/Tapped Delay' */
  real32_T DiscreteStateSpace_DSTATE[2];/* '<S3>/Discrete State-Space' */
} DW_DZ_DSMC_f_T;

/* Parameters (default storage) */
struct P_DZ_DSMC_T_ {
  real32_T MATLABFunction5_C[2];       /* Mask Parameter: MATLABFunction5_C
                                        * Referenced by: '<Root>/MATLAB Function5'
                                        */
  real32_T MATLABFunction5_Gam[2];     /* Mask Parameter: MATLABFunction5_Gam
                                        * Referenced by: '<Root>/MATLAB Function5'
                                        */
  real32_T VariantSubsystem2_Gam[2];   /* Mask Parameter: VariantSubsystem2_Gam
                                        * Referenced by: '<S3>/Discrete State-Space'
                                        */
  real32_T MATLABFunction5_Phi[4];     /* Mask Parameter: MATLABFunction5_Phi
                                        * Referenced by: '<Root>/MATLAB Function5'
                                        */
  real32_T VariantSubsystem2_Phi[4];   /* Mask Parameter: VariantSubsystem2_Phi
                                        * Referenced by: '<S3>/Discrete State-Space'
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
  real32_T DiscreteStateSpace_C[4];  /* Computed Parameter: DiscreteStateSpace_C
                                      * Referenced by: '<S3>/Discrete State-Space'
                                      */
  real32_T DiscreteStateSpace_D[2];  /* Computed Parameter: DiscreteStateSpace_D
                                      * Referenced by: '<S3>/Discrete State-Space'
                                      */
  real32_T DiscreteStateSpace_InitialCondi;
                          /* Computed Parameter: DiscreteStateSpace_InitialCondi
                           * Referenced by: '<S3>/Discrete State-Space'
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
  const char_T **errorStatus;
  const rtTimingBridge *timingBridge;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
  } DataMapInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    int_T mdlref_GlobalTID[1];
  } Timing;
};

typedef struct {
  B_DZ_DSMC_c_T rtb;
  DW_DZ_DSMC_f_T rtdw;
  RT_MODEL_DZ_DSMC_T rtm;
} MdlrefDW_DZ_DSMC_T;

/* Model reference registration function */
extern void DZ_DSMC_initialize(const char_T **rt_errorStatus, const
  rtTimingBridge *timingBridge, int_T mdlref_TID0, RT_MODEL_DZ_DSMC_T *const
  DZ_DSMC_M, B_DZ_DSMC_c_T *localB, DW_DZ_DSMC_f_T *localDW,
  rtwCAPI_ModelMappingInfo *rt_ParentMMI, const char_T *rt_ChildPath, int_T
  rt_ChildMMIIdx, int_T rt_CSTATEIdx);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  DZ_DSMC_GetCAPIStaticMap(void);
extern void DZ_DSMC_Init(DW_DZ_DSMC_f_T *localDW);
extern void DZ_DSMC(RT_MODEL_DZ_DSMC_T * const DZ_DSMC_M, const real32_T
                    rtu_Ref[2], const real32_T *rtu_Dis, real32_T rty_State[2],
                    B_DZ_DSMC_c_T *localB, DW_DZ_DSMC_f_T *localDW);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant' : Unused code path elimination
 * Block '<Root>/Discrete-Time Integrator' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
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
 * '<S3>'   : 'DZ_DSMC/Variant Subsystem2/Mathematical model'
 */
#endif                                 /* RTW_HEADER_DZ_DSMC_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
