/*
 * Motor_and_Driver_private.h
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

#ifndef RTW_HEADER_Motor_and_Driver_private_h_
#define RTW_HEADER_Motor_and_Driver_private_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "multiword_types.h"

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

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         (*((rtm)->errorStatus))
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    (*((rtm)->errorStatus) = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  (rtm)->errorStatus
#endif

#ifndef rtmSetErrorStatusPointer
#define rtmSetErrorStatusPointer(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (*((rtm)->timingBridge->taskTime[0]))
#endif
#endif                              /* RTW_HEADER_Motor_and_Driver_private_h_ */
