#include <stddef.h>
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
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1
, TARGET_STRING ( "Motor_and_Driver/Discrete-Time\nIntegrator" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 1 , - 1 ,
TARGET_STRING ( "Motor_and_Driver/Driver/Unit Delay" ) , TARGET_STRING ( "" )
, "" , 0 , 1 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 2 , - 1 , TARGET_STRING (
"Motor_and_Driver/Driver/Current controller/Unit Delay1" ) , TARGET_STRING (
"" ) , "" , 0 , 0 , 0 , 0 , 2 , 0 , - 1 , 0 } , { 3 , - 1 , TARGET_STRING (
"Motor_and_Driver/Driver/Velocity controller PI/Discrete-Time\nIntegrator" )
, TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 4 , - 1 ,
TARGET_STRING ( "Motor_and_Driver/Driver/Velocity controller PI/Unit Delay" )
, TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 5 , - 1 ,
TARGET_STRING (
"Motor_and_Driver/Driver/Velocity observer/Discrete-Time\nIntegrator" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 6 , - 1 ,
TARGET_STRING (
"Motor_and_Driver/Driver/Velocity observer/Discrete-Time\nIntegrator1" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 7 , - 1 ,
TARGET_STRING ( "Motor_and_Driver/Driver/Velocity observer/Unit Delay" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 8 , - 1 ,
TARGET_STRING ( "Motor_and_Driver/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 1 , 0 , 2 , 0 , - 1 , 0 } , { 9 , - 1
, TARGET_STRING (
"Motor_and_Driver/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 1 , 0 , 2 , 0 , - 1 , 0 } , { 10 , - 1 ,
TARGET_STRING ( "Motor_and_Driver/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 2 , 0 , 2 , 0 , - 1 , 0 } , { 11 , - 1 ,
TARGET_STRING (
 "Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 2 , 0 , - 1 , 0 } , { 0 , - 1
, ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
static int_T rt_LoggedStateIdxList [ ] = { 10 , 28 , 0 , 8 , 9 , 6 , 5 , 7 ,
2 , 3 , 4 , 1 } ;
#ifndef HOST_CAPI_BUILD
static void Motor_and_Driver_InitializeDataAddr ( void * dataAddr [ ] ,
an3ws3rp20 * localDW ) { dataAddr [ 0 ] = ( void * ) ( & localDW ->
ldgv3mxr0m ) ; dataAddr [ 1 ] = ( void * ) ( & localDW -> adf5pho5oy ) ;
dataAddr [ 2 ] = ( void * ) ( & localDW -> ahxn11a4uj ) ; dataAddr [ 3 ] = (
void * ) ( & localDW -> a1yzcpvsyb ) ; dataAddr [ 4 ] = ( void * ) ( &
localDW -> o33esxcr4d ) ; dataAddr [ 5 ] = ( void * ) ( & localDW ->
ntyeyxcpzv ) ; dataAddr [ 6 ] = ( void * ) ( & localDW -> d5ykmtl1o3 ) ;
dataAddr [ 7 ] = ( void * ) ( & localDW -> iyvf0cfvz1 ) ; dataAddr [ 8 ] = (
void * ) ( & localDW -> nzaadopmzv [ 0 ] ) ; dataAddr [ 9 ] = ( void * ) ( &
localDW -> hpz3a5plfu [ 0 ] ) ; dataAddr [ 10 ] = ( void * ) ( & localDW ->
msgwjfokow [ 0 ] ) ; dataAddr [ 11 ] = ( void * ) ( & localDW -> bntadq01i0 )
; }
#endif
#ifndef HOST_CAPI_BUILD
static void Motor_and_Driver_InitializeVarDimsAddr ( int32_T * vardimsAddr [
] ) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void Motor_and_Driver_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3 ] = ( NULL ) ; loggingPtrs
[ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ; loggingPtrs [ 6 ] = ( NULL
) ; loggingPtrs [ 7 ] = ( NULL ) ; loggingPtrs [ 8 ] = ( NULL ) ; loggingPtrs
[ 9 ] = ( NULL ) ; loggingPtrs [ 10 ] = ( NULL ) ; loggingPtrs [ 11 ] = (
NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "float" , "real32_T" , 0 , 0 , sizeof ( real32_T ) , ( uint8_T ) SS_SINGLE
, 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 1 , 1
, 2 , 1 , 14 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.015 ,
0.0 , 0.0004 , 6.0E-5 } ; static rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL
) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 3 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 2 ]
, ( const void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 2 , ( uint8_T ) 0
} , { ( const void * ) & rtcapiStoredFloats [ 3 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( int8_T ) 1 , ( uint8_T ) 0 } } ; static int_T
rtContextSystems [ 5 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 5 , rtContextSystems , loggingMetaInfo , 0 , ( NULL
) , { 0 , ( NULL ) , ( NULL ) } , 0 , ( NULL ) } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 0 , ( NULL )
, 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockStates , 12
} , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap ,
rtSampleTimeMap , rtDimensionArray } , "float" , { 3099776356U , 1780183049U
, 2761468667U , 783400547U } , & mmiStaticInfoLogging , 0 , ( boolean_T ) 0 ,
rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo *
Motor_and_Driver_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void Motor_and_Driver_InitializeSystemRan ( jqmbuwnn4r * const
n4f1kxfugf , sysRanDType * systemRan [ ] , an3ws3rp20 * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
n4f1kxfugf ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( sysRanDType * ) & localDW ->
bgmtziepvj ; systemRan [ 2 ] = ( sysRanDType * ) & localDW -> juqucbm44r ;
systemRan [ 3 ] = ( NULL ) ; systemRan [ 4 ] = ( NULL ) ; systemTid [ 1 ] =
n4f1kxfugf -> Timing . mdlref_GlobalTID [ 1 ] ; systemTid [ 2 ] = n4f1kxfugf
-> Timing . mdlref_GlobalTID [ 1 ] ; systemTid [ 3 ] = n4f1kxfugf -> Timing .
mdlref_GlobalTID [ 2 ] ; systemTid [ 4 ] = n4f1kxfugf -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 1 ; rtContextSystems [ 2 ] = 2 ;
rtContextSystems [ 3 ] = 0 ; rtContextSystems [ 4 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void Motor_and_Driver_InitializeDataMapInfo ( jqmbuwnn4r * const n4f1kxfugf ,
an3ws3rp20 * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( n4f1kxfugf -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( n4f1kxfugf -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( n4f1kxfugf -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; Motor_and_Driver_InitializeDataAddr ( n4f1kxfugf ->
DataMapInfo . dataAddress , localDW ) ; rtwCAPI_SetDataAddressMap (
n4f1kxfugf -> DataMapInfo . mmi , n4f1kxfugf -> DataMapInfo . dataAddress ) ;
Motor_and_Driver_InitializeVarDimsAddr ( n4f1kxfugf -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( n4f1kxfugf -> DataMapInfo .
mmi , n4f1kxfugf -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
n4f1kxfugf -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
n4f1kxfugf -> DataMapInfo . mmi , ( NULL ) ) ;
Motor_and_Driver_InitializeLoggingFunctions ( n4f1kxfugf -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( n4f1kxfugf -> DataMapInfo . mmi ,
n4f1kxfugf -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
n4f1kxfugf -> DataMapInfo . mmi , & n4f1kxfugf -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( n4f1kxfugf -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( n4f1kxfugf -> DataMapInfo .
mmi , 0 ) ; Motor_and_Driver_InitializeSystemRan ( n4f1kxfugf , n4f1kxfugf ->
DataMapInfo . systemRan , localDW , n4f1kxfugf -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( n4f1kxfugf -> DataMapInfo .
mmi , n4f1kxfugf -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
n4f1kxfugf -> DataMapInfo . mmi , n4f1kxfugf -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( n4f1kxfugf -> DataMapInfo . mmi , & n4f1kxfugf ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
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
