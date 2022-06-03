/*
 * File: EmbeddedOpenLoop.h
 *
 * Code generated for Simulink model 'EmbeddedOpenLoop'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Wed Apr 20 17:13:32 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_EmbeddedOpenLoop_h_
#define RTW_HEADER_EmbeddedOpenLoop_h_
#include <math.h>
#include <stddef.h>
#ifndef EmbeddedOpenLoop_COMMON_INCLUDES_
#define EmbeddedOpenLoop_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_AnalogIn.h"
#include "MW_PWM.h"
#include "MW_SerialRead.h"
#include "MW_SerialWrite.h"
#endif                                 /* EmbeddedOpenLoop_COMMON_INCLUDES_ */

#include "EmbeddedOpenLoop_types.h"
#include "MW_target_hardware_resources.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_int_oq2 obj; /* '<Root>/Serial Transmit1' */
  codertarget_arduinobase_inte_oq obj_e;/* '<Root>/Serial Receive' */
  codertarget_arduinobase_interna obj_p;/* '<Root>/Analog Input' */
  codertarget_arduinobase_inter_o obj_h;
                                      /* '<Root>/Analog Output (PWM) Forward' */
  codertarget_arduinobase_inter_o obj_g;
                                     /* '<Root>/Analog Output (PWM) Backward' */
  int16_T last;                        /* '<Root>/Voltage Command To Pins' */
} D_Work_EmbeddedOpenLoop;

/* Parameters (default storage) */
struct Parameters_EmbeddedOpenLoop_ {
  real_T AnalogInput_SampleTime;       /* Expression: 0.01
                                        * Referenced by: '<Root>/Analog Input'
                                        */
  real_T SerialReceive_Protocol;       /* Expression: 0
                                        * Referenced by: '<Root>/Serial Receive'
                                        */
  real_T SerialTransmit1_Protocol;     /* Expression: 0
                                        * Referenced by: '<Root>/Serial Transmit1'
                                        */
  uint8_T Header_Value;                /* Expression: uint8('A')
                                        * Referenced by: '<S1>/Header'
                                        */
  uint8_T Terminator_Value;            /* Expression: uint8(0)
                                        * Referenced by: '<S1>/Terminator'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_EmbeddedOpenLoop {
  const char_T * volatile errorStatus;
};

/* Block parameters (default storage) */
extern Parameters_EmbeddedOpenLoop EmbeddedOpenLoop_P;

/* Block states (default storage) */
extern D_Work_EmbeddedOpenLoop EmbeddedOpenLoop_DWork;

/* Model entry point functions */
extern void EmbeddedOpenLoop_initialize(void);
extern void EmbeddedOpenLoop_step(void);
extern void EmbeddedOpenLoop_terminate(void);

/* Real-time Model object */
extern RT_MODEL_EmbeddedOpenLoop *const EmbeddedOpenLoop_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S4>/DTProp1' : Unused code path elimination
 * Block '<S4>/DTProp2' : Unused code path elimination
 * Block '<S5>/DTProp1' : Unused code path elimination
 * Block '<S5>/DTProp2' : Unused code path elimination
 * Block '<S3>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S4>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S5>/Modify Scaling Only' : Eliminate redundant data type conversion
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
 * '<Root>' : 'EmbeddedOpenLoop'
 * '<S1>'   : 'EmbeddedOpenLoop/CreateMessage'
 * '<S2>'   : 'EmbeddedOpenLoop/Voltage Command To Pins'
 * '<S3>'   : 'EmbeddedOpenLoop/CreateMessage/Convert int16 to uint8 Array'
 * '<S4>'   : 'EmbeddedOpenLoop/CreateMessage/Convert int16 to uint8 Array/Extract Bits'
 * '<S5>'   : 'EmbeddedOpenLoop/CreateMessage/Convert int16 to uint8 Array/Extract Bits1'
 */
#endif                                 /* RTW_HEADER_EmbeddedOpenLoop_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
