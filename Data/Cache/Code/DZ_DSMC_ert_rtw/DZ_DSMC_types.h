/*
 * File: DZ_DSMC_types.h
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

#ifndef RTW_HEADER_DZ_DSMC_types_h_
#define RTW_HEADER_DZ_DSMC_types_h_
#include "rtwtypes.h"
#include "model_reference_types.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_motorInfo_
#define DEFINED_TYPEDEF_FOR_motorInfo_

typedef struct {
  real32_T Angle;
  real32_T Speed;
  real32_T Current;
} motorInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_RespSignal_
#define DEFINED_TYPEDEF_FOR_RespSignal_

typedef struct {
  real32_T Angle;
  real32_T Speed;
  real32_T Torque;
} RespSignal;

#endif

/* Parameters (default storage) */
typedef struct P_DZ_DSMC_T_ P_DZ_DSMC_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_DZ_DSMC_T RT_MODEL_DZ_DSMC_T;

#endif                                 /* RTW_HEADER_DZ_DSMC_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
