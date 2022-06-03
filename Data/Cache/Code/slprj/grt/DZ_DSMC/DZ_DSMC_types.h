/*
 * DZ_DSMC_types.h
 *
 * Code generation for model "DZ_DSMC".
 *
 * Model version              : 4.93
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Thu May 19 17:44:59 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: AMD->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_DZ_DSMC_types_h_
#define RTW_HEADER_DZ_DSMC_types_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "multiword_types.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_motorInfo_
#define DEFINED_TYPEDEF_FOR_motorInfo_

struct motorInfo
{
  real32_T Angle;
  real32_T Speed;
  real32_T Current;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_RespSignal_
#define DEFINED_TYPEDEF_FOR_RespSignal_

struct RespSignal
{
  real32_T Angle;
  real32_T Speed;
  real32_T Torque;
};

#endif

/* Parameters (default storage) */
typedef struct P_DZ_DSMC_T_ P_DZ_DSMC_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_DZ_DSMC_T RT_MODEL_DZ_DSMC_T;

#endif                                 /* RTW_HEADER_DZ_DSMC_types_h_ */
