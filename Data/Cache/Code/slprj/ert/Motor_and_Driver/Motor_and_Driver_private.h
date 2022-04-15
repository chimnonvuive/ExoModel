/*
 * File: Motor_and_Driver_private.h
 *
 * Code generated for Simulink model 'Motor_and_Driver'.
 *
 * Model version                  : 4.61
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Fri Apr 15 17:29:12 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Motor_and_Driver_private_h_
#define RTW_HEADER_Motor_and_Driver_private_h_
#include "rtwtypes.h"
#include "model_reference_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid)  ((rtm)->timingBridge->taskCounter[(rtm)->Timing.mdlref_GlobalTID[sti]] == 0)
#endif

/* Macros for accessing real-time model data structure */
#ifndef rtmGetClockTick0
#define rtmGetClockTick0(rtm)          ( *(((rtm)->timingBridge->clockTick[(rtm)->Timing.mdlref_GlobalTID[0]])) )
#endif

#ifndef rtmGetClockTick1
#define rtmGetClockTick1(rtm)          ( *(((rtm)->timingBridge->clockTick[(rtm)->Timing.mdlref_GlobalTID[1]])) )
#endif

#ifndef rtmGetClockTick2
#define rtmGetClockTick2(rtm)          ( *(((rtm)->timingBridge->clockTick[(rtm)->Timing.mdlref_GlobalTID[2]])) )
#endif

#ifndef rtmGetClockTick3
#define rtmGetClockTick3(rtm)          ( *(((rtm)->timingBridge->clockTick[(rtm)->Timing.mdlref_GlobalTID[3]])) )
#endif

#ifndef rtmGetClockTickH0
#define rtmGetClockTickH0(rtm)         ( *((rtm)->timingBridge->clockTickH[(rtm)->Timing.mdlref_GlobalTID[0]]) )
#endif

#ifndef rtmGetClockTickH1
#define rtmGetClockTickH1(rtm)         ( *((rtm)->timingBridge->clockTickH[(rtm)->Timing.mdlref_GlobalTID[1]]) )
#endif

#ifndef rtmGetClockTickH2
#define rtmGetClockTickH2(rtm)         ( *((rtm)->timingBridge->clockTickH[(rtm)->Timing.mdlref_GlobalTID[2]]) )
#endif

#ifndef rtmGetClockTickH3
#define rtmGetClockTickH3(rtm)         ( *((rtm)->timingBridge->clockTickH[(rtm)->Timing.mdlref_GlobalTID[3]]) )
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (*((rtm)->timingBridge->taskTime[0]))
#endif

extern P_Motor_and_Driver_T Motor_and_Driver_P;

#endif                              /* RTW_HEADER_Motor_and_Driver_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
