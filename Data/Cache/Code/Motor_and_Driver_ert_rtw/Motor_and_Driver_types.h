/*
 * File: Motor_and_Driver_types.h
 *
 * Code generated for Simulink model 'Motor_and_Driver'.
 *
 * Model version                  : 4.59
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Fri Apr 15 17:20:30 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Motor_and_Driver_types_h_
#define RTW_HEADER_Motor_and_Driver_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_RespSignal_
#define DEFINED_TYPEDEF_FOR_RespSignal_

typedef struct {
  real32_T Angle;
  real32_T Speed;
  real32_T Torque;
} RespSignal;

#endif

#ifndef DEFINED_TYPEDEF_FOR_motorInfo_
#define DEFINED_TYPEDEF_FOR_motorInfo_

typedef struct {
  real32_T Angle;
  real32_T Speed;
  real32_T Current;
} motorInfo;

#endif

/* Parameters (default storage) */
typedef struct P_Motor_and_Driver_T_ P_Motor_and_Driver_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_Motor_and_Driver_T RT_MODEL_Motor_and_Driver_T;

#endif                                /* RTW_HEADER_Motor_and_Driver_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
