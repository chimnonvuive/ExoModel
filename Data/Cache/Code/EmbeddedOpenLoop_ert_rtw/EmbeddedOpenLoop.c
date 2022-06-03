/*
 * File: EmbeddedOpenLoop.c
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
#include "EmbeddedOpenLoop_private.h"

/* Block states (default storage) */
D_Work_EmbeddedOpenLoop EmbeddedOpenLoop_DWork;

/* Real-time model */
static RT_MODEL_EmbeddedOpenLoop EmbeddedOpenLoop_M_;
RT_MODEL_EmbeddedOpenLoop *const EmbeddedOpenLoop_M = &EmbeddedOpenLoop_M_;
real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Model step function */
void EmbeddedOpenLoop_step(void)
{
  codertarget_arduinobase_inter_o *obj_0;
  codertarget_arduinobase_interna *obj;
  int16_T saturatedUnaryMinus;
  uint16_T rtb_AnalogInput_0;
  uint8_T dataIn[4];
  uint8_T rtb_fwd;
  uint8_T status;

  /* MATLABSystem: '<Root>/Analog Input' */
  if (EmbeddedOpenLoop_DWork.obj_p.SampleTime !=
      EmbeddedOpenLoop_P.AnalogInput_SampleTime) {
    EmbeddedOpenLoop_DWork.obj_p.SampleTime =
      EmbeddedOpenLoop_P.AnalogInput_SampleTime;
  }

  obj = &EmbeddedOpenLoop_DWork.obj_p;
  obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogIn_GetHandle(14UL);
  MW_AnalogInSingle_ReadResult
    (EmbeddedOpenLoop_DWork.obj_p.AnalogInDriverObj.MW_ANALOGIN_HANDLE,
     &rtb_AnalogInput_0, 3);

  /* MATLABSystem: '<Root>/Serial Transmit1' incorporates:
   *  Constant: '<S1>/Header'
   *  Constant: '<S1>/Terminator'
   *  DataTypeConversion: '<S4>/Extract Desired Bits'
   *  DataTypeConversion: '<S5>/Extract Desired Bits'
   *  MATLABSystem: '<Root>/Analog Input'
   */
  if (EmbeddedOpenLoop_DWork.obj.Protocol !=
      EmbeddedOpenLoop_P.SerialTransmit1_Protocol) {
    EmbeddedOpenLoop_DWork.obj.Protocol =
      EmbeddedOpenLoop_P.SerialTransmit1_Protocol;
  }

  dataIn[0] = EmbeddedOpenLoop_P.Header_Value;
  dataIn[1] = (uint8_T)rtb_AnalogInput_0;
  dataIn[2] = (uint8_T)(rtb_AnalogInput_0 >> 8);
  dataIn[3] = EmbeddedOpenLoop_P.Terminator_Value;
  MW_Serial_write(EmbeddedOpenLoop_DWork.obj.port, &dataIn[0], 4.0,
                  EmbeddedOpenLoop_DWork.obj.dataSizeInBytes,
                  EmbeddedOpenLoop_DWork.obj.sendModeEnum,
                  EmbeddedOpenLoop_DWork.obj.dataType,
                  EmbeddedOpenLoop_DWork.obj.sendFormatEnum, 2.0, '\x00');

  /* End of MATLABSystem: '<Root>/Serial Transmit1' */

  /* MATLABSystem: '<Root>/Serial Receive' */
  if (EmbeddedOpenLoop_DWork.obj_e.Protocol !=
      EmbeddedOpenLoop_P.SerialReceive_Protocol) {
    EmbeddedOpenLoop_DWork.obj_e.Protocol =
      EmbeddedOpenLoop_P.SerialReceive_Protocol;
  }

  MW_Serial_read(0, EmbeddedOpenLoop_DWork.obj_e.DataSizeInBytes, &rtb_fwd,
                 &status);

  /* MATLAB Function: '<Root>/Voltage Command To Pins' incorporates:
   *  MATLABSystem: '<Root>/Serial Receive'
   */
  if (status == 1) {
    EmbeddedOpenLoop_DWork.last = (rtb_fwd - 127) << 1;
  }

  if (EmbeddedOpenLoop_DWork.last > 0) {
    saturatedUnaryMinus = EmbeddedOpenLoop_DWork.last;
    if (EmbeddedOpenLoop_DWork.last > 255) {
      saturatedUnaryMinus = 255;
    }

    rtb_fwd = (uint8_T)saturatedUnaryMinus;
    status = 0U;
  } else {
    rtb_fwd = 0U;
    if (EmbeddedOpenLoop_DWork.last <= MIN_int16_T) {
      saturatedUnaryMinus = MAX_int16_T;
    } else {
      saturatedUnaryMinus = -EmbeddedOpenLoop_DWork.last;
    }

    if (saturatedUnaryMinus > 255) {
      saturatedUnaryMinus = 255;
    }

    status = (uint8_T)saturatedUnaryMinus;
  }

  /* End of MATLAB Function: '<Root>/Voltage Command To Pins' */

  /* MATLABSystem: '<Root>/Analog Output (PWM) Backward' */
  obj_0 = &EmbeddedOpenLoop_DWork.obj_g;
  obj_0->PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(11UL);
  MW_PWM_SetDutyCycle(EmbeddedOpenLoop_DWork.obj_g.PWMDriverObj.MW_PWM_HANDLE,
                      (real_T)status);

  /* MATLABSystem: '<Root>/Analog Output (PWM) Forward' */
  obj_0 = &EmbeddedOpenLoop_DWork.obj_h;
  obj_0->PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(10UL);
  MW_PWM_SetDutyCycle(EmbeddedOpenLoop_DWork.obj_h.PWMDriverObj.MW_PWM_HANDLE,
                      (real_T)rtb_fwd);
}

/* Model initialize function */
void EmbeddedOpenLoop_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    codertarget_arduinobase_inter_o *obj_0;
    codertarget_arduinobase_interna *obj;
    real_T tmp;
    uint8_T tmp_0;

    /* Start for MATLABSystem: '<Root>/Analog Input' */
    EmbeddedOpenLoop_DWork.obj_p.matlabCodegenIsDeleted = true;
    EmbeddedOpenLoop_DWork.obj_p.isInitialized = 0L;
    EmbeddedOpenLoop_DWork.obj_p.SampleTime = -1.0;
    EmbeddedOpenLoop_DWork.obj_p.matlabCodegenIsDeleted = false;
    EmbeddedOpenLoop_DWork.obj_p.SampleTime =
      EmbeddedOpenLoop_P.AnalogInput_SampleTime;
    obj = &EmbeddedOpenLoop_DWork.obj_p;
    EmbeddedOpenLoop_DWork.obj_p.isSetupComplete = false;
    EmbeddedOpenLoop_DWork.obj_p.isInitialized = 1L;
    obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogInSingle_Open(14UL);
    EmbeddedOpenLoop_DWork.obj_p.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Serial Transmit1' */
    EmbeddedOpenLoop_DWork.obj.matlabCodegenIsDeleted = false;
    EmbeddedOpenLoop_DWork.obj.Protocol =
      EmbeddedOpenLoop_P.SerialTransmit1_Protocol;
    EmbeddedOpenLoop_DWork.obj.isInitialized = 1L;
    EmbeddedOpenLoop_DWork.obj.port = 0.0;
    EmbeddedOpenLoop_DWork.obj.dataSizeInBytes = 1.0;
    EmbeddedOpenLoop_DWork.obj.dataType = 0.0;
    EmbeddedOpenLoop_DWork.obj.sendModeEnum = 0.0;
    EmbeddedOpenLoop_DWork.obj.sendFormatEnum = 0.0;
    tmp = rt_roundd_snf(EmbeddedOpenLoop_DWork.obj.port);
    if (tmp < 256.0) {
      if (tmp >= 0.0) {
        tmp_0 = (uint8_T)tmp;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SCI_Open(tmp_0);
    EmbeddedOpenLoop_DWork.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<Root>/Serial Transmit1' */

    /* Start for MATLABSystem: '<Root>/Serial Receive' */
    EmbeddedOpenLoop_DWork.obj_e.matlabCodegenIsDeleted = false;
    EmbeddedOpenLoop_DWork.obj_e.Protocol =
      EmbeddedOpenLoop_P.SerialReceive_Protocol;
    EmbeddedOpenLoop_DWork.obj_e.isInitialized = 1L;
    EmbeddedOpenLoop_DWork.obj_e.DataTypeWidth = 1U;
    EmbeddedOpenLoop_DWork.obj_e.DataSizeInBytes =
      EmbeddedOpenLoop_DWork.obj_e.DataTypeWidth;
    MW_SCI_Open(0);
    EmbeddedOpenLoop_DWork.obj_e.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Analog Output (PWM) Backward' */
    EmbeddedOpenLoop_DWork.obj_g.matlabCodegenIsDeleted = true;
    EmbeddedOpenLoop_DWork.obj_g.isInitialized = 0L;
    EmbeddedOpenLoop_DWork.obj_g.matlabCodegenIsDeleted = false;
    obj_0 = &EmbeddedOpenLoop_DWork.obj_g;
    EmbeddedOpenLoop_DWork.obj_g.isSetupComplete = false;
    EmbeddedOpenLoop_DWork.obj_g.isInitialized = 1L;
    obj_0->PWMDriverObj.MW_PWM_HANDLE = MW_PWM_Open(11UL, 0.0, 0.0);
    EmbeddedOpenLoop_DWork.obj_g.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Analog Output (PWM) Forward' */
    EmbeddedOpenLoop_DWork.obj_h.matlabCodegenIsDeleted = true;
    EmbeddedOpenLoop_DWork.obj_h.isInitialized = 0L;
    EmbeddedOpenLoop_DWork.obj_h.matlabCodegenIsDeleted = false;
    obj_0 = &EmbeddedOpenLoop_DWork.obj_h;
    EmbeddedOpenLoop_DWork.obj_h.isSetupComplete = false;
    EmbeddedOpenLoop_DWork.obj_h.isInitialized = 1L;
    obj_0->PWMDriverObj.MW_PWM_HANDLE = MW_PWM_Open(10UL, 0.0, 0.0);
    EmbeddedOpenLoop_DWork.obj_h.isSetupComplete = true;
  }
}

/* Model terminate function */
void EmbeddedOpenLoop_terminate(void)
{
  codertarget_arduinobase_inter_o *obj_0;
  codertarget_arduinobase_interna *obj;

  /* Terminate for MATLABSystem: '<Root>/Analog Input' */
  obj = &EmbeddedOpenLoop_DWork.obj_p;
  if (!EmbeddedOpenLoop_DWork.obj_p.matlabCodegenIsDeleted) {
    EmbeddedOpenLoop_DWork.obj_p.matlabCodegenIsDeleted = true;
    if ((EmbeddedOpenLoop_DWork.obj_p.isInitialized == 1L) &&
        EmbeddedOpenLoop_DWork.obj_p.isSetupComplete) {
      obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogIn_GetHandle(14UL);
      MW_AnalogIn_Close
        (EmbeddedOpenLoop_DWork.obj_p.AnalogInDriverObj.MW_ANALOGIN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Analog Input' */

  /* Terminate for MATLABSystem: '<Root>/Serial Transmit1' */
  if (!EmbeddedOpenLoop_DWork.obj.matlabCodegenIsDeleted) {
    EmbeddedOpenLoop_DWork.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Serial Transmit1' */

  /* Terminate for MATLABSystem: '<Root>/Serial Receive' */
  if (!EmbeddedOpenLoop_DWork.obj_e.matlabCodegenIsDeleted) {
    EmbeddedOpenLoop_DWork.obj_e.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Serial Receive' */

  /* Terminate for MATLABSystem: '<Root>/Analog Output (PWM) Backward' */
  obj_0 = &EmbeddedOpenLoop_DWork.obj_g;
  if (!EmbeddedOpenLoop_DWork.obj_g.matlabCodegenIsDeleted) {
    EmbeddedOpenLoop_DWork.obj_g.matlabCodegenIsDeleted = true;
    if ((EmbeddedOpenLoop_DWork.obj_g.isInitialized == 1L) &&
        EmbeddedOpenLoop_DWork.obj_g.isSetupComplete) {
      obj_0->PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(11UL);
      MW_PWM_SetDutyCycle
        (EmbeddedOpenLoop_DWork.obj_g.PWMDriverObj.MW_PWM_HANDLE, 0.0);
      obj_0->PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(11UL);
      MW_PWM_Close(EmbeddedOpenLoop_DWork.obj_g.PWMDriverObj.MW_PWM_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Analog Output (PWM) Backward' */

  /* Terminate for MATLABSystem: '<Root>/Analog Output (PWM) Forward' */
  obj_0 = &EmbeddedOpenLoop_DWork.obj_h;
  if (!EmbeddedOpenLoop_DWork.obj_h.matlabCodegenIsDeleted) {
    EmbeddedOpenLoop_DWork.obj_h.matlabCodegenIsDeleted = true;
    if ((EmbeddedOpenLoop_DWork.obj_h.isInitialized == 1L) &&
        EmbeddedOpenLoop_DWork.obj_h.isSetupComplete) {
      obj_0->PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(10UL);
      MW_PWM_SetDutyCycle
        (EmbeddedOpenLoop_DWork.obj_h.PWMDriverObj.MW_PWM_HANDLE, 0.0);
      obj_0->PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(10UL);
      MW_PWM_Close(EmbeddedOpenLoop_DWork.obj_h.PWMDriverObj.MW_PWM_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Analog Output (PWM) Forward' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
