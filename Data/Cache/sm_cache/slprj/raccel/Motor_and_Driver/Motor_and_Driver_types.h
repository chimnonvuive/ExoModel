#ifndef RTW_HEADER_Motor_and_Driver_types_h_
#define RTW_HEADER_Motor_and_Driver_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_RespSignal_
#define DEFINED_TYPEDEF_FOR_RespSignal_
typedef struct { real32_T Angle ; real32_T Speed ; real32_T Torque ; uint8_T
sl_padding0 [ 4 ] ; } RespSignal ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_motorInfo_
#define DEFINED_TYPEDEF_FOR_motorInfo_
typedef struct { real32_T Angle ; real32_T Speed ; real32_T Current ; uint8_T
sl_padding0 [ 4 ] ; } motorInfo ;
#endif
typedef struct P_ P ;
#endif
