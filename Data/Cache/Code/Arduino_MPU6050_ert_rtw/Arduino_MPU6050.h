/*
 * File: Arduino_MPU6050.h
 *
 * Code generated for Simulink model 'Arduino_MPU6050'.
 *
 * Model version                  : 1.23
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Wed Apr 27 22:23:47 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Arduino_MPU6050_h_
#define RTW_HEADER_Arduino_MPU6050_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include <math.h>
#include <string.h>
#ifndef Arduino_MPU6050_COMMON_INCLUDES_
#define Arduino_MPU6050_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "MW_arduino_digitalio.h"
#include "MW_I2C.h"
#endif                                 /* Arduino_MPU6050_COMMON_INCLUDES_ */

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"

/* Model Code Variants */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

#define Arduino_MPU6050_M              (rtM)

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

#ifndef struct_tag_04b6x6tDldj9IrIH2gmbjG
#define struct_tag_04b6x6tDldj9IrIH2gmbjG

struct tag_04b6x6tDldj9IrIH2gmbjG
{
  int16_T __dummy;
};

#endif                                 /* struct_tag_04b6x6tDldj9IrIH2gmbjG */

#ifndef typedef_b_arduinodriver_ArduinoDigitalI
#define typedef_b_arduinodriver_ArduinoDigitalI

typedef struct tag_04b6x6tDldj9IrIH2gmbjG b_arduinodriver_ArduinoDigitalI;

#endif                             /* typedef_b_arduinodriver_ArduinoDigitalI */

#ifndef struct_tag_AYWgtFscQm3mLUJYb3A20C
#define struct_tag_AYWgtFscQm3mLUJYb3A20C

struct tag_AYWgtFscQm3mLUJYb3A20C
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  b_arduinodriver_ArduinoDigitalI DigitalIODriverObj;
};

#endif                                 /* struct_tag_AYWgtFscQm3mLUJYb3A20C */

#ifndef typedef_codertarget_arduinobase_blocks_
#define typedef_codertarget_arduinobase_blocks_

typedef struct tag_AYWgtFscQm3mLUJYb3A20C codertarget_arduinobase_blocks_;

#endif                             /* typedef_codertarget_arduinobase_blocks_ */

/* Custom Type definition for MATLABSystem: '<Root>/I2C Read1' */
#include "MW_SVD.h"
#ifndef struct_tag_jbIFaTBEZATkkvPSmnoPa
#define struct_tag_jbIFaTBEZATkkvPSmnoPa

struct tag_jbIFaTBEZATkkvPSmnoPa
{
  MW_Handle_Type MW_I2C_HANDLE;
};

#endif                                 /* struct_tag_jbIFaTBEZATkkvPSmnoPa */

#ifndef typedef_c_arduinodriver_ArduinoI2C
#define typedef_c_arduinodriver_ArduinoI2C

typedef struct tag_jbIFaTBEZATkkvPSmnoPa c_arduinodriver_ArduinoI2C;

#endif                                 /* typedef_c_arduinodriver_ArduinoI2C */

#ifndef struct_tag_3coDYKg8JwMUxQ16KBcXBE
#define struct_tag_3coDYKg8JwMUxQ16KBcXBE

struct tag_3coDYKg8JwMUxQ16KBcXBE
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  c_arduinodriver_ArduinoI2C I2CDriverObj;
  uint32_T BusSpeed;
  real_T DefaultMaximumBusSpeedInHz;
};

#endif                                 /* struct_tag_3coDYKg8JwMUxQ16KBcXBE */

#ifndef typedef_codertarget_arduinobase_interna
#define typedef_codertarget_arduinobase_interna

typedef struct tag_3coDYKg8JwMUxQ16KBcXBE codertarget_arduinobase_interna;

#endif                             /* typedef_codertarget_arduinobase_interna */

#ifndef struct_tag_chY474Xs2EmAHQmJ9UhmtD
#define struct_tag_chY474Xs2EmAHQmJ9UhmtD

struct tag_chY474Xs2EmAHQmJ9UhmtD
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  c_arduinodriver_ArduinoI2C I2CDriverObj;
  uint32_T BusSpeed;
  real_T DefaultMaximumBusSpeedInHz;
  real_T SampleTime;
};

#endif                                 /* struct_tag_chY474Xs2EmAHQmJ9UhmtD */

#ifndef typedef_codertarget_arduinobase_inter_k
#define typedef_codertarget_arduinobase_inter_k

typedef struct tag_chY474Xs2EmAHQmJ9UhmtD codertarget_arduinobase_inter_k;

#endif                             /* typedef_codertarget_arduinobase_inter_k */

/* Block states (default storage) for system '<S7>/If Action Subsystem' */
typedef struct {
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S7>/If Action Subsystem' */
} DW_IfActionSubsystem;

/* Block states (default storage) for system '<S7>/If Action Subsystem1' */
typedef struct {
  int8_T IfActionSubsystem1_SubsysRanBC;/* '<S7>/If Action Subsystem1' */
} DW_IfActionSubsystem1;

/* Block signals (default storage) */
typedef struct {
  real32_T Transpose[3];               /* '<S3>/Transpose' */
  real32_T Gain2[3];                   /* '<S3>/Gain2' */
  uint8_T CastToSingle;                /* '<Root>/Cast To Single' */
  boolean_T turnOffSensor4;            /* '<Root>/Truth Table' */
} B;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_inter_k obj; /* '<Root>/I2C Read1' */
  codertarget_arduinobase_inter_k obj_j;/* '<Root>/I2C Read' */
  codertarget_arduinobase_interna obj_n;/* '<S2>/I2C Write1' */
  codertarget_arduinobase_interna obj_e;/* '<S2>/I2C Write' */
  codertarget_arduinobase_blocks_ obj_p;/* '<Root>/Digital Output3' */
  codertarget_arduinobase_blocks_ obj_e4;/* '<Root>/Digital Output2' */
  codertarget_arduinobase_blocks_ obj_jz;/* '<Root>/Digital Output1' */
  codertarget_arduinobase_blocks_ obj_o;/* '<Root>/Digital Output' */
  real_T UnitDelay_DSTATE;             /* '<Root>/Unit Delay' */
  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<Root>/Scope1' */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Subsy;   /* synthesized block */

  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Truth;   /* synthesized block */

  struct {
    void *LoggedData;
  } Scope2_PWORK;                      /* '<Root>/Scope2' */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_CastT;   /* synthesized block */

  real32_T DiscreteTimeIntegrator_DSTATE;/* '<S3>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator1_DSTATE;/* '<S3>/Discrete-Time Integrator1' */
  real32_T DiscreteTimeIntegrator2_DSTATE;/* '<S3>/Discrete-Time Integrator2' */
  uint8_T Output_DSTATE;               /* '<S1>/Output' */
  int8_T EnabledSubsystem_SubsysRanBC; /* '<Root>/Enabled Subsystem' */
  uint8_T is_active_c1_Arduino_MPU6050;/* '<Root>/Truth Table' */
  boolean_T doneDoubleBufferReInit;    /* '<Root>/Truth Table' */
  DW_IfActionSubsystem1 IfActionSubsystem1_d;/* '<S9>/If Action Subsystem1' */
  DW_IfActionSubsystem IfActionSubsystem_o;/* '<S9>/If Action Subsystem' */
  DW_IfActionSubsystem1 IfActionSubsystem1_p;/* '<S8>/If Action Subsystem1' */
  DW_IfActionSubsystem IfActionSubsystem_a;/* '<S8>/If Action Subsystem' */
  DW_IfActionSubsystem1 IfActionSubsystem1_g;/* '<S7>/If Action Subsystem1' */
  DW_IfActionSubsystem IfActionSubsystem_c;/* '<S7>/If Action Subsystem' */
} DW;

/* Invariant block signals (default storage) */
typedef struct {
  const real32_T ramp;                 /* '<S7>/Constant Ramp' */
  const real32_T ramp_i;               /* '<S8>/Constant Ramp' */
  const real32_T ramp_f;               /* '<S9>/Constant Ramp' */
} ConstB;

/* Parameters (default storage) */
struct P_ {
  uint8_T WrapToZero_Threshold;        /* Mask Parameter: WrapToZero_Threshold
                                        * Referenced by: '<S6>/FixPt Switch'
                                        */
  real_T init_Device_Value;            /* Expression: 0
                                        * Referenced by: '<S2>/init_Device'
                                        */
  real_T init_Accel_Value;             /* Expression: 0
                                        * Referenced by: '<S2>/init_Accel'
                                        */
  real_T I2CRead_SampleTime;           /* Expression: 0.02
                                        * Referenced by: '<Root>/I2C Read'
                                        */
  real_T I2CRead1_SampleTime;          /* Expression: 0.02
                                        * Referenced by: '<Root>/I2C Read1'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 1
                                        * Referenced by: '<Root>/Unit Delay'
                                        */
  real32_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S3>/Discrete-Time Integrator'
                            */
  real32_T DiscreteTimeIntegrator_IC;
                                /* Computed Parameter: DiscreteTimeIntegrator_IC
                                 * Referenced by: '<S3>/Discrete-Time Integrator'
                                 */
  real32_T Gain3_Gain;                 /* Expression: single(0.96)
                                        * Referenced by: '<S3>/Gain3'
                                        */
  real32_T Gain4_Gain;                 /* Expression: single(0.04)
                                        * Referenced by: '<S3>/Gain4'
                                        */
  real32_T DiscreteTimeIntegrator1_gainval;
                          /* Computed Parameter: DiscreteTimeIntegrator1_gainval
                           * Referenced by: '<S3>/Discrete-Time Integrator1'
                           */
  real32_T DiscreteTimeIntegrator1_IC;
                               /* Computed Parameter: DiscreteTimeIntegrator1_IC
                                * Referenced by: '<S3>/Discrete-Time Integrator1'
                                */
  real32_T Gain5_Gain;                 /* Expression: single(0.96)
                                        * Referenced by: '<S3>/Gain5'
                                        */
  real32_T Gain6_Gain;                 /* Expression: single(0.04)
                                        * Referenced by: '<S3>/Gain6'
                                        */
  real32_T DiscreteTimeIntegrator2_gainval;
                          /* Computed Parameter: DiscreteTimeIntegrator2_gainval
                           * Referenced by: '<S3>/Discrete-Time Integrator2'
                           */
  real32_T DiscreteTimeIntegrator2_IC;
                               /* Computed Parameter: DiscreteTimeIntegrator2_IC
                                * Referenced by: '<S3>/Discrete-Time Integrator2'
                                */
  real32_T Gain2_Gain;                 /* Expression: single(1/131)
                                        * Referenced by: '<S3>/Gain2'
                                        */
  uint8_T Constant_Value;              /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S6>/Constant'
                                        */
  uint8_T Output_InitialCondition;/* Computed Parameter: Output_InitialCondition
                                   * Referenced by: '<S1>/Output'
                                   */
  uint8_T FixPtConstant_Value;        /* Computed Parameter: FixPtConstant_Value
                                       * Referenced by: '<S5>/FixPt Constant'
                                       */
};

/* Parameters (default storage) */
typedef struct P_ P;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P rtP;

/* Block signals (default storage) */
extern B rtB;

/* Block states (default storage) */
extern DW rtDW;
extern const ConstB rtConstB;          /* constant block i/o */

/* Model entry point functions */
extern void Arduino_MPU6050_initialize(void);
extern void Arduino_MPU6050_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S5>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S6>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S11>/Check Signal Attributes' : Unused code path elimination
 * Block '<S12>/Check Signal Attributes' : Unused code path elimination
 * Block '<S16>/Check Signal Attributes' : Unused code path elimination
 * Block '<S17>/Check Signal Attributes' : Unused code path elimination
 * Block '<S21>/Check Signal Attributes' : Unused code path elimination
 * Block '<S22>/Check Signal Attributes' : Unused code path elimination
 * Block '<S7>/Reshape' : Reshape block reduction
 * Block '<S8>/Reshape' : Reshape block reduction
 * Block '<S9>/Reshape' : Reshape block reduction
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
 * '<Root>' : 'Arduino_MPU6050'
 * '<S1>'   : 'Arduino_MPU6050/Counter Free-Running'
 * '<S2>'   : 'Arduino_MPU6050/Enabled Subsystem'
 * '<S3>'   : 'Arduino_MPU6050/Subsystem'
 * '<S4>'   : 'Arduino_MPU6050/Truth Table'
 * '<S5>'   : 'Arduino_MPU6050/Counter Free-Running/Increment Real World'
 * '<S6>'   : 'Arduino_MPU6050/Counter Free-Running/Wrap To Zero'
 * '<S7>'   : 'Arduino_MPU6050/Subsystem/Detrend'
 * '<S8>'   : 'Arduino_MPU6050/Subsystem/Detrend1'
 * '<S9>'   : 'Arduino_MPU6050/Subsystem/Detrend2'
 * '<S10>'  : 'Arduino_MPU6050/Subsystem/MATLAB Function'
 * '<S11>'  : 'Arduino_MPU6050/Subsystem/Detrend/Check Signal Attributes'
 * '<S12>'  : 'Arduino_MPU6050/Subsystem/Detrend/Error If Not Floating-Point'
 * '<S13>'  : 'Arduino_MPU6050/Subsystem/Detrend/If Action Subsystem'
 * '<S14>'  : 'Arduino_MPU6050/Subsystem/Detrend/If Action Subsystem1'
 * '<S15>'  : 'Arduino_MPU6050/Subsystem/Detrend/Inherit Frame Status'
 * '<S16>'  : 'Arduino_MPU6050/Subsystem/Detrend1/Check Signal Attributes'
 * '<S17>'  : 'Arduino_MPU6050/Subsystem/Detrend1/Error If Not Floating-Point'
 * '<S18>'  : 'Arduino_MPU6050/Subsystem/Detrend1/If Action Subsystem'
 * '<S19>'  : 'Arduino_MPU6050/Subsystem/Detrend1/If Action Subsystem1'
 * '<S20>'  : 'Arduino_MPU6050/Subsystem/Detrend1/Inherit Frame Status'
 * '<S21>'  : 'Arduino_MPU6050/Subsystem/Detrend2/Check Signal Attributes'
 * '<S22>'  : 'Arduino_MPU6050/Subsystem/Detrend2/Error If Not Floating-Point'
 * '<S23>'  : 'Arduino_MPU6050/Subsystem/Detrend2/If Action Subsystem'
 * '<S24>'  : 'Arduino_MPU6050/Subsystem/Detrend2/If Action Subsystem1'
 * '<S25>'  : 'Arduino_MPU6050/Subsystem/Detrend2/Inherit Frame Status'
 */
#endif                                 /* RTW_HEADER_Arduino_MPU6050_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
