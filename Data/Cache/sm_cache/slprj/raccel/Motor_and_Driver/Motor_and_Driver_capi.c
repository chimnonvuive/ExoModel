#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Motor_and_Driver_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#else
#include "builtin_typeid_types.h"
#include "Motor_and_Driver.h"
#include "Motor_and_Driver_capi.h"
#include "Motor_and_Driver_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"Motor_and_Driver/Data Type Conversion" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 0 } , { 1 , 0 , TARGET_STRING ( "Motor_and_Driver/Rate Transition" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 2 , 0 , TARGET_STRING (
"Motor_and_Driver/Driver/Rate Transition2" ) , TARGET_STRING ( "" ) , 0 , 1 ,
0 , 0 , 1 } , { 3 , 0 , TARGET_STRING ( "Motor_and_Driver/Visualization/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 4 , 0 , TARGET_STRING (
"Motor_and_Driver/Visualization/Product" ) , TARGET_STRING ( "power" ) , 0 ,
0 , 0 , 0 , 2 } , { 5 , 0 , TARGET_STRING (
"Motor_and_Driver/Visualization/Rate Transition" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 2 } , { 6 , 0 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity controller PI/Saturation" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 7 , 0 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity controller PI/Add" ) , TARGET_STRING (
"I_ctrl" ) , 0 , 0 , 0 , 0 , 1 } , { 8 , 3 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity observer/MATLAB Function" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 9 , 0 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity observer/Saturation" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 1 } , { 10 , 0 , TARGET_STRING (
"Motor_and_Driver/Load/Digital incremental encoder/Data Type Conversion" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 11 , 0 , TARGET_STRING (
"Motor_and_Driver/Load/Digital incremental encoder/Data Type Conversion1" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 12 , 0 , TARGET_STRING (
"Motor_and_Driver/Load/torque sensor (virtual)/Data Type Conversion" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 13 , 0 , TARGET_STRING (
"Motor_and_Driver/Motor/Subsystem/Bias" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 2 } , { 14 , 0 , TARGET_STRING (
"Motor_and_Driver/Motor/voltage sensor/Rate Transition" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 2 } , { 15 , 0 , TARGET_STRING (
"Motor_and_Driver/Solver Configuration/EVAL_KEY/INPUT_1_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 16 , 0 , TARGET_STRING (
"Motor_and_Driver/Solver Configuration/EVAL_KEY/INPUT_2_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 17 , 0 , TARGET_STRING (
"Motor_and_Driver/Solver Configuration/EVAL_KEY/STATE_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 3 , 0 , 2 } , { 18 , 0 , TARGET_STRING (
"Motor_and_Driver/Driver/Current controller/Subsystem1/Unit Conversion" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 19 , 0 , TARGET_STRING (
"Motor_and_Driver/Driver/Current controller/Subsystem2/Unit Conversion" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 20 , 0 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity controller PI/KiOmgSI/Unit Conversion" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 21 , 0 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity controller PI/KpOmgSI/Unit Conversion" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 22 , 0 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity controller PI/Subsystem3/AND" ) ,
TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 1 } , { 23 , 0 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity controller PI/Subsystem3/Switch" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 24 , 0 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity observer/J_SI/Product" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 25 , 0 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity observer/J_SI/Unit Conversion" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 26 , 0 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity observer/k_mSI/Unit Conversion" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 27 , 0 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity observer/r_SI/Unit Conversion" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 28 , 0 , TARGET_STRING (
"Motor_and_Driver/Driver/feedforward_acceleration/Subsystem/Gain1" ) ,
TARGET_STRING ( "J_SI" ) , 0 , 0 , 0 , 0 , 3 } , { 29 , 0 , TARGET_STRING (
"Motor_and_Driver/Driver/feedforward_acceleration/Subsystem1/Unit Conversion"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 30 , 0 , TARGET_STRING (
"Motor_and_Driver/Driver/feedforward_velocity/Subsystem/Unit Conversion" ) ,
TARGET_STRING ( "r_SI" ) , 0 , 0 , 0 , 0 , 3 } , { 31 , 0 , TARGET_STRING (
"Motor_and_Driver/Driver/feedforward_velocity/Subsystem1/Unit Conversion" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 32 , 0 , TARGET_STRING (
 "Motor_and_Driver/Driver/Current controller/Drive Plant/I to U/If Action Subsystem"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 33 , 0 , TARGET_STRING (
 "Motor_and_Driver/Driver/Current controller/Drive Plant/I to U/If Action Subsystem"
) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 2 } , { 34 , 0 , TARGET_STRING (
 "Motor_and_Driver/Driver/Current controller/Drive Plant/I to U/If Action Subsystem1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 35 , 0 , TARGET_STRING (
 "Motor_and_Driver/Driver/Current controller/Drive Plant/I to U/If Action Subsystem1"
) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 2 } , { 36 , 0 , TARGET_STRING (
"Motor_and_Driver/Driver/Current controller/Drive Plant/I to U/Merge" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 37 , 0 , TARGET_STRING (
"Motor_and_Driver/Driver/Current controller/Drive Plant/I to U/Merge1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 38 , 0 , TARGET_STRING (
 "Motor_and_Driver/Driver/Current controller/Drive Plant/Subsystem/Data Type Conversion"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 39 , 0 , TARGET_STRING (
 "Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Anti-windup/Disc. Clamping Parallel/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 40 , 0 , TARGET_STRING (
 "Motor_and_Driver/Driver/Current controller/Drive Plant/I to U/If Action Subsystem/In1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 41 , 0 , TARGET_STRING (
 "Motor_and_Driver/Driver/Current controller/Drive Plant/I to U/If Action Subsystem1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 42 , TARGET_STRING (
"Motor_and_Driver/Rate Transition" ) , TARGET_STRING ( "InitialCondition" ) ,
0 , 0 , 0 } , { 43 , TARGET_STRING (
"Motor_and_Driver/Driver/feedforward_acceleration" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 44 , TARGET_STRING (
"Motor_and_Driver/Driver/feedforward_velocity" ) , TARGET_STRING ( "Value" )
, 0 , 0 , 0 } , { 45 , TARGET_STRING (
"Motor_and_Driver/Driver/Rate Transition1" ) , TARGET_STRING (
"InitialCondition" ) , 1 , 0 , 0 } , { 46 , TARGET_STRING (
"Motor_and_Driver/Driver/Rate Transition2" ) , TARGET_STRING (
"InitialCondition" ) , 1 , 0 , 0 } , { 47 , TARGET_STRING (
"Motor_and_Driver/Driver/Rate Transition3" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 48 , TARGET_STRING (
"Motor_and_Driver/Driver/Unit Delay" ) , TARGET_STRING ( "InitialCondition" )
, 1 , 0 , 0 } , { 49 , TARGET_STRING ( "Motor_and_Driver/Visualization/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 50 , TARGET_STRING (
"Motor_and_Driver/Visualization/Rate Transition" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 51 , TARGET_STRING (
"Motor_and_Driver/Driver/Current controller/Discrete PI Controller" ) ,
TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 52 ,
TARGET_STRING ( "Motor_and_Driver/Driver/Current controller/Unit Delay1" ) ,
TARGET_STRING ( "InitialCondition" ) , 1 , 0 , 0 } , { 53 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity controller PI/Discrete-Time Integrator" ) ,
TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 54 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity controller PI/Discrete-Time Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 55 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity controller PI/Unit Delay" ) , TARGET_STRING
( "InitialCondition" ) , 0 , 0 , 0 } , { 56 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity observer/Discrete-Time Integrator" ) ,
TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 57 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity observer/Discrete-Time Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 58 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity observer/Discrete-Time Integrator1" ) ,
TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 59 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity observer/Discrete-Time Integrator1" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 60 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity observer/Unit Delay" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 61 , TARGET_STRING (
"Motor_and_Driver/Motor/Subsystem/Bias" ) , TARGET_STRING ( "Bias" ) , 0 , 0
, 0 } , { 62 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity controller PI/Subsystem3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 63 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity controller PI/Subsystem3/ZeroGain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 64 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity controller PI/Subsystem3/Memory" ) ,
TARGET_STRING ( "InitialCondition" ) , 2 , 0 , 0 } , { 65 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity observer/J_SI/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 66 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity observer/r_SI/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 67 , TARGET_STRING (
"Motor_and_Driver/Driver/feedforward_acceleration/Subsystem/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 68 , TARGET_STRING (
"Motor_and_Driver/Driver/Current controller/Drive Plant/I to U/Merge" ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 69 , TARGET_STRING (
"Motor_and_Driver/Driver/Current controller/Drive Plant/I to U/Merge1" ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 70 , TARGET_STRING (
 "Motor_and_Driver/Load/Digital incremental encoder/PS-Simulink Converter1/EVAL_KEY/GAIN"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 71 , TARGET_STRING (
 "Motor_and_Driver/Load/torque sensor (virtual)/PS-Simulink Converter3/EVAL_KEY/GAIN"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 72 , TARGET_STRING (
 "Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Anti-windup/Disc. Clamping Parallel/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 73 , TARGET_STRING (
 "Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Anti-windup/Disc. Clamping Parallel/ZeroGain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 74 , TARGET_STRING (
 "Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 75 , TARGET_STRING (
 "Motor_and_Driver/Driver/Current controller/Drive Plant/I to U/If Action Subsystem/Zero"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 76 , TARGET_STRING (
 "Motor_and_Driver/Driver/Current controller/Drive Plant/I to U/If Action Subsystem1/Out1"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 77 , TARGET_STRING (
 "Motor_and_Driver/Driver/Current controller/Drive Plant/I to U/If Action Subsystem1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 78 , 0 , TARGET_STRING (
"Motor_and_Driver/RefSignal" ) , TARGET_STRING ( "" ) , 1 , 1 , 0 , 0 , 0 } ,
{ 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_Signals rtRootOutputs [ ] = { { 79 , 0 , TARGET_STRING (
"Motor_and_Driver/motorInfo" ) , TARGET_STRING ( "" ) , 1 , 3 , 0 , 0 , 2 } ,
{ 80 , 0 , TARGET_STRING ( "Motor_and_Driver/RespSignal" ) , TARGET_STRING (
"" ) , 2 , 4 , 0 , 0 , 2 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 ,
0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 81 ,
TARGET_STRING ( "x3001_5" ) , 0 , 0 , 0 } , { 82 , TARGET_STRING ( "x30A0_1"
) , 0 , 0 , 0 } , { 83 , TARGET_STRING ( "x30A0_2" ) , 0 , 0 , 0 } , { 84 ,
TARGET_STRING ( "x30A2_1" ) , 0 , 0 , 0 } , { 85 , TARGET_STRING ( "x30A2_2"
) , 0 , 0 , 0 } , { 86 , TARGET_STRING ( "x30A3_1" ) , 0 , 0 , 0 } , { 87 ,
TARGET_STRING ( "x30A3_2" ) , 0 , 0 , 0 } , { 88 , TARGET_STRING ( "x30A3_3"
) , 0 , 0 , 0 } , { 89 , TARGET_STRING ( "x30A3_4" ) , 0 , 0 , 0 } , { 90 ,
TARGET_STRING ( "x30A3_5" ) , 0 , 0 , 0 } , { 91 , TARGET_STRING (
"x520886_ICont" ) , 0 , 0 , 0 } , { 92 , TARGET_STRING ( "x607325_RotIner" )
, 0 , 0 , 0 } , { 93 , TARGET_STRING ( "x607325_RotOmgMax" ) , 0 , 0 , 0 } ,
{ 94 , TARGET_STRING ( "x607325_Torq" ) , 0 , 0 , 0 } , { 95 , TARGET_STRING
( "x607325_TorqConst" ) , 0 , 0 , 0 } , { 96 , TARGET_STRING ( "x607325_VNom"
) , 0 , 0 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . cooy4a5ivy , & rtB . bq1g2orrwt [
0 ] , & rtB . ekyms1wurq , & rtB . akpvqkyld1 , & rtB . fjg2zg0f3m , & rtB .
gzvslpqkcd , & rtB . mlqvt2g1kq , & rtB . dqihdby3th , & rtB . ewoec4jpzh , &
rtB . kzcwpgqn1e , & rtB . dyrup5dyjo , & rtB . dbxopmzlmg , & rtB .
lugwzdstdq , & rtB . onfqtofgj3 , & rtB . dt3k0ww03w , & rtB . pfzpikjxxm [ 0
] , & rtB . dm5dfvv4bd [ 0 ] , & rtB . jio04e5l2y [ 0 ] , & rtB . lh1uwltxg0
, & rtB . knorcxbsbi , & rtB . hcs0qpqt3t , & rtB . opqftfcl54 , & rtB .
oixjxwb01f , & rtB . m0vxoft0f3 , & rtB . llz1du4krc , & rtB . pyuyn3v4dn , &
rtB . alrmk4rget , & rtB . gv4hdvrgjr , & rtB . m0pnodctem , & rtB .
dj030qsvlg , & rtB . ciumjk5i4b , & rtB . jv03wguaj0 , & rtB . fu0jmlqjl4 , &
rtB . gvcs01gfki , & rtB . fu0jmlqjl4 , & rtB . gvcs01gfki , & rtB .
fu0jmlqjl4 , & rtB . gvcs01gfki , & rtB . f3ovsqvcrg , & rtB . dq414il1rg , &
rtB . fu0jmlqjl4 , & rtB . fu0jmlqjl4 , & rtP .
RateTransition_InitialCondition , & rtP . feedforward_acceleration_Value , &
rtP . feedforward_velocity_Value , & rtP . RateTransition1_InitialCondition ,
& rtP . RateTransition2_InitialCondition , & rtP .
RateTransition3_InitialCondition , & rtP .
UnitDelay_InitialCondition_gjecjbvtlj , & rtP . Gain_Gain_ktcz42xa5t , & rtP
. RateTransition_InitialCondition_jp45hakdeo , & rtP .
DiscretePIController_InitialConditionForIntegrator , & rtP .
UnitDelay1_InitialCondition , & rtP .
DiscreteTimeIntegrator_gainval_bz4vjpssjb , & rtP .
DiscreteTimeIntegrator_IC_f5egosl31z , & rtP .
UnitDelay_InitialCondition_mz0dqclppl , & rtP .
DiscreteTimeIntegrator_gainval , & rtP . DiscreteTimeIntegrator_IC , & rtP .
DiscreteTimeIntegrator1_gainval , & rtP . DiscreteTimeIntegrator1_IC , & rtP
. UnitDelay_InitialCondition , & rtP . Bias_Bias , & rtP . Constant_Value , &
rtP . ZeroGain_Gain_m40ckabu3g , & rtP . Memory_InitialCondition , & rtP .
Gain_Gain_pah44eqa5n , & rtP . Gain_Gain_gofic1b4wb , & rtP . Gain1_Gain , &
rtP . Merge_InitialOutput , & rtP . Merge1_InitialOutput , & rtP . GAIN_Gain
, & rtP . GAIN_Gain_hw2btsfaso , & rtP . Constant1_Value , & rtP .
ZeroGain_Gain , & rtP . Integrator_gainval , & rtP . Zero_Value , & rtP .
Out1_Y0 , & rtP . Gain_Gain , & rtU . hilmfez3mk , & rtY . mssvjyminv , & rtY
. elshvuie5m , & rtP . x3001_5 , & rtP . x30A0_1 , & rtP . x30A0_2 , & rtP .
x30A2_1 , & rtP . x30A2_2 , & rtP . x30A3_1 , & rtP . x30A3_2 , & rtP .
x30A3_3 , & rtP . x30A3_4 , & rtP . x30A3_5 , & rtP . x520886_ICont , & rtP .
x607325_RotIner , & rtP . x607325_RotOmgMax , & rtP . x607325_Torq , & rtP .
x607325_TorqConst , & rtP . x607325_VNom , } ; static int32_T *
rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "float" , "real32_T" , 0 , 0 , sizeof ( real32_T ) , ( uint8_T ) SS_SINGLE
, 0 , 0 , 0 } , { "unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T
) , ( uint8_T ) SS_BOOLEAN , 0 , 0 , 0 } , { "struct" , "motorInfo" , 3 , 1 ,
sizeof ( motorInfo ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } , { "struct" ,
"RespSignal" , 3 , 4 , sizeof ( RespSignal ) , ( uint8_T ) SS_STRUCT , 0 , 0
, 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , { "Angle" , rt_offsetof ( motorInfo , Angle ) , 1 , 0 , 0 } , {
"Speed" , rt_offsetof ( motorInfo , Speed ) , 1 , 0 , 0 } , { "Current" ,
rt_offsetof ( motorInfo , Current ) , 1 , 0 , 0 } , { "Angle" , rt_offsetof (
RespSignal , Angle ) , 1 , 0 , 0 } , { "Speed" , rt_offsetof ( RespSignal ,
Speed ) , 1 , 0 , 0 } , { "Torque" , rt_offsetof ( RespSignal , Torque ) , 1
, 0 , 0 } } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 1 , 1 , 3 , 1 , 4 , 1 , 13 , 1 } ;
static const real_T rtcapiStoredFloats [ ] = { 0.1 , 0.0 , 0.0004 , 6.0E-5 }
; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 3 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 2 ]
, ( const void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 2 , ( uint8_T ) 0
} , { ( const void * ) & rtcapiStoredFloats [ 3 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( int8_T ) 1 , ( uint8_T ) 0 } , { ( NULL ) , (
NULL ) , 4 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 42 , rtRootInputs , 1 , rtRootOutputs , 2 } , {
rtBlockParameters , 36 , rtModelParameters , 16 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 223359711U , 930802253U , 1300783331U ,
2119893538U } , ( NULL ) , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ;
const rtwCAPI_ModelMappingStaticInfo * Motor_and_Driver_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Motor_and_Driver_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( (
* rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Motor_and_Driver_host_InitializeDataMapInfo (
Motor_and_Driver_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
