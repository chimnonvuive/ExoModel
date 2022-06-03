/*
 * File: ert_main.c
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

#include "EmbeddedOpenLoop.h"
#include "rtwtypes.h"

volatile int IsrOverrun = 0;
static boolean_T OverrunFlag = 0;
void rt_OneStep(void)
{
  /* Check for overrun. Protect OverrunFlag against preemption */
  if (OverrunFlag++) {
    IsrOverrun = 1;
    OverrunFlag--;
    return;
  }

#ifndef _MW_ARDUINO_LOOP_

  sei();

#endif;

  EmbeddedOpenLoop_step();

  /* Get model outputs here */
#ifndef _MW_ARDUINO_LOOP_

  cli();

#endif;

  OverrunFlag--;
}

volatile boolean_T stopRequested;
volatile boolean_T runModel;
int main(void)
{
  float modelBaseRate = 0.01;
  float systemClock = 0;

  /* Initialize variables */
  stopRequested = false;
  runModel = false;
  init();
  MW_Arduino_Init();
  rtmSetErrorStatus(EmbeddedOpenLoop_M, 0);
  EmbeddedOpenLoop_initialize();
  cli();
  configureArduinoAVRTimer();
  runModel =
    rtmGetErrorStatus(EmbeddedOpenLoop_M) == (NULL);

#ifndef _MW_ARDUINO_LOOP_

  sei();

#endif;

  sei ();
  while (runModel) {
    stopRequested = !(
                      rtmGetErrorStatus(EmbeddedOpenLoop_M) == (NULL));
    runModel = !(stopRequested);
    MW_Arduino_Loop();
  }

  /* Terminate model */
  EmbeddedOpenLoop_terminate();
  cli();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
