/*
 * File: Motor_and_Driver.h
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

#ifndef RTW_HEADER_Motor_and_Driver_h_
#define RTW_HEADER_Motor_and_Driver_h_
#include <string.h>
#ifndef Motor_and_Driver_COMMON_INCLUDES_
#define Motor_and_Driver_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "nesl_rtw.h"
#include "Motor_and_Driver_678d4e8_1_gateway.h"
#endif                                 /* Motor_and_Driver_COMMON_INCLUDES_ */

#include "Motor_and_Driver_types.h"

/* Macros for accessing real-time model data structure */

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T INPUT_1_1_1[4];               /* '<S99>/INPUT_1_1_1' */
  real_T INPUT_2_1_1[4];               /* '<S99>/INPUT_2_1_1' */
  real_T STATE_1[17];                  /* '<S99>/STATE_1' */
  real_T INPUT_1_1_1_Discrete[2];      /* '<S99>/INPUT_1_1_1' */
  real_T INPUT_2_1_1_Discrete[2];      /* '<S99>/INPUT_2_1_1' */
  real_T STATE_1_Discrete[14];         /* '<S99>/STATE_1' */
  volatile real_T RateTransition3_Buffer[2];/* '<S1>/Rate Transition3' */
  volatile real_T RateTransition1_Buffer[2];/* '<S1>/Rate Transition1' */
  volatile real_T RateTransition_Buffer[6];/* '<Root>/Rate Transition' */
  real_T Merge;                        /* '<S66>/Merge' */
  real_T Merge1;                       /* '<S66>/Merge1' */
  real_T UnitDelay1_DSTATE;            /* '<S6>/Unit Delay1' */
  real_T Integrator_DSTATE;            /* '<S49>/Integrator' */
  real_T UnitDelay_DSTATE;             /* '<S9>/Unit Delay' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S9>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S9>/Discrete-Time Integrator1' */
  real_T DiscreteTimeIntegrator_DST_do51;/* '<S8>/Discrete-Time Integrator' */
  real_T UnitDelay_DSTATE_f5ht;        /* '<S8>/Unit Delay' */
  real_T DiscreteTimeIntegrator_DST_ju3b;/* '<Root>/Discrete-Time Integrator' */
  real_T OUTPUT_1_0_Discrete;          /* '<S99>/OUTPUT_1_0' */
  void* STATE_1_Simulator;             /* '<S99>/STATE_1' */
  void* STATE_1_SimData;               /* '<S99>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S99>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S99>/STATE_1' */
  void* STATE_1_TsIndex;               /* '<S99>/STATE_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S99>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S99>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S99>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S99>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsIndex;            /* '<S99>/OUTPUT_1_0' */
  real32_T UnitDelay_DSTATE_jn0o;      /* '<S1>/Unit Delay' */
  int_T STATE_1_Modes[3];              /* '<S99>/STATE_1' */
  int_T OUTPUT_1_0_Modes;              /* '<S99>/OUTPUT_1_0' */
  volatile int8_T RateTransition3_ActiveBufIdx;/* '<S1>/Rate Transition3' */
  volatile int8_T RateTransition1_ActiveBufIdx;/* '<S1>/Rate Transition1' */
  volatile int8_T RateTransition1_semaphoreTaken;/* '<S1>/Rate Transition1' */
  volatile int8_T RateTransition_ActiveBufIdx;/* '<Root>/Rate Transition' */
  boolean_T STATE_1_FirstOutput;       /* '<S99>/STATE_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S99>/OUTPUT_1_0' */
  boolean_T Memory_PreviousInput;      /* '<S78>/Memory' */
} DW_Motor_and_Driver_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T RefSignal;                  /* '<Root>/RefSignal' */
} ExtU_Motor_and_Driver_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  motorInfo motorInfo_owf2;            /* '<Root>/motorInfo' */
  RespSignal RespSignal_k25n;          /* '<Root>/RespSignal' */
} ExtY_Motor_and_Driver_T;

/* Parameters (default storage) */
struct P_Motor_and_Driver_T_ {
  real_T x3001_5;                      /* Variable: x3001_5
                                        * Referenced by: '<S81>/k_mEPOS4'
                                        */
  real_T x30A0_1;                      /* Variable: x30A0_1
                                        * Referenced by: '<S14>/Constant'
                                        */
  real_T x30A0_2;                      /* Variable: x30A0_2
                                        * Referenced by: '<S15>/Constant'
                                        */
  real_T x30A2_1;                      /* Variable: x30A2_1
                                        * Referenced by: '<S77>/Constant'
                                        */
  real_T x30A2_2;                      /* Variable: x30A2_2
                                        * Referenced by: '<S76>/Constant'
                                        */
  real_T x30A3_1;                      /* Variable: x30A3_1
                                        * Referenced by: '<S9>/MATLAB Function'
                                        */
  real_T x30A3_2;                      /* Variable: x30A3_2
                                        * Referenced by: '<S9>/MATLAB Function'
                                        */
  real_T x30A3_3;                      /* Variable: x30A3_3
                                        * Referenced by: '<S9>/MATLAB Function'
                                        */
  real_T x30A3_4;                      /* Variable: x30A3_4
                                        * Referenced by: '<S82>/r_EPOS4'
                                        */
  real_T x30A3_5;                      /* Variable: x30A3_5
                                        * Referenced by: '<S79>/J_EPOS4'
                                        */
  real_T x520886_ICont;                /* Variable: x520886_ICont
                                        * Referenced by:
                                        *   '<S8>/Saturation'
                                        *   '<S78>/Dead Zone'
                                        */
  real_T x607325_RotIner;              /* Variable: x607325_RotIner
                                        * Referenced by: '<S10>/Constant'
                                        */
  real_T x607325_RotOmgMax;            /* Variable: x607325_RotOmgMax
                                        * Referenced by: '<S9>/Discrete-Time Integrator'
                                        */
  real_T x607325_Torq;                 /* Variable: x607325_Torq
                                        * Referenced by: '<S9>/Saturation'
                                        */
  real_T x607325_TorqConst;            /* Variable: x607325_TorqConst
                                        * Referenced by:
                                        *   '<S10>/Constant2'
                                        *   '<S11>/Constant'
                                        */
  real_T x607325_VNom;                 /* Variable: x607325_VNom
                                        * Referenced by:
                                        *   '<S56>/Saturation'
                                        *   '<S69>/Constant'
                                        *   '<S42>/DeadZone'
                                        */
  real32_T x28_000006_reduction;       /* Variable: x28_000006_reduction
                                        * Referenced by:
                                        *   '<S84>/Constant'
                                        *   '<S85>/Constant1'
                                        */
  real_T DiscretePIController_InitialCon;
                              /* Mask Parameter: DiscretePIController_InitialCon
                               * Referenced by: '<S49>/Integrator'
                               */
  real_T feedforward_acceleration_Value;
                               /* Mask Parameter: feedforward_acceleration_Value
                                * Referenced by: '<S10>/Constant1'
                                */
  real_T feedforward_velocity_Value;
                                   /* Mask Parameter: feedforward_velocity_Value
                                    * Referenced by: '<S11>/Constant1'
                                    */
  real_T Zero_Value;                   /* Expression: 0
                                        * Referenced by: '<S68>/Zero'
                                        */
  real_T Out1_Y0;                      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S69>/Out1'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S69>/Gain'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S78>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S40>/Constant1'
                                        */
  real_T RateTransition3_InitialConditio;/* Expression: 0
                                          * Referenced by: '<S1>/Rate Transition3'
                                          */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S6>/Unit Delay1'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S49>/Integrator'
                                        */
  real_T Merge_InitialOutput;          /* Expression: 0
                                        * Referenced by: '<S66>/Merge'
                                        */
  real_T Merge1_InitialOutput;         /* Expression: 0
                                        * Referenced by: '<S66>/Merge1'
                                        */
  real_T GAIN_Gain;              /* Expression: pm_unit('N*m', 'N*mm', 'linear')
                                  * Referenced by: '<S92>/GAIN'
                                  */
  real_T ZeroGain_Gain;                /* Expression: 0
                                        * Referenced by: '<S40>/ZeroGain'
                                        */
  real_T RateTransition1_InitialConditio;/* Expression: 0
                                          * Referenced by: '<S1>/Rate Transition1'
                                          */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S9>/Unit Delay'
                                        */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S9>/Discrete-Time Integrator'
                            */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S9>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator1_gainval;
                          /* Computed Parameter: DiscreteTimeIntegrator1_gainval
                           * Referenced by: '<S9>/Discrete-Time Integrator1'
                           */
  real_T DiscreteTimeIntegrator1_IC;   /* Expression: 0
                                        * Referenced by: '<S9>/Discrete-Time Integrator1'
                                        */
  real_T RateTransition_InitialCondition;/* Expression: 0
                                          * Referenced by: '<Root>/Rate Transition'
                                          */
  real_T Gain1_Gain;                   /* Expression: 1e-7
                                        * Referenced by: '<S10>/Gain1'
                                        */
  real_T DiscreteTimeIntegrator_gai_bz4v;
                          /* Computed Parameter: DiscreteTimeIntegrator_gai_bz4v
                           * Referenced by: '<S8>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_f5eg;/* Expression: 0
                                         * Referenced by: '<S8>/Discrete-Time Integrator'
                                         */
  real_T UnitDelay_InitialCondition_mz0d;/* Expression: 0
                                          * Referenced by: '<S8>/Unit Delay'
                                          */
  real_T ZeroGain_Gain_m40c;           /* Expression: 0
                                        * Referenced by: '<S78>/ZeroGain'
                                        */
  real_T DiscreteTimeIntegrator_gai_lwd1;
                          /* Computed Parameter: DiscreteTimeIntegrator_gai_lwd1
                           * Referenced by: '<Root>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_etzk;/* Expression: 0
                                         * Referenced by: '<Root>/Discrete-Time Integrator'
                                         */
  real32_T UnitDelay_InitialCondition_gjec;
                          /* Computed Parameter: UnitDelay_InitialCondition_gjec
                           * Referenced by: '<S1>/Unit Delay'
                           */
  boolean_T Memory_InitialCondition;
                                  /* Computed Parameter: Memory_InitialCondition
                                   * Referenced by: '<S78>/Memory'
                                   */
};

/* Real-time Model Data Structure */
struct tag_RTM_Motor_and_Driver_T {
  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    struct {
      uint16_T TID[4];
    } TaskCounters;
  } Timing;
};

/* Block parameters (default storage) */
extern P_Motor_and_Driver_T Motor_and_Driver_P;

/* Block signals and states (default storage) */
extern DW_Motor_and_Driver_T Motor_and_Driver_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Motor_and_Driver_T Motor_and_Driver_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Motor_and_Driver_T Motor_and_Driver_Y;

/* Model entry point functions */
extern void Motor_and_Driver_initialize(void);
extern void Motor_and_Driver_step(void);

/* Real-time Model object */
extern RT_MODEL_Motor_and_Driver_T *const Motor_and_Driver_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Gain' : Unused code path elimination
 * Block '<S3>/Scope' : Unused code path elimination
 * Block '<S93>/Bias' : Unused code path elimination
 * Block '<S93>/Rate Transition' : Unused code path elimination
 * Block '<S94>/Rate Transition' : Unused code path elimination
 * Block '<S5>/Data Type Conversion' : Unused code path elimination
 * Block '<S5>/Gain' : Unused code path elimination
 * Block '<S5>/Product' : Unused code path elimination
 * Block '<S5>/Rate Transition' : Unused code path elimination
 * Block '<S5>/Scope' : Unused code path elimination
 * Block '<S5>/Scope1' : Unused code path elimination
 * Block '<S5>/Scope2' : Unused code path elimination
 * Block '<S5>/Scope3' : Unused code path elimination
 * Block '<S5>/Scope4' : Unused code path elimination
 * Block '<S5>/Scope5' : Unused code path elimination
 * Block '<S5>/Scope6' : Unused code path elimination
 * Block '<S66>/Rate Transition' : Eliminated since input and output rates are identical
 * Block '<S66>/Rate Transition1' : Eliminated since input and output rates are identical
 * Block '<S67>/Rate Transition' : Eliminated since input and output rates are identical
 * Block '<S67>/Unit Conversion' : Eliminated nontunable gain of 1
 * Block '<S83>/Rate Transition' : Eliminated since input and output rates are identical
 * Block '<S83>/Rate Transition1' : Eliminated since input and output rates are identical
 * Block '<S86>/Rate Transition' : Eliminated since input and output rates are identical
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
 * '<Root>' : 'Motor_and_Driver'
 * '<S1>'   : 'Motor_and_Driver/Driver'
 * '<S2>'   : 'Motor_and_Driver/Load'
 * '<S3>'   : 'Motor_and_Driver/Motor'
 * '<S4>'   : 'Motor_and_Driver/Solver Configuration'
 * '<S5>'   : 'Motor_and_Driver/Visualization'
 * '<S6>'   : 'Motor_and_Driver/Driver/Current controller'
 * '<S7>'   : 'Motor_and_Driver/Driver/Path Planner'
 * '<S8>'   : 'Motor_and_Driver/Driver/Velocity controller PI'
 * '<S9>'   : 'Motor_and_Driver/Driver/Velocity observer'
 * '<S10>'  : 'Motor_and_Driver/Driver/feedforward_acceleration'
 * '<S11>'  : 'Motor_and_Driver/Driver/feedforward_velocity'
 * '<S12>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller'
 * '<S13>'  : 'Motor_and_Driver/Driver/Current controller/Drive Plant'
 * '<S14>'  : 'Motor_and_Driver/Driver/Current controller/Subsystem1'
 * '<S15>'  : 'Motor_and_Driver/Driver/Current controller/Subsystem2'
 * '<S16>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Anti-windup'
 * '<S17>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/D Gain'
 * '<S18>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Filter'
 * '<S19>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Filter ICs'
 * '<S20>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/I Gain'
 * '<S21>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Ideal P Gain'
 * '<S22>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Ideal P Gain Fdbk'
 * '<S23>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Integrator'
 * '<S24>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Integrator ICs'
 * '<S25>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/N Copy'
 * '<S26>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/N Gain'
 * '<S27>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/P Copy'
 * '<S28>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Parallel P Gain'
 * '<S29>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Reset Signal'
 * '<S30>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Saturation'
 * '<S31>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Saturation Fdbk'
 * '<S32>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Sum'
 * '<S33>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Sum Fdbk'
 * '<S34>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Tracking Mode'
 * '<S35>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Tracking Mode Sum'
 * '<S36>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Tsamp - Integral'
 * '<S37>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Tsamp - Ngain'
 * '<S38>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/postSat Signal'
 * '<S39>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/preSat Signal'
 * '<S40>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S41>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S42>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S43>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/D Gain/Disabled'
 * '<S44>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Filter/Disabled'
 * '<S45>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Filter ICs/Disabled'
 * '<S46>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/I Gain/External Parameters'
 * '<S47>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Ideal P Gain/Passthrough'
 * '<S48>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Ideal P Gain Fdbk/Disabled'
 * '<S49>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Integrator/Discrete'
 * '<S50>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Integrator ICs/Internal IC'
 * '<S51>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/N Copy/Disabled wSignal Specification'
 * '<S52>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/N Gain/Disabled'
 * '<S53>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/P Copy/Disabled'
 * '<S54>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Parallel P Gain/External Parameters'
 * '<S55>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Reset Signal/Disabled'
 * '<S56>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Saturation/Enabled'
 * '<S57>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Saturation Fdbk/Disabled'
 * '<S58>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Sum/Sum_PI'
 * '<S59>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Sum Fdbk/Disabled'
 * '<S60>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Tracking Mode/Disabled'
 * '<S61>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Tracking Mode Sum/Passthrough'
 * '<S62>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Tsamp - Integral/Passthrough'
 * '<S63>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Tsamp - Ngain/Passthrough'
 * '<S64>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/postSat Signal/Forward_Path'
 * '<S65>'  : 'Motor_and_Driver/Driver/Current controller/Discrete PI Controller/preSat Signal/Forward_Path'
 * '<S66>'  : 'Motor_and_Driver/Driver/Current controller/Drive Plant/I to U'
 * '<S67>'  : 'Motor_and_Driver/Driver/Current controller/Drive Plant/Subsystem'
 * '<S68>'  : 'Motor_and_Driver/Driver/Current controller/Drive Plant/I to U/If Action Subsystem'
 * '<S69>'  : 'Motor_and_Driver/Driver/Current controller/Drive Plant/I to U/If Action Subsystem1'
 * '<S70>'  : 'Motor_and_Driver/Driver/Current controller/Drive Plant/I to U/Simulink-PS Converter'
 * '<S71>'  : 'Motor_and_Driver/Driver/Current controller/Drive Plant/I to U/Simulink-PS Converter1'
 * '<S72>'  : 'Motor_and_Driver/Driver/Current controller/Drive Plant/I to U/Simulink-PS Converter/EVAL_KEY'
 * '<S73>'  : 'Motor_and_Driver/Driver/Current controller/Drive Plant/I to U/Simulink-PS Converter1/EVAL_KEY'
 * '<S74>'  : 'Motor_and_Driver/Driver/Current controller/Drive Plant/Subsystem/PS-Simulink Converter'
 * '<S75>'  : 'Motor_and_Driver/Driver/Current controller/Drive Plant/Subsystem/PS-Simulink Converter/EVAL_KEY'
 * '<S76>'  : 'Motor_and_Driver/Driver/Velocity controller PI/KiOmgSI'
 * '<S77>'  : 'Motor_and_Driver/Driver/Velocity controller PI/KpOmgSI'
 * '<S78>'  : 'Motor_and_Driver/Driver/Velocity controller PI/Subsystem3'
 * '<S79>'  : 'Motor_and_Driver/Driver/Velocity observer/J_SI'
 * '<S80>'  : 'Motor_and_Driver/Driver/Velocity observer/MATLAB Function'
 * '<S81>'  : 'Motor_and_Driver/Driver/Velocity observer/k_mSI'
 * '<S82>'  : 'Motor_and_Driver/Driver/Velocity observer/r_SI'
 * '<S83>'  : 'Motor_and_Driver/Load/Digital incremental encoder'
 * '<S84>'  : 'Motor_and_Driver/Load/Subsystem'
 * '<S85>'  : 'Motor_and_Driver/Load/Subsystem1'
 * '<S86>'  : 'Motor_and_Driver/Load/torque sensor (virtual)'
 * '<S87>'  : 'Motor_and_Driver/Load/Digital incremental encoder/PS-Simulink Converter1'
 * '<S88>'  : 'Motor_and_Driver/Load/Digital incremental encoder/PS-Simulink Converter2'
 * '<S89>'  : 'Motor_and_Driver/Load/Digital incremental encoder/PS-Simulink Converter1/EVAL_KEY'
 * '<S90>'  : 'Motor_and_Driver/Load/Digital incremental encoder/PS-Simulink Converter2/EVAL_KEY'
 * '<S91>'  : 'Motor_and_Driver/Load/torque sensor (virtual)/PS-Simulink Converter3'
 * '<S92>'  : 'Motor_and_Driver/Load/torque sensor (virtual)/PS-Simulink Converter3/EVAL_KEY'
 * '<S93>'  : 'Motor_and_Driver/Motor/Subsystem'
 * '<S94>'  : 'Motor_and_Driver/Motor/voltage sensor'
 * '<S95>'  : 'Motor_and_Driver/Motor/Subsystem/PS-Simulink Converter'
 * '<S96>'  : 'Motor_and_Driver/Motor/Subsystem/PS-Simulink Converter/EVAL_KEY'
 * '<S97>'  : 'Motor_and_Driver/Motor/voltage sensor/PS-Simulink Converter'
 * '<S98>'  : 'Motor_and_Driver/Motor/voltage sensor/PS-Simulink Converter/EVAL_KEY'
 * '<S99>'  : 'Motor_and_Driver/Solver Configuration/EVAL_KEY'
 */

/*-
 * Requirements for '<Root>': Motor_and_Driver
 */
#endif                                 /* RTW_HEADER_Motor_and_Driver_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
