/*
 * File: EmbeddedOpenLoop_types.h
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

#ifndef RTW_HEADER_EmbeddedOpenLoop_types_h_
#define RTW_HEADER_EmbeddedOpenLoop_types_h_
#include "rtwtypes.h"

/* Model Code Variants */

/* Custom Type definition for MATLABSystem: '<Root>/Serial Transmit1' */
#include "MW_SVD.h"
#ifndef struct_tag_UTG5XI0vJCsmjbgura8BP
#define struct_tag_UTG5XI0vJCsmjbgura8BP

struct tag_UTG5XI0vJCsmjbgura8BP
{
  MW_Handle_Type MW_ANALOGIN_HANDLE;
};

#endif                                 /* struct_tag_UTG5XI0vJCsmjbgura8BP */

#ifndef typedef_f_arduinodriver_ArduinoAnalogIn
#define typedef_f_arduinodriver_ArduinoAnalogIn

typedef struct tag_UTG5XI0vJCsmjbgura8BP f_arduinodriver_ArduinoAnalogIn;

#endif                             /* typedef_f_arduinodriver_ArduinoAnalogIn */

#ifndef struct_tag_8ohiN1FAOgR98njPNu14NC
#define struct_tag_8ohiN1FAOgR98njPNu14NC

struct tag_8ohiN1FAOgR98njPNu14NC
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  f_arduinodriver_ArduinoAnalogIn AnalogInDriverObj;
  real_T SampleTime;
};

#endif                                 /* struct_tag_8ohiN1FAOgR98njPNu14NC */

#ifndef typedef_codertarget_arduinobase_interna
#define typedef_codertarget_arduinobase_interna

typedef struct tag_8ohiN1FAOgR98njPNu14NC codertarget_arduinobase_interna;

#endif                             /* typedef_codertarget_arduinobase_interna */

#ifndef struct_tag_g1WX34VPn8QzVKQriB4HN
#define struct_tag_g1WX34VPn8QzVKQriB4HN

struct tag_g1WX34VPn8QzVKQriB4HN
{
  MW_Handle_Type MW_PWM_HANDLE;
};

#endif                                 /* struct_tag_g1WX34VPn8QzVKQriB4HN */

#ifndef typedef_g_matlabshared_ioclient_periphe
#define typedef_g_matlabshared_ioclient_periphe

typedef struct tag_g1WX34VPn8QzVKQriB4HN g_matlabshared_ioclient_periphe;

#endif                             /* typedef_g_matlabshared_ioclient_periphe */

#ifndef struct_tag_4eDVzK5FiryyCjvjjvrZGB
#define struct_tag_4eDVzK5FiryyCjvjjvrZGB

struct tag_4eDVzK5FiryyCjvjjvrZGB
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  g_matlabshared_ioclient_periphe PWMDriverObj;
};

#endif                                 /* struct_tag_4eDVzK5FiryyCjvjjvrZGB */

#ifndef typedef_codertarget_arduinobase_inter_o
#define typedef_codertarget_arduinobase_inter_o

typedef struct tag_4eDVzK5FiryyCjvjjvrZGB codertarget_arduinobase_inter_o;

#endif                             /* typedef_codertarget_arduinobase_inter_o */

#ifndef struct_tag_qbUFhX6Bp3RsgYGeqgZpEH
#define struct_tag_qbUFhX6Bp3RsgYGeqgZpEH

struct tag_qbUFhX6Bp3RsgYGeqgZpEH
{
  int16_T __dummy;
};

#endif                                 /* struct_tag_qbUFhX6Bp3RsgYGeqgZpEH */

#ifndef typedef_c_arduinodriver_ArduinoSerial_E
#define typedef_c_arduinodriver_ArduinoSerial_E

typedef struct tag_qbUFhX6Bp3RsgYGeqgZpEH c_arduinodriver_ArduinoSerial_E;

#endif                             /* typedef_c_arduinodriver_ArduinoSerial_E */

#ifndef struct_tag_9bXzp5ir8KEyr0aHTDgMNH
#define struct_tag_9bXzp5ir8KEyr0aHTDgMNH

struct tag_9bXzp5ir8KEyr0aHTDgMNH
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T Protocol;
  uint16_T DataSizeInBytes;
  uint16_T DataTypeWidth;
  c_arduinodriver_ArduinoSerial_E SerialDriverObj;
};

#endif                                 /* struct_tag_9bXzp5ir8KEyr0aHTDgMNH */

#ifndef typedef_codertarget_arduinobase_inte_oq
#define typedef_codertarget_arduinobase_inte_oq

typedef struct tag_9bXzp5ir8KEyr0aHTDgMNH codertarget_arduinobase_inte_oq;

#endif                             /* typedef_codertarget_arduinobase_inte_oq */

#ifndef struct_tag_BlgwLpgj2bjudmbmVKWwDE
#define struct_tag_BlgwLpgj2bjudmbmVKWwDE

struct tag_BlgwLpgj2bjudmbmVKWwDE
{
  uint32_T f1[8];
};

#endif                                 /* struct_tag_BlgwLpgj2bjudmbmVKWwDE */

#ifndef typedef_cell_wrap_EmbeddedOpenLoop
#define typedef_cell_wrap_EmbeddedOpenLoop

typedef struct tag_BlgwLpgj2bjudmbmVKWwDE cell_wrap_EmbeddedOpenLoop;

#endif                                 /* typedef_cell_wrap_EmbeddedOpenLoop */

#ifndef struct_tag_0hWTIGrZdfuSOo9MsJIA2G
#define struct_tag_0hWTIGrZdfuSOo9MsJIA2G

struct tag_0hWTIGrZdfuSOo9MsJIA2G
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  cell_wrap_EmbeddedOpenLoop inputVarSize;
  real_T Protocol;
  real_T port;
  real_T dataSizeInBytes;
  real_T dataType;
  real_T sendModeEnum;
  real_T sendFormatEnum;
  c_arduinodriver_ArduinoSerial_E SerialDriverObj;
};

#endif                                 /* struct_tag_0hWTIGrZdfuSOo9MsJIA2G */

#ifndef typedef_codertarget_arduinobase_int_oq2
#define typedef_codertarget_arduinobase_int_oq2

typedef struct tag_0hWTIGrZdfuSOo9MsJIA2G codertarget_arduinobase_int_oq2;

#endif                             /* typedef_codertarget_arduinobase_int_oq2 */

/* Parameters (default storage) */
typedef struct Parameters_EmbeddedOpenLoop_ Parameters_EmbeddedOpenLoop;

/* Forward declaration for rtModel */
typedef struct tag_RTM_EmbeddedOpenLoop RT_MODEL_EmbeddedOpenLoop;

#endif                                /* RTW_HEADER_EmbeddedOpenLoop_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
