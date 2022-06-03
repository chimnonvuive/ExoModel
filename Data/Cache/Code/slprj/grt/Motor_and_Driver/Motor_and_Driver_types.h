/*
 * Motor_and_Driver_types.h
 *
 * Code generation for model "Motor_and_Driver".
 *
 * Model version              : 4.67
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Thu May 19 17:44:53 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: AMD->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Motor_and_Driver_types_h_
#define RTW_HEADER_Motor_and_Driver_types_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "multiword_types.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_RespSignal_
#define DEFINED_TYPEDEF_FOR_RespSignal_

struct RespSignal
{
  real32_T Angle;
  real32_T Speed;
  real32_T Torque;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_motorInfo_
#define DEFINED_TYPEDEF_FOR_motorInfo_

struct motorInfo
{
  real32_T Angle;
  real32_T Speed;
  real32_T Current;
};

#endif

/* Parameters (default storage) */
typedef struct P_Motor_and_Driver_T_ P_Motor_and_Driver_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_Motor_and_Driver_T RT_MODEL_Motor_and_Driver_T;

#endif                                /* RTW_HEADER_Motor_and_Driver_types_h_ */
