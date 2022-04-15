/*
 * File: DZ_DSMC_data.c
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

/* Model block global parameters (default storage) */
real_T rtP_x520886_ICont = 15.0;       /* Variable: x520886_ICont
                                        * Referenced by: '<S3>/Model'
                                        */
real_T rtP_x607325_RotIner = 5060.0;   /* Variable: x607325_RotIner
                                        * Referenced by: '<S3>/Model'
                                        */
real_T rtP_x607325_RotOmgMax = 2100.0; /* Variable: x607325_RotOmgMax
                                        * Referenced by: '<S3>/Model'
                                        */
real_T rtP_x607325_Torq = 1010.0;      /* Variable: x607325_Torq
                                        * Referenced by: '<S3>/Model'
                                        */
real_T rtP_x607325_TorqConst = 80.7;   /* Variable: x607325_TorqConst
                                        * Referenced by: '<S3>/Model'
                                        */
real_T rtP_x607325_VNom = 18.0;        /* Variable: x607325_VNom
                                        * Referenced by: '<S3>/Model'
                                        */
real32_T rtP_x28_000006_reduction = 100.0F;/* Variable: x28_000006_reduction
                                            * Referenced by: '<S3>/Model'
                                            */

/* Block parameters (default storage) */
P_DZ_DSMC_T DZ_DSMC_P = {
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

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
