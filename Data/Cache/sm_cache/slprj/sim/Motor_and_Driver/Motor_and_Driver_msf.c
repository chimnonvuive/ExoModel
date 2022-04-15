#if !defined(S_FUNCTION_NAME)
#define S_FUNCTION_NAME Motor_and_Driver_msf
#endif
#define S_FUNCTION_LEVEL 2
#if !defined(RTW_GENERATED_S_FUNCTION)
#define RTW_GENERATED_S_FUNCTION
#endif
#include <stdio.h>
#include <math.h>
#include "simstruc.h"
#include "fixedpoint.h"
#include "mwstringutil.h"
#define rt_logging_h
#include "Motor_and_Driver_types.h"
#include "Motor_and_Driver.h"
#include "Motor_and_Driver_private.h"
real_T rtP_x520886_ICont ; real_T rtP_x607325_RotIner ; real_T
rtP_x607325_RotOmgMax ; real_T rtP_x607325_Torq ; real_T
rtP_x607325_TorqConst ; real_T rtP_x607325_VNom ; real32_T
rtP_x28_000006_reduction ; const char * rt_GetMatSignalLoggingFileName ( void
) { return NULL ; } const char * rt_GetMatSigLogSelectorFileName ( void ) {
return NULL ; } void * rt_GetOSigstreamManager ( void ) { return NULL ; }
void * rt_slioCatalogue ( void ) { return NULL ; } void *
rtwGetPointerFromUniquePtr ( void * uniquePtr ) { return NULL ; } void *
CreateDiagnosticAsVoidPtr ( const char * id , int nargs , ... ) { void *
voidPtrDiagnostic = NULL ; va_list args ; va_start ( args , nargs ) ;
slmrCreateDiagnostic ( id , nargs , args , & voidPtrDiagnostic ) ; va_end (
args ) ; return voidPtrDiagnostic ; } void rt_ssSet_slErrMsg ( void * S ,
void * diag ) { SimStruct * simStrcut = ( SimStruct * ) S ; if ( !
_ssIsErrorStatusAslErrMsg ( simStrcut ) ) { _ssSet_slLocalErrMsg ( simStrcut
, diag ) ; } else { _ssDiscardDiagnostic ( simStrcut , diag ) ; } } void
rt_ssReportDiagnosticAsWarning ( void * S , void * diag ) {
_ssReportDiagnosticAsWarning ( ( SimStruct * ) S , diag ) ; } void
rt_ssReportDiagnosticAsInfo ( void * S , void * diag ) {
_ssReportDiagnosticAsInfo ( ( SimStruct * ) S , diag ) ; } const char *
rt_CreateFullPathToTop ( const char * toppath , const char * subpath ) { char
* fullpath = NULL ; slmrCreateFullPathToTop ( toppath , subpath , & fullpath
) ; return fullpath ; } boolean_T slIsRapidAcceleratorSimulating ( void ) {
return false ; } void rt_RAccelReplaceFromFilename ( const char * blockpath ,
char * fileName ) { ( void ) blockpath ; ( void ) fileName ; } void
rt_RAccelReplaceToFilename ( const char * blockpath , char * fileName ) { (
void ) blockpath ; ( void ) fileName ; } void
slsaCacheDWorkPointerForSimTargetOP ( void * ss , void * * ptr ) { ( void )
ss ; ( void ) ptr ; } void slsaCacheDWorkDataForSimTargetOP ( void * ss ,
void * ptr , unsigned int sizeInBytes ) { ( void ) ss ; ( void ) ptr ; ( void
) sizeInBytes ; } void slsaSaveRawMemoryForSimTargetOP ( void * ss , const
char * key , void * ptr , unsigned int sizeInBytes , void * ( *
customOPSaveFcn ) ( void * dworkPtr , unsigned int * sizeInBytes ) , void ( *
customOPRestoreFcn ) ( void * dworkPtr , const void * data , unsigned int
sizeInBytes ) ) { ( void ) ss ; ( void ) key ; ( void ) ptr ; ( void )
sizeInBytes ; ( void ) customOPSaveFcn ; ( void ) customOPRestoreFcn ; }
#define MDL_PROCESS_PARAMETERS
#if defined(MATLAB_MEX_FILE)
static void mdlProcessParameters ( SimStruct * S ) { real_T * GlobalPrm_0 = (
real_T * ) NULL ; real_T * GlobalPrm_1 = ( real_T * ) NULL ; real_T *
GlobalPrm_2 = ( real_T * ) NULL ; real_T * GlobalPrm_3 = ( real_T * ) NULL ;
real_T * GlobalPrm_4 = ( real_T * ) NULL ; real_T * GlobalPrm_5 = ( real_T *
) NULL ; real32_T * GlobalPrm_6 = ( real32_T * ) NULL ; if ( !
ssGetModelRefGlobalParamData ( S , 0 , ( void * * ) ( & GlobalPrm_0 ) ) )
return ; if ( GlobalPrm_0 != NULL ) { ( void ) memcpy ( & ( rtP_x520886_ICont
) , GlobalPrm_0 , sizeof ( real_T ) ) ; } if ( ! ssGetModelRefGlobalParamData
( S , 1 , ( void * * ) ( & GlobalPrm_1 ) ) ) return ; if ( GlobalPrm_1 !=
NULL ) { ( void ) memcpy ( & ( rtP_x607325_RotIner ) , GlobalPrm_1 , sizeof (
real_T ) ) ; } if ( ! ssGetModelRefGlobalParamData ( S , 2 , ( void * * ) ( &
GlobalPrm_2 ) ) ) return ; if ( GlobalPrm_2 != NULL ) { ( void ) memcpy ( & (
rtP_x607325_RotOmgMax ) , GlobalPrm_2 , sizeof ( real_T ) ) ; } if ( !
ssGetModelRefGlobalParamData ( S , 3 , ( void * * ) ( & GlobalPrm_3 ) ) )
return ; if ( GlobalPrm_3 != NULL ) { ( void ) memcpy ( & ( rtP_x607325_Torq
) , GlobalPrm_3 , sizeof ( real_T ) ) ; } if ( ! ssGetModelRefGlobalParamData
( S , 4 , ( void * * ) ( & GlobalPrm_4 ) ) ) return ; if ( GlobalPrm_4 !=
NULL ) { ( void ) memcpy ( & ( rtP_x607325_TorqConst ) , GlobalPrm_4 , sizeof
( real_T ) ) ; } if ( ! ssGetModelRefGlobalParamData ( S , 5 , ( void * * ) (
& GlobalPrm_5 ) ) ) return ; if ( GlobalPrm_5 != NULL ) { ( void ) memcpy ( &
( rtP_x607325_VNom ) , GlobalPrm_5 , sizeof ( real_T ) ) ; } if ( !
ssGetModelRefGlobalParamData ( S , 6 , ( void * * ) ( & GlobalPrm_6 ) ) )
return ; if ( GlobalPrm_6 != NULL ) { ( void ) memcpy ( & (
rtP_x28_000006_reduction ) , GlobalPrm_6 , sizeof ( real32_T ) ) ; } }
#endif
static void mdlInitializeConditions ( SimStruct * S ) { carp3dc4p0e * dw = (
carp3dc4p0e * ) ssGetDWork ( S , 0 ) ; lemmpwcmcz ( & ( dw -> rtb ) , & ( dw
-> rtdw ) ) ; } static void mdlReset ( SimStruct * S ) { carp3dc4p0e * dw = (
carp3dc4p0e * ) ssGetDWork ( S , 0 ) ; i0x5alzcfy ( & ( dw -> rtdw ) ) ; }
static void mdlPeriodicOutputUpdate ( SimStruct * S , int_T tid ) {
carp3dc4p0e * dw = ( carp3dc4p0e * ) ssGetDWork ( S , 0 ) ; real32_T const *
i_dxydr1c4ev = ( real32_T * ) ssGetInputPortSignal ( S , 0 ) ; real32_T *
o_B_4_1 = ( real32_T * ) ssGetOutputPortSignal ( S , 0 ) ; real32_T * o_B_4_2
= ( real32_T * ) ssGetOutputPortSignal ( S , 1 ) ; real32_T * o_B_4_3 = (
real32_T * ) ssGetOutputPortSignal ( S , 2 ) ; real32_T * o_B_4_4 = (
real32_T * ) ssGetOutputPortSignal ( S , 3 ) ; real32_T * o_B_4_5 = (
real32_T * ) ssGetOutputPortSignal ( S , 4 ) ; real32_T * o_B_4_6 = (
real32_T * ) ssGetOutputPortSignal ( S , 5 ) ; if ( tid == 0 ) {
Motor_and_Driver ( & ( dw -> rtm ) , i_dxydr1c4ev , o_B_4_1 , o_B_4_2 ,
o_B_4_3 , o_B_4_4 , o_B_4_5 , o_B_4_6 , & ( dw -> rtb ) , & ( dw -> rtdw ) )
; fhizeznu4p ( & ( dw -> rtm ) , & ( dw -> rtb ) , & ( dw -> rtdw ) ) ; } }
static void mdlInitializeSizes ( SimStruct * S ) { if ( ( S -> mdlInfo ->
genericFcn != ( NULL ) ) && ( ! ( S -> mdlInfo -> genericFcn ) ( S ,
GEN_FCN_CHK_MODELREF_SFUN_HAS_MODEL_BLOCK , - 1 , ( NULL ) ) ) ) { return ; }
ssSetNumSFcnParams ( S , 0 ) ; ssFxpSetU32BitRegionCompliant ( S , 1 ) ;
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; if ( S -> mdlInfo -> genericFcn != (
NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ; }
ssSetRTWGeneratedSFcn ( S , 2 ) ; ssSetNumContStates ( S , 0 ) ;
ssSetNumDiscStates ( S , 0 ) ; ssSetSymbolicDimsSupport ( S , true ) ;
slmrInitializeIOPortDataVectors ( S , 1 , 6 ) ; if ( ! ssSetNumInputPorts ( S
, 1 ) ) return ; if ( ! ssSetInputPortVectorDimension ( S , 0 , 1 ) ) return
; ssSetInputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 0 , SS_SINGLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 0 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 0 , 1 ) ; ssSetInputPortOptimOpts ( S
, 0 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 0 ,
false ) ; ssSetInputPortSampleTime ( S , 0 , 0.015 ) ;
ssSetInputPortOffsetTime ( S , 0 , 0.0 ) ; if ( ! ssSetNumOutputPorts ( S , 6
) ) return ; if ( ! ssSetOutputPortVectorDimension ( S , 0 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 0 , SS_SINGLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 0 , 6.0E-5 ) ; ssSetOutputPortOffsetTime (
S , 0 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 0 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 0 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 0 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 0 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 1 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 1 , SS_SINGLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 1 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 1 , 6.0E-5 ) ; ssSetOutputPortOffsetTime (
S , 1 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 1 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 1 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 1 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 1 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 2 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 2 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 2 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 2 , SS_SINGLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 2 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 2 , 6.0E-5 ) ; ssSetOutputPortOffsetTime (
S , 2 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 2 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 2 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 2 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 2 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 3 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 3 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 3 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 3 , SS_SINGLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 3 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 3 , 6.0E-5 ) ; ssSetOutputPortOffsetTime (
S , 3 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 3 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 3 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 3 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 3 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 4 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 4 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 4 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 4 , SS_SINGLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 4 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 4 , 6.0E-5 ) ; ssSetOutputPortOffsetTime (
S , 4 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 4 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 4 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 4 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 4 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 5 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 5 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 5 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 5 , SS_SINGLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 5 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 5 , 6.0E-5 ) ; ssSetOutputPortOffsetTime (
S , 5 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 5 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 5 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 5 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 5 , SS_NOT_REUSABLE_AND_LOCAL ) ;
ssSetSimStateCompliance ( S , USE_CUSTOM_SIM_STATE ) ;
mr_Motor_and_Driver_RegisterSimStateChecksum ( S ) ; ssSetNumSampleTimes ( S
, 5 ) ; ssSetParameterTuningCompliance ( S , true ) ; ssSetNumRWork ( S , 0 )
; ssSetNumIWork ( S , 0 ) ; ssSetNumPWork ( S , 0 ) ; ssSetNumModes ( S , 0 )
; { int_T zcsIdx = 0 ; } ssSetOutputPortIsNonContinuous ( S , 0 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 0 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 1 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 1 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 2 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 2 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 3 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 3 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 4 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 4 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 5 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 5 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 0 , 1 ) ;
ssSetModelReferenceSampleTimeInheritanceRule ( S ,
DISALLOW_SAMPLE_TIME_INHERITANCE ) ; ssSetAcceptsFcnCallInputs ( S ) ;
ssSetModelReferenceNormalModeSupport ( S ,
MDL_START_AND_MDL_PROCESS_PARAMS_OK ) ; ssSupportsMultipleExecInstances ( S ,
true ) ; ssHasStateInsideForEachSS ( S , false ) ; ssSetOptions ( S ,
SS_OPTION_ALLOW_CONSTANT_PORT_SAMPLE_TIME |
SS_OPTION_PORT_SAMPLE_TIMES_ASSIGNED | SS_OPTION_SUPPORTS_ALIAS_DATA_TYPES |
SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME | SS_OPTION_EXCEPTION_FREE_CODE |
SS_OPTION_WORKS_WITH_CODE_REUSE ) ;
#if SS_SFCN_FOR_SIM
if ( S -> mdlInfo -> genericFcn != ( NULL ) && ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { int_T retVal = 1 ;
mr_Motor_and_Driver_MdlInfoRegFcn ( S , "Motor_and_Driver" , & retVal ) ; if
( ! retVal ) return ; }
#endif
#if SS_SFCN_FOR_SIM
if ( ssSetNumDWork ( S , 1 ) ) { int mdlrefDWTypeId ; ssRegMdlRefDWorkType (
S , & mdlrefDWTypeId ) ; if ( mdlrefDWTypeId == INVALID_DTYPE_ID ) return ;
if ( ! ssSetDataTypeSize ( S , mdlrefDWTypeId , sizeof ( carp3dc4p0e ) ) )
return ; ssSetDWorkDataType ( S , 0 , mdlrefDWTypeId ) ; ssSetDWorkWidth ( S
, 0 , 1 ) ; }
#else
if ( ! ssSetNumDWork ( S , 1 ) ) { return ; }
#endif
slmrRegisterSystemInitializeMethod ( S , mdlInitializeConditions ) ;
slmrRegisterSystemResetMethod ( S , mdlReset ) ;
slmrRegisterPeriodicOutputUpdateMethod ( S , mdlPeriodicOutputUpdate ) ;
ssSetSimulinkVersionGeneratedIn ( S , "10.4" ) ; ssSetNeedAbsoluteTime ( S ,
1 ) ; } static void mdlInitializeSampleTimes ( SimStruct * S ) {
ssSetSampleTime ( S , 0 , 2e-05 ) ; ssSetOffsetTime ( S , 0 , 0 ) ;
ssSetSampleTime ( S , 1 , 6e-05 ) ; ssSetOffsetTime ( S , 1 , 0 ) ;
ssSetSampleTime ( S , 2 , 0.0004 ) ; ssSetOffsetTime ( S , 2 , 0 ) ;
ssSetSampleTime ( S , 3 , 0.015 ) ; ssSetOffsetTime ( S , 3 , 0 ) ;
ssSetSampleTime ( S , 4 , mxGetInf ( ) ) ; ssSetOffsetTime ( S , 4 , 0 ) ;
return ; }
#define MDL_SET_WORK_WIDTHS
static void mdlSetWorkWidths ( SimStruct * S ) { if ( S -> mdlInfo ->
genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ;
ssSetSignalSizesComputeType ( S , SS_VARIABLE_SIZE_FROM_INPUT_VALUE_AND_SIZE
) ; } { static const char * toFileNames [ ] = { "" } ; static const char *
fromFileNames [ ] = { "" } ; if ( ! ssSetModelRefFromFiles ( S , 0 ,
fromFileNames ) ) return ; if ( ! ssSetModelRefToFiles ( S , 0 , toFileNames
) ) return ; } }
#define MDL_SETUP_RUNTIME_RESOURCES
static void mdlSetupRuntimeResources ( SimStruct * S ) { carp3dc4p0e * dw = (
carp3dc4p0e * ) ssGetDWork ( S , 0 ) ; void * sysRanPtr = ( NULL ) ; int
sysTid = 0 ; ssGetContextSysRanBCPtr ( S , & sysRanPtr ) ; ssGetContextSysTid
( S , & sysTid ) ; if ( sysTid == CONSTANT_TID ) { sysTid = 0 ; } fusa1jep2f
( S , slmrGetTopTidFromMdlRefChildTid ( S , 0 , false ) ,
slmrGetTopTidFromMdlRefChildTid ( S , 1 , false ) ,
slmrGetTopTidFromMdlRefChildTid ( S , 2 , false ) ,
slmrGetTopTidFromMdlRefChildTid ( S , 3 , false ) ,
slmrGetTopTidFromMdlRefChildTid ( S , 4 , true ) , & ( dw -> rtm ) , & ( dw
-> rtb ) , & ( dw -> rtdw ) , sysRanPtr , sysTid , ( ( NULL ) ) , ( ( NULL )
) , 0 , - 1 ) ; ssSetModelMappingInfoPtr ( S , & ( dw -> rtm . DataMapInfo .
mmi ) ) ; if ( S -> mdlInfo -> genericFcn != ( NULL ) ) { _GenericFcn fcn = S
-> mdlInfo -> genericFcn ; } jyhh3oc42w ( & ( dw -> rtm ) , & ( dw -> rtdw )
) ; }
#define MDL_START
static void mdlStart ( SimStruct * S ) { carp3dc4p0e * dw = ( carp3dc4p0e * )
ssGetDWork ( S , 0 ) ; mdlProcessParameters ( S ) ; icyzbmak44 ( & ( dw ->
rtm ) , & ( dw -> rtdw ) ) ; } static void mdlOutputs ( SimStruct * S , int_T
tid ) { carp3dc4p0e * dw = ( carp3dc4p0e * ) ssGetDWork ( S , 0 ) ; real32_T
const * i_dxydr1c4ev = ( real32_T * ) ssGetInputPortSignal ( S , 0 ) ;
real32_T * o_B_4_1 = ( real32_T * ) ssGetOutputPortSignal ( S , 0 ) ;
real32_T * o_B_4_2 = ( real32_T * ) ssGetOutputPortSignal ( S , 1 ) ;
real32_T * o_B_4_3 = ( real32_T * ) ssGetOutputPortSignal ( S , 2 ) ;
real32_T * o_B_4_4 = ( real32_T * ) ssGetOutputPortSignal ( S , 3 ) ;
real32_T * o_B_4_5 = ( real32_T * ) ssGetOutputPortSignal ( S , 4 ) ;
real32_T * o_B_4_6 = ( real32_T * ) ssGetOutputPortSignal ( S , 5 ) ; if (
tid == PARAMETER_TUNING_TID ) { Motor_and_DriverTID4 ( & ( dw -> rtb ) ) ; }
if ( tid != CONSTANT_TID && tid != PARAMETER_TUNING_TID ) { Motor_and_Driver
( & ( dw -> rtm ) , i_dxydr1c4ev , o_B_4_1 , o_B_4_2 , o_B_4_3 , o_B_4_4 ,
o_B_4_5 , o_B_4_6 , & ( dw -> rtb ) , & ( dw -> rtdw ) ) ; } }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { carp3dc4p0e * dw = (
carp3dc4p0e * ) ssGetDWork ( S , 0 ) ; fhizeznu4p ( & ( dw -> rtm ) , & ( dw
-> rtb ) , & ( dw -> rtdw ) ) ; return ; } static void mdlTerminate (
SimStruct * S ) { carp3dc4p0e * dw = ( carp3dc4p0e * ) ssGetDWork ( S , 0 ) ;
glspqvidja ( & ( dw -> rtdw ) , & ( dw -> rtm ) ) ; return ; }
#define MDL_CLEANUP_RUNTIME_RESOURCES
static void mdlCleanupRuntimeResources ( SimStruct * S ) { carp3dc4p0e * dw =
( carp3dc4p0e * ) ssGetDWork ( S , 0 ) ; efqaccisye ( & ( dw -> rtm ) , & (
dw -> rtdw ) ) ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static mxArray * mdlGetSimState ( SimStruct * S ) { static const char *
simStateFieldNames [ 6 ] = { "localX" , "mdlrefDW" , "disallowedStateData" ,
"tNext" , "tNextTid" , "nonContDerivSigInfoPrevVal" , } ; mxArray * ss =
mxCreateStructMatrix ( 1 , 1 , 6 , simStateFieldNames ) ; { mxArray *
mdlrefDW = mr_Motor_and_Driver_GetDWork ( ssGetDWork ( S , 0 ) ) ;
mxSetFieldByNumber ( ss , 0 , 1 , mdlrefDW ) ; } { mxArray * data =
mr_Motor_and_Driver_GetSimStateDisallowedBlocks ( ) ; mxSetFieldByNumber ( ss
, 0 , 2 , data ) ; } ; mxSetFieldByNumber ( ss , 0 , 3 , mxCreateDoubleScalar
( ( double ) ssGetTNext ( S ) ) ) ; mxSetFieldByNumber ( ss , 0 , 4 ,
mxCreateDoubleScalar ( ( double ) ssGetTNextTid ( S ) ) ) ; return ss ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static void mdlSetSimState ( SimStruct * S , const mxArray * ss ) {
mr_Motor_and_Driver_SetDWork ( ssGetDWork ( S , 0 ) , mxGetFieldByNumber ( ss
, 0 , 1 ) ) ; ssSetTNext ( S , ( time_T ) mxGetScalar ( mxGetFieldByNumber (
ss , 0 , 3 ) ) ) ; ssSetTNextTid ( S , ( int_T ) mxGetScalar (
mxGetFieldByNumber ( ss , 0 , 4 ) ) ) ; }
#ifdef MATLAB_MEX_FILE 
#include "simulink.c"
#include "fixedpoint.c"
#else
#error Assertion failed: file must be compiled as a MEX-file
#endif
