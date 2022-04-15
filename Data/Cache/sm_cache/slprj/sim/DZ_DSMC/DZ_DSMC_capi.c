#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "DZ_DSMC_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#else
#include "builtin_typeid_types.h"
#include "DZ_DSMC.h"
#include "DZ_DSMC_capi.h"
#include "DZ_DSMC_private.h"
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
, TARGET_STRING ( "DZ_DSMC/Tapped Delay" ) , TARGET_STRING ( "X" ) , "" , 0 ,
0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 1 , - 1 , TARGET_STRING (
"DZ_DSMC/Unit Delay" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 1 , 0 , 0
, 0 , - 1 , 0 } , { 2 , - 1 , TARGET_STRING (
"DZ_DSMC/Variant Subsystem2/High-fidelity model/Unit Delay1" ) ,
TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 2 , 0 , 0 , 0 , - 1 , 0 } , { 0 , -
1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
static int_T rt_LoggedStateIdxList [ ] = { 4 , 3 , 2 } ;
#ifndef HOST_CAPI_BUILD
static void DZ_DSMC_InitializeDataAddr ( void * dataAddr [ ] , dejgxakak5 *
localDW ) { dataAddr [ 0 ] = ( void * ) ( & localDW -> bdafkigi1z [ 0 ] ) ;
dataAddr [ 1 ] = ( void * ) ( & localDW -> hirt5tdci2 ) ; dataAddr [ 2 ] = (
void * ) ( & localDW -> c01aucwcgj [ 0 ] ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void DZ_DSMC_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] ) {
vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void DZ_DSMC_InitializeLoggingFunctions ( RTWLoggingFcnPtr loggingPtrs
[ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL ) ;
loggingPtrs [ 2 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "float" ,
"real32_T" , 0 , 0 , sizeof ( real32_T ) , ( uint8_T ) SS_SINGLE , 0 , 0 , 0
} } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 10 ,
1 , 1 , 1 , 2 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.015 ,
0.0 } ; static rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 4 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 3 ] ; static
rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 3 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 3 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 1212777027U , 1105963472U , 409754179U , 348297450U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * DZ_DSMC_GetCAPIStaticMap ( void ) { return &
mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void DZ_DSMC_InitializeSystemRan ( fvmmfyrjw1 * const hl4iwqr41h ,
sysRanDType * systemRan [ ] , dejgxakak5 * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( hl4iwqr41h ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ;
systemTid [ 1 ] = hl4iwqr41h -> Timing . mdlref_GlobalTID [ 4 ] ; systemTid [
2 ] = hl4iwqr41h -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] =
rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ;
rtContextSystems [ 2 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void DZ_DSMC_InitializeDataMapInfo ( fvmmfyrjw1 * const hl4iwqr41h ,
dejgxakak5 * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( hl4iwqr41h -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( hl4iwqr41h -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( hl4iwqr41h -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; DZ_DSMC_InitializeDataAddr ( hl4iwqr41h ->
DataMapInfo . dataAddress , localDW ) ; rtwCAPI_SetDataAddressMap (
hl4iwqr41h -> DataMapInfo . mmi , hl4iwqr41h -> DataMapInfo . dataAddress ) ;
DZ_DSMC_InitializeVarDimsAddr ( hl4iwqr41h -> DataMapInfo . vardimsAddress )
; rtwCAPI_SetVarDimsAddressMap ( hl4iwqr41h -> DataMapInfo . mmi , hl4iwqr41h
-> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath ( hl4iwqr41h ->
DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath ( hl4iwqr41h ->
DataMapInfo . mmi , ( NULL ) ) ; DZ_DSMC_InitializeLoggingFunctions (
hl4iwqr41h -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs (
hl4iwqr41h -> DataMapInfo . mmi , hl4iwqr41h -> DataMapInfo . loggingPtrs ) ;
rtwCAPI_SetInstanceLoggingInfo ( hl4iwqr41h -> DataMapInfo . mmi , &
hl4iwqr41h -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
hl4iwqr41h -> DataMapInfo . mmi , hl4iwqr41h -> DataMapInfo . childMMI ) ;
rtwCAPI_SetChildMMIArrayLen ( hl4iwqr41h -> DataMapInfo . mmi , 1 ) ;
DZ_DSMC_InitializeSystemRan ( hl4iwqr41h , hl4iwqr41h -> DataMapInfo .
systemRan , localDW , hl4iwqr41h -> DataMapInfo . systemTid , sysRanPtr ,
contextTid ) ; rtwCAPI_SetSystemRan ( hl4iwqr41h -> DataMapInfo . mmi ,
hl4iwqr41h -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( hl4iwqr41h
-> DataMapInfo . mmi , hl4iwqr41h -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( hl4iwqr41h -> DataMapInfo . mmi , & hl4iwqr41h ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void DZ_DSMC_host_InitializeDataMapInfo ( DZ_DSMC_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; dataMap -> childMMI [ 0 ] = & ( dataMap -> child0 . mmi ) ;
Motor_and_Driver_host_InitializeDataMapInfo ( & ( dataMap -> child0 ) ,
"DZ_DSMC/Variant Subsystem2/High-fidelity model/Model" ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , dataMap -> childMMI ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 1 ) ; }
#ifdef __cplusplus
}
#endif
#endif
