#include "Motor_and_Driver_capi.h"
#include "Motor_and_Driver.h"
#include "Motor_and_Driver_private.h"
static RegMdlInfo rtMdlInfo_Motor_and_Driver [ 44 ] = { { "carp3dc4p0e" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "Motor_and_Driver" } , {
"l53rn4x1nv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Motor_and_Driver" } , { "mgc4zzshpz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Motor_and_Driver" } , { "fzbxhqa4lc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Motor_and_Driver" }
, { "hdityrkelo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Motor_and_Driver" } , { "nll42eg3gz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Motor_and_Driver" } , { "ewm2cs5rhe" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Motor_and_Driver" }
, { "dzkwj311cd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Motor_and_Driver" } , { "dprviqg5gt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Motor_and_Driver" } , { "cj1bsgnlgu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Motor_and_Driver" }
, { "f0gwcwqpjp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Motor_and_Driver" } , { "cgdhmfwzr2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Motor_and_Driver" } , { "an3ws3rp20" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Motor_and_Driver" }
, { "newmk5ltqt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Motor_and_Driver" } , { "mj55bylfdn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Motor_and_Driver" } , { "glspqvidja" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Motor_and_Driver" }
, { "efqaccisye" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Motor_and_Driver" } , { "izqvkwvmsn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Motor_and_Driver" } , { "fhizeznu4p" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Motor_and_Driver" }
, { "i0x5alzcfy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Motor_and_Driver" } , { "lemmpwcmcz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Motor_and_Driver" } , { "fusa1jep2f" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Motor_and_Driver" }
, { "icyzbmak44" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Motor_and_Driver" } , { "jyhh3oc42w" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Motor_and_Driver" } , { "Motor_and_Driver" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "e3po5gnfbv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Motor_and_Driver" }
, { "c45rvfusmj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Motor_and_Driver" } , { "jqmbuwnn4r" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "Motor_and_Driver" } , { "motorInfo" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "RespSignal" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_Motor_and_Driver_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Motor_and_Driver" } , {
"mr_Motor_and_Driver_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Motor_and_Driver" } , {
"mr_Motor_and_Driver_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Motor_and_Driver" } , {
"mr_Motor_and_Driver_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Motor_and_Driver" } , {
"mr_Motor_and_Driver_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Motor_and_Driver" } , {
"mr_Motor_and_Driver_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "Motor_and_Driver" } , {
"mr_Motor_and_Driver_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "Motor_and_Driver" } , {
"mr_Motor_and_Driver_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "Motor_and_Driver" } , {
"mr_Motor_and_Driver_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "Motor_and_Driver" } , {
"mr_Motor_and_Driver_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "Motor_and_Driver" } , { "mr_Motor_and_Driver_SetDWork"
, MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Motor_and_Driver" } , {
"mr_Motor_and_Driver_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "Motor_and_Driver" } , { "Motor_and_Driver.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "Motor_and_Driver.c" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "Motor_and_Driver" } } ;
gcdnwszwdjd gcdnwszwdj = { 0.0 , 80.0 , 0.0 , 331.789 , 2.875397 , 0.523 ,
0.0 , 0.0 , - 1.0 , 0.0 , 0.0 , 0.0 , 6.0E-5 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0004 , 0.0 , 0.0004 , 0.0 , 0.0 , 0.0004 , 0.0 , 0.0 , 0.0 ,
9.5492965855137211 , 0.015 , 0.0 , - 273.15 , 1000.0 , 0.10471975511965977 ,
0.0 , 369404.0 , 466187.0 , 2.3963356E+7 , 775467.0 , 0.0 , 4.378489E+6 ,
69523.0 , 152443.0 , 1.0E-7 , 0.0F , 0.0F , false } ; void jyhh3oc42w (
jqmbuwnn4r * const n4f1kxfugf , an3ws3rp20 * localDW ) { if ( ( ssGetSimMode
( n4f1kxfugf -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( n4f1kxfugf ->
_mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( n4f1kxfugf ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( n4f1kxfugf
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Motor_and_Driver/Gain" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiDims forEachMdlRefDims ; int_T forEachMdlRefDimsArray
[ 32 ] ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncQueueHandle hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; {
sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1
; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( n4f1kxfugf
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , n4f1kxfugf ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> dkms3ioakc . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , n4f1kxfugf -> DataMapInfo
. mmi . InstanceMap . fullPath , "cb3c4fb4-8215-4d38-b219-055660ced52c" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if (
localDW -> dkms3ioakc . AQHandles ) { sdiSetSignalSampleTimeString ( localDW
-> dkms3ioakc . AQHandles , "0.015" , 0.015 , rtmGetTFinal ( n4f1kxfugf ) ) ;
sdiSetRunStartTime ( localDW -> dkms3ioakc . AQHandles , rtmGetTaskTime (
n4f1kxfugf , 3 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
dkms3ioakc . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> dkms3ioakc . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> dkms3ioakc . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( n4f1kxfugf ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( n4f1kxfugf -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( n4f1kxfugf ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( n4f1kxfugf
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Motor_and_Driver/Visualization/From" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_SINGLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; if ( slIsRapidAcceleratorSimulating (
) ) { forEachMdlRefDims . nDims = 0 ; } else { forEachMdlRefDims . nDims =
slSigLogGetForEachDimsForRefModel ( n4f1kxfugf -> _mdlRefSfcnS ,
forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , n4f1kxfugf ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> d1cf0p4sh4 . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , n4f1kxfugf -> DataMapInfo
. mmi . InstanceMap . fullPath , "1de65734-e977-4743-8271-33a742bb7ce8" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "rad/s" ) ; if (
localDW -> d1cf0p4sh4 . AQHandles ) { sdiSetSignalSampleTimeString ( localDW
-> d1cf0p4sh4 . AQHandles , "6e-05" , 6.0E-5 , rtmGetTFinal ( n4f1kxfugf ) )
; sdiSetRunStartTime ( localDW -> d1cf0p4sh4 . AQHandles , rtmGetTaskTime (
n4f1kxfugf , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
d1cf0p4sh4 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> d1cf0p4sh4 . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> d1cf0p4sh4 . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } } void lemmpwcmcz ( newmk5ltqt *
localB , an3ws3rp20 * localDW ) { localDW -> j2msih40xc [ 0 ] = gcdnwszwdj .
P_17 ; localDW -> i5crktpmac = 0 ; localDW -> ahxn11a4uj = gcdnwszwdj . P_18
; localDW -> bntadq01i0 = gcdnwszwdj . P_7 ; localDW -> dmbqlo45q2 [ 0 ] =
gcdnwszwdj . P_23 ; localDW -> hiespqskmp = 0 ; localDW -> mxqbsawplp = 0 ;
localDW -> lbowrmd5fw [ 0 ] = gcdnwszwdj . P_50 ; localDW -> bi1icpowut = 0 ;
localDW -> ju5h25lyet = 0 ; localDW -> cpxr54tl5g [ 0 ] = gcdnwszwdj . P_24 ;
localDW -> cpxr54tl5g [ 1 ] = gcdnwszwdj . P_24 ; localDW -> cpxr54tl5g [ 2 ]
= gcdnwszwdj . P_24 ; localDW -> mdhhylhwlg = 0 ; localDW -> adf5pho5oy =
gcdnwszwdj . P_51 ; localDW -> d5ykmtl1o3 = gcdnwszwdj . P_26 ; localDW ->
ntyeyxcpzv = gcdnwszwdj . P_28 ; localDW -> iyvf0cfvz1 = gcdnwszwdj . P_29 ;
localDW -> a1yzcpvsyb = gcdnwszwdj . P_31 ; localDW -> o33esxcr4d =
gcdnwszwdj . P_32 ; localDW -> pxhqr4cb2p = gcdnwszwdj . P_52 ; localDW ->
ldgv3mxr0m = gcdnwszwdj . P_36 ; localDW -> aayofnyfma [ 0 ] = gcdnwszwdj .
P_40 ; localDW -> paq0gh0ddd = 0 ; localB -> h2wq0gdhph = gcdnwszwdj . P_21 ;
localB -> beh1jyo0lg = gcdnwszwdj . P_22 ; } void i0x5alzcfy ( an3ws3rp20 *
localDW ) { localDW -> j2msih40xc [ 0 ] = gcdnwszwdj . P_17 ; localDW ->
i5crktpmac = 0 ; localDW -> ahxn11a4uj = gcdnwszwdj . P_18 ; localDW ->
bntadq01i0 = gcdnwszwdj . P_7 ; localDW -> dmbqlo45q2 [ 0 ] = gcdnwszwdj .
P_23 ; localDW -> hiespqskmp = 0 ; localDW -> mxqbsawplp = 0 ; localDW ->
lbowrmd5fw [ 0 ] = gcdnwszwdj . P_50 ; localDW -> bi1icpowut = 0 ; localDW ->
ju5h25lyet = 0 ; localDW -> cpxr54tl5g [ 0 ] = gcdnwszwdj . P_24 ; localDW ->
cpxr54tl5g [ 1 ] = gcdnwszwdj . P_24 ; localDW -> cpxr54tl5g [ 2 ] =
gcdnwszwdj . P_24 ; localDW -> mdhhylhwlg = 0 ; localDW -> adf5pho5oy =
gcdnwszwdj . P_51 ; localDW -> d5ykmtl1o3 = gcdnwszwdj . P_26 ; localDW ->
ntyeyxcpzv = gcdnwszwdj . P_28 ; localDW -> iyvf0cfvz1 = gcdnwszwdj . P_29 ;
localDW -> a1yzcpvsyb = gcdnwszwdj . P_31 ; localDW -> o33esxcr4d =
gcdnwszwdj . P_32 ; localDW -> pxhqr4cb2p = gcdnwszwdj . P_52 ; localDW ->
ldgv3mxr0m = gcdnwszwdj . P_36 ; localDW -> aayofnyfma [ 0 ] = gcdnwszwdj .
P_40 ; localDW -> paq0gh0ddd = 0 ; } void icyzbmak44 ( jqmbuwnn4r * const
n4f1kxfugf , an3ws3rp20 * localDW ) { NeModelParameters modelParameters ;
NeModelParameters modelParameters_p ; NeslSimulationData * tmp_e ;
NeslSimulator * tmp ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree * diagnosticTree_p ;
char * msg ; char * msg_p ; real_T tmp_i ; int32_T tmp_m ; boolean_T tmp_p ;
boolean_T val ; tmp = nesl_lease_simulator (
"Motor_and_Driver/Solver Configuration_1" , 0 , 0 ) ; localDW -> huu4fzhbm1 =
( void * ) tmp ; tmp_p = pointer_is_null ( localDW -> huu4fzhbm1 ) ; if (
tmp_p ) { Motor_and_Driver_678d4e8_1_gateway ( ) ; tmp = nesl_lease_simulator
( "Motor_and_Driver/Solver Configuration_1" , 0 , 0 ) ; localDW -> huu4fzhbm1
= ( void * ) tmp ; } slsaSaveRawMemoryForSimTargetOP ( n4f1kxfugf ->
_mdlRefSfcnS , "Motor_and_Driver/Solver Configuration_100" , ( void * * ) ( &
localDW -> huu4fzhbm1 ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; tmp_e = nesl_create_simulation_data ( ) ; localDW ->
kadxlamyjz = ( void * ) tmp_e ; diagnosticManager = rtw_create_diagnostics (
) ; localDW -> k25q3biwpn = ( void * ) diagnosticManager ; modelParameters .
mSolverType = NE_SOLVER_TYPE_DISCRETE ; modelParameters . mSolverTolerance =
0.001 ; modelParameters . mVariableStepSolver = false ; modelParameters .
mIsUsingODEN = false ; modelParameters . mFixedStepSize = 0.001 ;
modelParameters . mStartTime = 0.0 ; modelParameters . mLoadInitialState =
false ; modelParameters . mUseSimState = false ; modelParameters .
mLinTrimCompile = false ; modelParameters . mLoggingMode = SSC_LOGGING_NONE ;
modelParameters . mRTWModifiedTimeStamp = 5.71940484E+8 ; modelParameters .
mZcDisabled = false ; tmp_i = 0.001 ; modelParameters . mSolverTolerance =
tmp_i ; tmp_i = 2.0E-5 ; modelParameters . mFixedStepSize = tmp_i ; tmp_p =
false ; modelParameters . mVariableStepSolver = tmp_p ; tmp_p = false ;
modelParameters . mIsUsingODEN = tmp_p ; val = false ; tmp_p =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp_p ) { tmp_p =
ssGetGlobalInitialStatesAvailable ( n4f1kxfugf -> _mdlRefSfcnS ) ; val =
tmp_p & rtmIsFirstInitCond ( n4f1kxfugf ) ; } modelParameters .
mLoadInitialState = val ; modelParameters . mZcDisabled = true ;
diagnosticManager = ( NeuDiagnosticManager * ) localDW -> k25q3biwpn ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) localDW ->
huu4fzhbm1 , & modelParameters , diagnosticManager ) ; if ( tmp_m != 0 ) {
tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( n4f1kxfugf -> _mdlRefSfcnS
) ) ; if ( tmp_p ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( n4f1kxfugf -> _mdlRefSfcnS , msg ) ; } } tmp =
nesl_lease_simulator ( "Motor_and_Driver/Solver Configuration_1" , 1 , 0 ) ;
localDW -> ezwrjgfnd4 = ( void * ) tmp ; tmp_p = pointer_is_null ( localDW ->
ezwrjgfnd4 ) ; if ( tmp_p ) { Motor_and_Driver_678d4e8_1_gateway ( ) ; tmp =
nesl_lease_simulator ( "Motor_and_Driver/Solver Configuration_1" , 1 , 0 ) ;
localDW -> ezwrjgfnd4 = ( void * ) tmp ; } slsaSaveRawMemoryForSimTargetOP (
n4f1kxfugf -> _mdlRefSfcnS , "Motor_and_Driver/Solver Configuration_110" , (
void * * ) ( & localDW -> ezwrjgfnd4 ) , 0U * sizeof ( real_T ) ,
nesl_save_simdata , nesl_restore_simdata ) ; tmp_e =
nesl_create_simulation_data ( ) ; localDW -> pa2vb3qro5 = ( void * ) tmp_e ;
diagnosticManager = rtw_create_diagnostics ( ) ; localDW -> hjw13xaqv4 = (
void * ) diagnosticManager ; modelParameters_p . mSolverType =
NE_SOLVER_TYPE_DISCRETE ; modelParameters_p . mSolverTolerance = 0.001 ;
modelParameters_p . mVariableStepSolver = false ; modelParameters_p .
mIsUsingODEN = false ; modelParameters_p . mFixedStepSize = 0.001 ;
modelParameters_p . mStartTime = 0.0 ; modelParameters_p . mLoadInitialState
= false ; modelParameters_p . mUseSimState = false ; modelParameters_p .
mLinTrimCompile = false ; modelParameters_p . mLoggingMode = SSC_LOGGING_NONE
; modelParameters_p . mRTWModifiedTimeStamp = 5.71940484E+8 ;
modelParameters_p . mZcDisabled = false ; tmp_i = 0.001 ; modelParameters_p .
mSolverTolerance = tmp_i ; tmp_i = 2.0E-5 ; modelParameters_p .
mFixedStepSize = tmp_i ; tmp_p = false ; modelParameters_p .
mVariableStepSolver = tmp_p ; tmp_p = false ; modelParameters_p .
mIsUsingODEN = tmp_p ; val = false ; tmp_p = slIsRapidAcceleratorSimulating (
) ; if ( tmp_p ) { tmp_p = ssGetGlobalInitialStatesAvailable ( n4f1kxfugf ->
_mdlRefSfcnS ) ; val = tmp_p & rtmIsFirstInitCond ( n4f1kxfugf ) ; }
modelParameters_p . mLoadInitialState = val ; modelParameters_p . mZcDisabled
= true ; diagnosticManager = ( NeuDiagnosticManager * ) localDW -> hjw13xaqv4
; diagnosticTree_p = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * )
localDW -> ezwrjgfnd4 , & modelParameters_p , diagnosticManager ) ; if (
tmp_m != 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( n4f1kxfugf
-> _mdlRefSfcnS ) ) ; if ( tmp_p ) { msg_p = rtw_diagnostics_msg (
diagnosticTree_p ) ; ssSetErrorStatus ( n4f1kxfugf -> _mdlRefSfcnS , msg_p )
; } } } void Motor_and_Driver ( jqmbuwnn4r * const n4f1kxfugf , const
real32_T * oscxqmx0zv , real32_T * peoowe2dcb , real32_T * jl14elai0k ,
real32_T * m2stjjg02g , real32_T * lztr0ojbkn , real32_T * idlzyauu4m ,
real32_T * l0v2lexcb2 , newmk5ltqt * localB , an3ws3rp20 * localDW ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree *
diagnosticTree_p ; char * msg ; char * msg_p ; real_T tmp_m [ 25 ] ; real_T
tmp_p [ 8 ] ; real_T afmyebfqa1 [ 6 ] ; real_T ctksyvjlvu ; real_T dqaqj3pyh1
; real_T hind1bj11o ; real_T jrtl0h20ox ; real_T kn0kjutenq ; real_T time ;
real_T time_p ; real_T tmp_f ; real_T tmp_j ; int32_T tmp_i ; int_T tmp_g [ 4
] ; int_T tmp_e [ 3 ] ; real32_T nj2vuklq4b ; real32_T nmcftkm3be ; real32_T
nto0l3jv1g ; real32_T oemymsp44q ; boolean_T tmp ; if ( rtmIsSampleHit (
n4f1kxfugf , 1 , 0 ) ) { jrtl0h20ox = localDW -> j2msih40xc [ localDW ->
i5crktpmac ] ; ctksyvjlvu = localDW -> ahxn11a4uj ; kn0kjutenq = jrtl0h20ox -
ctksyvjlvu ; jrtl0h20ox = kn0kjutenq * localB -> coz0wgohpd + localDW ->
bntadq01i0 ; if ( jrtl0h20ox > rtP_x607325_VNom ) { dqaqj3pyh1 = jrtl0h20ox -
rtP_x607325_VNom ; } else if ( jrtl0h20ox >= - rtP_x607325_VNom ) {
dqaqj3pyh1 = 0.0 ; } else { dqaqj3pyh1 = jrtl0h20ox - ( - rtP_x607325_VNom )
; } kn0kjutenq *= localB -> blvifzpbzh ; tmp_j = muDoubleScalarSign (
dqaqj3pyh1 ) ; if ( muDoubleScalarIsNaN ( tmp_j ) ) { tmp_j = 0.0 ; } else {
tmp_j = muDoubleScalarRem ( tmp_j , 256.0 ) ; } tmp_f = muDoubleScalarSign (
kn0kjutenq ) ; if ( muDoubleScalarIsNaN ( tmp_f ) ) { tmp_f = 0.0 ; } else {
tmp_f = muDoubleScalarRem ( tmp_f , 256.0 ) ; } if ( ( boolean_T ) ( (
gcdnwszwdj . P_20 * jrtl0h20ox != dqaqj3pyh1 ) & ( ( tmp_j < 0.0 ? ( int32_T
) ( int8_T ) - ( int8_T ) ( uint8_T ) - tmp_j : ( int32_T ) ( int8_T ) (
uint8_T ) tmp_j ) == ( tmp_f < 0.0 ? ( int32_T ) ( int8_T ) - ( int8_T ) (
uint8_T ) - tmp_f : ( int32_T ) ( int8_T ) ( uint8_T ) tmp_f ) ) ) ) { localB
-> g4rfzbmv2r = gcdnwszwdj . P_16 ; } else { localB -> g4rfzbmv2r =
kn0kjutenq ; } if ( jrtl0h20ox > rtP_x607325_VNom ) { jrtl0h20ox =
rtP_x607325_VNom ; } else if ( jrtl0h20ox < - rtP_x607325_VNom ) { jrtl0h20ox
= - rtP_x607325_VNom ; } if ( jrtl0h20ox >= 0.0 ) { localB -> h2wq0gdhph =
jrtl0h20ox ; localB -> beh1jyo0lg = gcdnwszwdj . P_13 ; srUpdateBC ( localDW
-> bgmtziepvj ) ; } else { localB -> h2wq0gdhph = gcdnwszwdj . P_15 *
jrtl0h20ox ; localB -> beh1jyo0lg = rtP_x607325_VNom ; srUpdateBC ( localDW
-> juqucbm44r ) ; } if ( rtmIsSampleHit ( n4f1kxfugf , 1 , 0 ) ) { localB ->
leflq0awlb [ 0 ] = localB -> h2wq0gdhph ; localB -> leflq0awlb [ 1 ] = 0.0 ;
localB -> leflq0awlb [ 2 ] = 0.0 ; localDW -> nzaadopmzv [ 0 ] = ( boolean_T
) ( ( localB -> leflq0awlb [ 0 ] == localDW -> nzaadopmzv [ 1 ] ) ^ 1 ) ;
localDW -> nzaadopmzv [ 1 ] = localB -> leflq0awlb [ 0 ] ; localB ->
leflq0awlb [ 0 ] = localDW -> nzaadopmzv [ 1 ] ; localB -> leflq0awlb [ 3 ] =
localDW -> nzaadopmzv [ 0 ] ; localB -> ejxx0dyzgm [ 0 ] = localB ->
beh1jyo0lg ; localB -> ejxx0dyzgm [ 1 ] = 0.0 ; localB -> ejxx0dyzgm [ 2 ] =
0.0 ; localDW -> hpz3a5plfu [ 0 ] = ( boolean_T ) ( ( localB -> ejxx0dyzgm [
0 ] == localDW -> hpz3a5plfu [ 1 ] ) ^ 1 ) ; localDW -> hpz3a5plfu [ 1 ] =
localB -> ejxx0dyzgm [ 0 ] ; localB -> ejxx0dyzgm [ 0 ] = localDW ->
hpz3a5plfu [ 1 ] ; localB -> ejxx0dyzgm [ 3 ] = localDW -> hpz3a5plfu [ 0 ] ;
} simulationData = ( NeslSimulationData * ) localDW -> kadxlamyjz ;
jrtl0h20ox = rtmGetTaskTime ( n4f1kxfugf , 0 ) ; time = jrtl0h20ox ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 14 ; simulationData -> mData -> mDiscStates . mX = &
localDW -> msgwjfokow [ 0 ] ; simulationData -> mData -> mModeVector . mN = 3
; simulationData -> mData -> mModeVector . mX = & localDW -> irbxy1viiz [ 0 ]
; tmp = false ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = true ; tmp =
_ssGetSolverAssertCheck ( n4f1kxfugf -> _mdlRefSfcnS ) ; simulationData ->
mData -> mIsSolverAssertCheck = tmp ; simulationData -> mData ->
mIsSolverCheckingCIC = false ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; simulationData -> mData -> mIsSolverRequestingReset = false ;
simulationData -> mData -> mIsOkayToUpdateMode = true ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = localB -> leflq0awlb [ 0 ] ; tmp_p [ 1 ] = localB -> leflq0awlb
[ 1 ] ; tmp_p [ 2 ] = localB -> leflq0awlb [ 2 ] ; tmp_p [ 3 ] = localB ->
leflq0awlb [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = localB -> ejxx0dyzgm [ 0 ]
; tmp_p [ 5 ] = localB -> ejxx0dyzgm [ 1 ] ; tmp_p [ 6 ] = localB ->
ejxx0dyzgm [ 2 ] ; tmp_p [ 7 ] = localB -> ejxx0dyzgm [ 3 ] ; tmp_e [ 2 ] = 8
; simulationData -> mData -> mInputValues . mN = 8 ; simulationData -> mData
-> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 3 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; simulationData -> mData -> mOutputs . mN = 17 ; simulationData
-> mData -> mOutputs . mX = & localB -> lpfaa4yfgc [ 0 ] ; simulationData ->
mData -> mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX =
NULL ; tmp = rtmIsSampleHit ( n4f1kxfugf , 1 , 0 ) ; simulationData -> mData
-> mIsFundamentalSampleHit = tmp ; simulationData -> mData -> mTolerances .
mN = 0 ; simulationData -> mData -> mTolerances . mX = NULL ; simulationData
-> mData -> mCstateHasChanged = false ; diagnosticManager = (
NeuDiagnosticManager * ) localDW -> k25q3biwpn ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) localDW -> huu4fzhbm1 ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp = error_buffer_is_empty ( ssGetErrorStatus ( n4f1kxfugf -> _mdlRefSfcnS )
) ; if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( n4f1kxfugf -> _mdlRefSfcnS , msg ) ; } }
ssSetBlockStateForSolverChangedAtMajorStep ( n4f1kxfugf -> _mdlRefSfcnS ) ;
simulationData = ( NeslSimulationData * ) localDW -> pa2vb3qro5 ; time_p =
jrtl0h20ox ; simulationData -> mData -> mTime . mN = 1 ; simulationData ->
mData -> mTime . mX = & time_p ; simulationData -> mData -> mContStates . mN
= 0 ; simulationData -> mData -> mContStates . mX = NULL ; simulationData ->
mData -> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX =
& localDW -> oxjf1o2le0 ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & localDW -> adfujmdxyf ; tmp =
false ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData ->
mData -> mIsMajorTimeStep = true ; tmp = _ssGetSolverAssertCheck ( n4f1kxfugf
-> _mdlRefSfcnS ) ; simulationData -> mData -> mIsSolverAssertCheck = tmp ;
simulationData -> mData -> mIsSolverCheckingCIC = false ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; simulationData -> mData -> mIsSolverRequestingReset
= false ; simulationData -> mData -> mIsOkayToUpdateMode = true ; tmp_g [ 0 ]
= 0 ; tmp_m [ 0 ] = localB -> leflq0awlb [ 0 ] ; tmp_m [ 1 ] = localB ->
leflq0awlb [ 1 ] ; tmp_m [ 2 ] = localB -> leflq0awlb [ 2 ] ; tmp_m [ 3 ] =
localB -> leflq0awlb [ 3 ] ; tmp_g [ 1 ] = 4 ; tmp_m [ 4 ] = localB ->
ejxx0dyzgm [ 0 ] ; tmp_m [ 5 ] = localB -> ejxx0dyzgm [ 1 ] ; tmp_m [ 6 ] =
localB -> ejxx0dyzgm [ 2 ] ; tmp_m [ 7 ] = localB -> ejxx0dyzgm [ 3 ] ; tmp_g
[ 2 ] = 8 ; memcpy ( & tmp_m [ 8 ] , & localB -> lpfaa4yfgc [ 0 ] , 17U *
sizeof ( real_T ) ) ; tmp_g [ 3 ] = 25 ; simulationData -> mData ->
mInputValues . mN = 25 ; simulationData -> mData -> mInputValues . mX = &
tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 6 ; simulationData -> mData ->
mOutputs . mX = & afmyebfqa1 [ 0 ] ; simulationData -> mData -> mSampleHits .
mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ; tmp =
rtmIsSampleHit ( n4f1kxfugf , 1 , 0 ) ; simulationData -> mData ->
mIsFundamentalSampleHit = tmp ; simulationData -> mData -> mTolerances . mN =
0 ; simulationData -> mData -> mTolerances . mX = NULL ; simulationData ->
mData -> mCstateHasChanged = false ; diagnosticManager = (
NeuDiagnosticManager * ) localDW -> hjw13xaqv4 ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) localDW -> ezwrjgfnd4 ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp = error_buffer_is_empty ( ssGetErrorStatus ( n4f1kxfugf -> _mdlRefSfcnS )
) ; if ( tmp ) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ;
ssSetErrorStatus ( n4f1kxfugf -> _mdlRefSfcnS , msg_p ) ; } }
ssSetBlockStateForSolverChangedAtMajorStep ( n4f1kxfugf -> _mdlRefSfcnS ) ;
oemymsp44q = ( real32_T ) afmyebfqa1 [ 0 ] ; localB -> lbosajnd5o =
oemymsp44q ; localDW -> dmbqlo45q2 [ localDW -> mxqbsawplp == 0 ] =
ctksyvjlvu ; localDW -> hiespqskmp = ( int8_T ) ( localDW -> mxqbsawplp == 0
) ; } if ( rtmIsSampleHit ( n4f1kxfugf , 2 , 0 ) ) { localDW -> mxqbsawplp =
localDW -> hiespqskmp ; hind1bj11o = localDW -> dmbqlo45q2 [ localDW ->
mxqbsawplp ] ; } if ( rtmIsSampleHit ( n4f1kxfugf , 1 , 0 ) ) { nto0l3jv1g =
( real32_T ) afmyebfqa1 [ 1 ] ; nmcftkm3be = ( real32_T ) afmyebfqa1 [ 2 ] ;
nj2vuklq4b = oemymsp44q ; localDW -> lbowrmd5fw [ localDW -> ju5h25lyet == 0
] = nto0l3jv1g ; localDW -> bi1icpowut = ( int8_T ) ( localDW -> ju5h25lyet
== 0 ) ; } if ( rtmIsSampleHit ( n4f1kxfugf , 2 , 0 ) ) { localDW ->
ju5h25lyet = localDW -> bi1icpowut ; localB -> jradpfn2au = localDW ->
lbowrmd5fw [ localDW -> ju5h25lyet ] ; tmp_i = localDW -> mdhhylhwlg * 3 ;
kn0kjutenq = localDW -> cpxr54tl5g [ tmp_i + 1 ] ; dqaqj3pyh1 = localDW ->
cpxr54tl5g [ tmp_i + 2 ] ; ctksyvjlvu = ( localDW -> adf5pho5oy - localDW ->
d5ykmtl1o3 ) * gcdnwszwdj . P_12 + localDW -> d5ykmtl1o3 ; localB ->
g2iqxn1trf = ( localDW -> adf5pho5oy - ctksyvjlvu ) * gcdnwszwdj . P_10 +
localDW -> ntyeyxcpzv ; jrtl0h20ox = kn0kjutenq - localB -> g2iqxn1trf ;
localB -> ltqgecb1hp = ( ( localB -> h2wq0gdhph_cl54gopm0x / localB ->
leflq0awlb_kkiq3xxxve * dqaqj3pyh1 + localB -> lpfaa4yfgc_cxarnvbvui / localB
-> cfpzpwnygo * kn0kjutenq ) + jrtl0h20ox * localB -> c4tkvxgscc ) + localDW
-> a1yzcpvsyb ; jrtl0h20ox *= localB -> m0hc3foanl ; if ( localB ->
ltqgecb1hp > rtP_x520886_ICont ) { localB -> nyi24fjkvj = rtP_x520886_ICont ;
} else if ( localB -> ltqgecb1hp < - rtP_x520886_ICont ) { localB ->
nyi24fjkvj = - rtP_x520886_ICont ; } else { localB -> nyi24fjkvj = localB ->
ltqgecb1hp ; } if ( localDW -> o33esxcr4d > rtP_x520886_ICont ) { dqaqj3pyh1
= localDW -> o33esxcr4d - rtP_x520886_ICont ; } else if ( localDW ->
o33esxcr4d >= - rtP_x520886_ICont ) { dqaqj3pyh1 = 0.0 ; } else { dqaqj3pyh1
= localDW -> o33esxcr4d - ( - rtP_x520886_ICont ) ; } tmp_j =
muDoubleScalarSign ( dqaqj3pyh1 ) ; if ( muDoubleScalarIsNaN ( tmp_j ) ) {
tmp_j = 0.0 ; } else { tmp_j = muDoubleScalarRem ( tmp_j , 256.0 ) ; } tmp_f
= muDoubleScalarSign ( jrtl0h20ox ) ; if ( muDoubleScalarIsNaN ( tmp_f ) ) {
tmp_f = 0.0 ; } else { tmp_f = muDoubleScalarRem ( tmp_f , 256.0 ) ; } localB
-> m1ikydsfj0 = ( gcdnwszwdj . P_33 * localDW -> o33esxcr4d != dqaqj3pyh1 ) &
( ( tmp_j < 0.0 ? ( int32_T ) ( int8_T ) - ( int8_T ) ( uint8_T ) - tmp_j : (
int32_T ) ( int8_T ) ( uint8_T ) tmp_j ) == ( tmp_f < 0.0 ? ( int32_T ) (
int8_T ) - ( int8_T ) ( uint8_T ) - tmp_f : ( int32_T ) ( int8_T ) ( uint8_T
) tmp_f ) ) ; if ( localDW -> pxhqr4cb2p ) { localB -> fmzczxuzch =
gcdnwszwdj . P_45 ; } else { localB -> fmzczxuzch = jrtl0h20ox ; } localB ->
npgo0mulex = ( ( hind1bj11o * localB -> edpmmlaoam - localDW -> ntyeyxcpzv *
localB -> g4rfzbmv2r_mbvzarwird ) - localDW -> iyvf0cfvz1 ) / localB ->
gnaoemsjbf ; jrtl0h20ox = ( localDW -> adf5pho5oy - ctksyvjlvu ) * gcdnwszwdj
. P_11 + localDW -> iyvf0cfvz1 ; ctksyvjlvu = - rtP_x607325_Torq / 1000.0 ;
hind1bj11o = rtP_x607325_Torq / 1000.0 ; if ( jrtl0h20ox > hind1bj11o ) {
localB -> i00ihxzcdp = hind1bj11o ; } else if ( jrtl0h20ox < ctksyvjlvu ) {
localB -> i00ihxzcdp = ctksyvjlvu ; } else { localB -> i00ihxzcdp =
jrtl0h20ox ; } } if ( rtmIsSampleHit ( n4f1kxfugf , 3 , 0 ) ) { localB ->
cn3uvp0opx = * oscxqmx0zv ; hind1bj11o = gcdnwszwdj . P_34 * localB ->
cn3uvp0opx ; { if ( localDW -> dkms3ioakc . AQHandles && ssGetLogOutput (
n4f1kxfugf -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> dkms3ioakc .
AQHandles , rtmGetTaskTime ( n4f1kxfugf , 3 ) , ( char * ) & hind1bj11o + 0 )
; } } localB -> owie2v20ax = localDW -> ldgv3mxr0m ; } if ( rtmIsSampleHit (
n4f1kxfugf , 1 , 0 ) ) { * peoowe2dcb = nto0l3jv1g ; * jl14elai0k =
nmcftkm3be ; * m2stjjg02g = nj2vuklq4b ; hind1bj11o = afmyebfqa1 [ 4 ] +
gcdnwszwdj . P_37 ; hind1bj11o = gcdnwszwdj . P_38 * afmyebfqa1 [ 3 ] ;
nj2vuklq4b = ( real32_T ) hind1bj11o ; * lztr0ojbkn = nto0l3jv1g /
rtP_x28_000006_reduction ; * idlzyauu4m = nmcftkm3be /
rtP_x28_000006_reduction ; * l0v2lexcb2 = nj2vuklq4b ; hind1bj11o =
gcdnwszwdj . P_39 * nmcftkm3be ; ctksyvjlvu = localDW -> aayofnyfma [ localDW
-> paq0gh0ddd ] ; { if ( localDW -> d1cf0p4sh4 . AQHandles && ssGetLogOutput
( n4f1kxfugf -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> d1cf0p4sh4 .
AQHandles , rtmGetTaskTime ( n4f1kxfugf , 1 ) , ( char * ) & nmcftkm3be + 0 )
; } } hind1bj11o = oemymsp44q * afmyebfqa1 [ 5 ] ; } } void
Motor_and_DriverTID4 ( newmk5ltqt * localB ) { real_T leflq0awlb_tmp ; localB
-> coz0wgohpd = 1.0E-6 * gcdnwszwdj . P_41 ; localB -> blvifzpbzh = 0.001 *
gcdnwszwdj . P_42 ; localB -> m0hc3foanl = 1.0E-6 * gcdnwszwdj . P_43 ;
localB -> c4tkvxgscc = 1.0E-6 * gcdnwszwdj . P_44 ; localB -> gnaoemsjbf =
1.0E-10 * gcdnwszwdj . P_46 ; localB -> edpmmlaoam = 1.0E-6 * gcdnwszwdj .
P_47 ; localB -> g4rfzbmv2r_mbvzarwird = 9.54929658551372E-9 * gcdnwszwdj .
P_48 ; localB -> h2wq0gdhph_cl54gopm0x = ( rtP_x607325_RotIner + gcdnwszwdj .
P_8 ) * gcdnwszwdj . P_49 ; leflq0awlb_tmp = 0.001 * rtP_x607325_TorqConst ;
localB -> leflq0awlb_kkiq3xxxve = leflq0awlb_tmp ; localB ->
lpfaa4yfgc_cxarnvbvui = 9.5492965855137212E-6 * gcdnwszwdj . P_9 ; localB ->
cfpzpwnygo = leflq0awlb_tmp ; } void fhizeznu4p ( jqmbuwnn4r * const
n4f1kxfugf , newmk5ltqt * localB , an3ws3rp20 * localDW ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
tmp_p [ 8 ] ; real_T time ; real_T tmp_m ; int32_T tmp_i ; int_T tmp_e [ 3 ]
; boolean_T tmp ; if ( rtmIsSampleHit ( n4f1kxfugf , 2 , 0 ) ) { localDW ->
j2msih40xc [ localDW -> i5crktpmac == 0 ] = localB -> nyi24fjkvj ; localDW ->
i5crktpmac = ( int8_T ) ( localDW -> i5crktpmac == 0 ) ; } if (
rtmIsSampleHit ( n4f1kxfugf , 1 , 0 ) ) { localDW -> ahxn11a4uj = localB ->
lbosajnd5o ; localDW -> bntadq01i0 += gcdnwszwdj . P_19 * localB ->
g4rfzbmv2r ; simulationData = ( NeslSimulationData * ) localDW -> kadxlamyjz
; time = rtmGetTaskTime ( n4f1kxfugf , 0 ) ; simulationData -> mData -> mTime
. mN = 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 0 ; simulationData -> mData -> mContStates . mX =
NULL ; simulationData -> mData -> mDiscStates . mN = 14 ; simulationData ->
mData -> mDiscStates . mX = & localDW -> msgwjfokow [ 0 ] ; simulationData ->
mData -> mModeVector . mN = 3 ; simulationData -> mData -> mModeVector . mX =
& localDW -> irbxy1viiz [ 0 ] ; tmp = false ; simulationData -> mData ->
mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep = true ;
tmp = _ssGetSolverAssertCheck ( n4f1kxfugf -> _mdlRefSfcnS ) ; simulationData
-> mData -> mIsSolverAssertCheck = tmp ; simulationData -> mData ->
mIsSolverCheckingCIC = false ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; simulationData -> mData -> mIsSolverRequestingReset = false ;
simulationData -> mData -> mIsOkayToUpdateMode = true ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = localB -> leflq0awlb [ 0 ] ; tmp_p [ 1 ] = localB -> leflq0awlb
[ 1 ] ; tmp_p [ 2 ] = localB -> leflq0awlb [ 2 ] ; tmp_p [ 3 ] = localB ->
leflq0awlb [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = localB -> ejxx0dyzgm [ 0 ]
; tmp_p [ 5 ] = localB -> ejxx0dyzgm [ 1 ] ; tmp_p [ 6 ] = localB ->
ejxx0dyzgm [ 2 ] ; tmp_p [ 7 ] = localB -> ejxx0dyzgm [ 3 ] ; tmp_e [ 2 ] = 8
; simulationData -> mData -> mInputValues . mN = 8 ; simulationData -> mData
-> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 3 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager * ) localDW ->
k25q3biwpn ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * )
localDW -> huu4fzhbm1 , NESL_SIM_UPDATE , simulationData , diagnosticManager
) ; if ( tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus (
n4f1kxfugf -> _mdlRefSfcnS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg (
diagnosticTree ) ; ssSetErrorStatus ( n4f1kxfugf -> _mdlRefSfcnS , msg ) ; }
} } if ( rtmIsSampleHit ( n4f1kxfugf , 3 , 0 ) ) { localDW -> cpxr54tl5g [ (
localDW -> mdhhylhwlg == 0 ) * 3 ] = 0.0 ; localDW -> cpxr54tl5g [ 1 + (
localDW -> mdhhylhwlg == 0 ) * 3 ] = localB -> cn3uvp0opx ; localDW ->
cpxr54tl5g [ 2 + ( localDW -> mdhhylhwlg == 0 ) * 3 ] = localB -> owie2v20ax
; localDW -> mdhhylhwlg = ( int8_T ) ( localDW -> mdhhylhwlg == 0 ) ; localDW
-> ldgv3mxr0m += gcdnwszwdj . P_35 * localB -> cn3uvp0opx ; } if (
rtmIsSampleHit ( n4f1kxfugf , 2 , 0 ) ) { localDW -> adf5pho5oy = localB ->
jradpfn2au ; localDW -> d5ykmtl1o3 += gcdnwszwdj . P_25 * localB ->
g2iqxn1trf ; localDW -> ntyeyxcpzv += gcdnwszwdj . P_27 * localB ->
npgo0mulex ; tmp_m = rtP_x607325_RotOmgMax * 3.1415926535897931 / 30.0 ; if (
localDW -> ntyeyxcpzv >= tmp_m ) { localDW -> ntyeyxcpzv = tmp_m ; } else {
tmp_m = - rtP_x607325_RotOmgMax * 3.1415926535897931 / 30.0 ; if ( localDW ->
ntyeyxcpzv <= tmp_m ) { localDW -> ntyeyxcpzv = tmp_m ; } } localDW ->
iyvf0cfvz1 = localB -> i00ihxzcdp ; localDW -> a1yzcpvsyb += gcdnwszwdj .
P_30 * localB -> fmzczxuzch ; localDW -> o33esxcr4d = localB -> ltqgecb1hp ;
localDW -> pxhqr4cb2p = localB -> m1ikydsfj0 ; localDW -> aayofnyfma [
localDW -> paq0gh0ddd == 0 ] = localB -> g2iqxn1trf ; localDW -> paq0gh0ddd =
( int8_T ) ( localDW -> paq0gh0ddd == 0 ) ; } } void fhizeznu4pTID4 ( void )
{ } void efqaccisye ( jqmbuwnn4r * const n4f1kxfugf , an3ws3rp20 * localDW )
{ if ( ( ssGetSimMode ( n4f1kxfugf -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( n4f1kxfugf -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> dkms3ioakc .
AQHandles ) { sdiTerminateStreaming ( & localDW -> dkms3ioakc . AQHandles ) ;
} } if ( ( ssGetSimMode ( n4f1kxfugf -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL
) && ( ( n4f1kxfugf -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> d1cf0p4sh4 .
AQHandles ) { sdiTerminateStreaming ( & localDW -> d1cf0p4sh4 . AQHandles ) ;
} } } void glspqvidja ( an3ws3rp20 * localDW , jqmbuwnn4r * const n4f1kxfugf
) { neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) localDW ->
k25q3biwpn ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * )
localDW -> kadxlamyjz ) ; nesl_erase_simulator (
"Motor_and_Driver/Solver Configuration_1" ) ; nesl_destroy_registry ( ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) localDW ->
hjw13xaqv4 ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * )
localDW -> pa2vb3qro5 ) ; nesl_erase_simulator (
"Motor_and_Driver/Solver Configuration_1" ) ; nesl_destroy_registry ( ) ; if
( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( n4f1kxfugf ->
_mdlRefSfcnS , "Motor_and_Driver" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void fusa1jep2f (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , int_T mdlref_TID3 , int_T mdlref_TID4 , jqmbuwnn4r * const
n4f1kxfugf , newmk5ltqt * localB , an3ws3rp20 * localDW , void * sysRanPtr ,
int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN
( sizeof ( real_T ) ) ; ( void ) memset ( ( void * ) n4f1kxfugf , 0 , sizeof
( jqmbuwnn4r ) ) ; n4f1kxfugf -> Timing . mdlref_GlobalTID [ 0 ] =
mdlref_TID0 ; n4f1kxfugf -> Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ;
n4f1kxfugf -> Timing . mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; n4f1kxfugf ->
Timing . mdlref_GlobalTID [ 3 ] = mdlref_TID3 ; n4f1kxfugf -> Timing .
mdlref_GlobalTID [ 4 ] = mdlref_TID4 ; n4f1kxfugf -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( n4f1kxfugf -> _mdlRefSfcnS , "Motor_and_Driver" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( ( void *
) localB ) , 0 , sizeof ( newmk5ltqt ) ) ; { int32_T i ; for ( i = 0 ; i < 17
; i ++ ) { localB -> lpfaa4yfgc [ i ] = 0.0 ; } localB -> g4rfzbmv2r = 0.0 ;
localB -> h2wq0gdhph = 0.0 ; localB -> leflq0awlb [ 0 ] = 0.0 ; localB ->
leflq0awlb [ 1 ] = 0.0 ; localB -> leflq0awlb [ 2 ] = 0.0 ; localB ->
leflq0awlb [ 3 ] = 0.0 ; localB -> beh1jyo0lg = 0.0 ; localB -> ejxx0dyzgm [
0 ] = 0.0 ; localB -> ejxx0dyzgm [ 1 ] = 0.0 ; localB -> ejxx0dyzgm [ 2 ] =
0.0 ; localB -> ejxx0dyzgm [ 3 ] = 0.0 ; localB -> lbosajnd5o = 0.0 ; localB
-> ltqgecb1hp = 0.0 ; localB -> nyi24fjkvj = 0.0 ; localB -> fmzczxuzch = 0.0
; localB -> npgo0mulex = 0.0 ; localB -> i00ihxzcdp = 0.0 ; localB ->
cn3uvp0opx = 0.0 ; localB -> owie2v20ax = 0.0 ; localB -> coz0wgohpd = 0.0 ;
localB -> blvifzpbzh = 0.0 ; localB -> m0hc3foanl = 0.0 ; localB ->
c4tkvxgscc = 0.0 ; localB -> gnaoemsjbf = 0.0 ; localB -> edpmmlaoam = 0.0 ;
localB -> g4rfzbmv2r_mbvzarwird = 0.0 ; localB -> h2wq0gdhph_cl54gopm0x = 0.0
; localB -> leflq0awlb_kkiq3xxxve = 0.0 ; localB -> lpfaa4yfgc_cxarnvbvui =
0.0 ; localB -> cfpzpwnygo = 0.0 ; localB -> g2iqxn1trf = 0.0 ; localB ->
jradpfn2au = 0.0F ; } ( void ) memset ( ( void * ) localDW , 0 , sizeof (
an3ws3rp20 ) ) ; localDW -> ahxn11a4uj = 0.0 ; localDW -> bntadq01i0 = 0.0 ;
localDW -> nzaadopmzv [ 0 ] = 0.0 ; localDW -> nzaadopmzv [ 1 ] = 0.0 ;
localDW -> hpz3a5plfu [ 0 ] = 0.0 ; localDW -> hpz3a5plfu [ 1 ] = 0.0 ; {
int32_T i ; for ( i = 0 ; i < 14 ; i ++ ) { localDW -> msgwjfokow [ i ] = 0.0
; } } localDW -> d5ykmtl1o3 = 0.0 ; localDW -> ntyeyxcpzv = 0.0 ; localDW ->
iyvf0cfvz1 = 0.0 ; localDW -> a1yzcpvsyb = 0.0 ; localDW -> o33esxcr4d = 0.0
; localDW -> ldgv3mxr0m = 0.0 ; localDW -> j2msih40xc [ 0 ] = 0.0 ; localDW
-> j2msih40xc [ 1 ] = 0.0 ; localDW -> oxjf1o2le0 = 0.0 ; localDW ->
dmbqlo45q2 [ 0 ] = 0.0 ; localDW -> dmbqlo45q2 [ 1 ] = 0.0 ; { int32_T i ;
for ( i = 0 ; i < 6 ; i ++ ) { localDW -> cpxr54tl5g [ i ] = 0.0 ; } }
localDW -> aayofnyfma [ 0 ] = 0.0 ; localDW -> aayofnyfma [ 1 ] = 0.0 ;
localDW -> adf5pho5oy = 0.0F ; localDW -> lbowrmd5fw [ 0 ] = 0.0F ; localDW
-> lbowrmd5fw [ 1 ] = 0.0F ; Motor_and_Driver_InitializeDataMapInfo (
n4f1kxfugf , localDW , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != (
NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( *
rt_ParentMMI , rt_ChildMMIIdx , & ( n4f1kxfugf -> DataMapInfo . mmi ) ) ;
rtwCAPI_SetPath ( n4f1kxfugf -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( n4f1kxfugf -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_Motor_and_Driver_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_Motor_and_Driver , 44 ) ; * retVal = 1 ; } static void
mr_Motor_and_Driver_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) ; static void
mr_Motor_and_Driver_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Motor_and_Driver_restoreDataFromMxArray ( void * destData
, const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_Motor_and_Driver_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_Motor_and_Driver_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) ; static void
mr_Motor_and_Driver_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Motor_and_Driver_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Motor_and_Driver_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_Motor_and_Driver_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_Motor_and_Driver_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Motor_and_Driver_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_Motor_and_Driver_restoreDataFromMxArrayWithOffset
( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_Motor_and_Driver_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_Motor_and_Driver_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
{ mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_Motor_and_Driver_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_Motor_and_Driver_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_Motor_and_Driver_GetDWork ( const
carp3dc4p0e * mdlrefDW ) { static const char * ssDWFieldNames [ 3 ] = { "rtb"
, "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1
, 3 , ssDWFieldNames ) ; mr_Motor_and_Driver_cacheDataAsMxArray ( ssDW , 0 ,
0 , ( const void * ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; {
static const char * rtdwDataFieldNames [ 32 ] = { "mdlrefDW->rtdw.ahxn11a4uj"
, "mdlrefDW->rtdw.bntadq01i0" , "mdlrefDW->rtdw.nzaadopmzv" ,
"mdlrefDW->rtdw.hpz3a5plfu" , "mdlrefDW->rtdw.msgwjfokow" ,
"mdlrefDW->rtdw.d5ykmtl1o3" , "mdlrefDW->rtdw.ntyeyxcpzv" ,
"mdlrefDW->rtdw.iyvf0cfvz1" , "mdlrefDW->rtdw.a1yzcpvsyb" ,
"mdlrefDW->rtdw.o33esxcr4d" , "mdlrefDW->rtdw.ldgv3mxr0m" ,
"mdlrefDW->rtdw.j2msih40xc" , "mdlrefDW->rtdw.oxjf1o2le0" ,
"mdlrefDW->rtdw.dmbqlo45q2" , "mdlrefDW->rtdw.cpxr54tl5g" ,
"mdlrefDW->rtdw.aayofnyfma" , "mdlrefDW->rtdw.adf5pho5oy" ,
"mdlrefDW->rtdw.lbowrmd5fw" , "mdlrefDW->rtdw.irbxy1viiz" ,
"mdlrefDW->rtdw.adfujmdxyf" , "mdlrefDW->rtdw.i5crktpmac" ,
"mdlrefDW->rtdw.hiespqskmp" , "mdlrefDW->rtdw.mxqbsawplp" ,
"mdlrefDW->rtdw.bi1icpowut" , "mdlrefDW->rtdw.ju5h25lyet" ,
"mdlrefDW->rtdw.mdhhylhwlg" , "mdlrefDW->rtdw.paq0gh0ddd" ,
"mdlrefDW->rtdw.juqucbm44r" , "mdlrefDW->rtdw.bgmtziepvj" ,
"mdlrefDW->rtdw.fi53bxf5bd" , "mdlrefDW->rtdw.g3tf0nvv2w" ,
"mdlrefDW->rtdw.pxhqr4cb2p" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 32 , rtdwDataFieldNames ) ; mr_Motor_and_Driver_cacheDataAsMxArray (
rtdwData , 0 , 0 , ( const void * ) & ( mdlrefDW -> rtdw . ahxn11a4uj ) ,
sizeof ( mdlrefDW -> rtdw . ahxn11a4uj ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * )
& ( mdlrefDW -> rtdw . bntadq01i0 ) , sizeof ( mdlrefDW -> rtdw . bntadq01i0
) ) ; mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const
void * ) & ( mdlrefDW -> rtdw . nzaadopmzv ) , sizeof ( mdlrefDW -> rtdw .
nzaadopmzv ) ) ; mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 3 ,
( const void * ) & ( mdlrefDW -> rtdw . hpz3a5plfu ) , sizeof ( mdlrefDW ->
rtdw . hpz3a5plfu ) ) ; mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0
, 4 , ( const void * ) & ( mdlrefDW -> rtdw . msgwjfokow ) , sizeof (
mdlrefDW -> rtdw . msgwjfokow ) ) ; mr_Motor_and_Driver_cacheDataAsMxArray (
rtdwData , 0 , 5 , ( const void * ) & ( mdlrefDW -> rtdw . d5ykmtl1o3 ) ,
sizeof ( mdlrefDW -> rtdw . d5ykmtl1o3 ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * )
& ( mdlrefDW -> rtdw . ntyeyxcpzv ) , sizeof ( mdlrefDW -> rtdw . ntyeyxcpzv
) ) ; mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const
void * ) & ( mdlrefDW -> rtdw . iyvf0cfvz1 ) , sizeof ( mdlrefDW -> rtdw .
iyvf0cfvz1 ) ) ; mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 8 ,
( const void * ) & ( mdlrefDW -> rtdw . a1yzcpvsyb ) , sizeof ( mdlrefDW ->
rtdw . a1yzcpvsyb ) ) ; mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0
, 9 , ( const void * ) & ( mdlrefDW -> rtdw . o33esxcr4d ) , sizeof (
mdlrefDW -> rtdw . o33esxcr4d ) ) ; mr_Motor_and_Driver_cacheDataAsMxArray (
rtdwData , 0 , 10 , ( const void * ) & ( mdlrefDW -> rtdw . ldgv3mxr0m ) ,
sizeof ( mdlrefDW -> rtdw . ldgv3mxr0m ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * )
& ( mdlrefDW -> rtdw . j2msih40xc ) , sizeof ( mdlrefDW -> rtdw . j2msih40xc
) ) ; mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const
void * ) & ( mdlrefDW -> rtdw . oxjf1o2le0 ) , sizeof ( mdlrefDW -> rtdw .
oxjf1o2le0 ) ) ; mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 13 ,
( const void * ) & ( mdlrefDW -> rtdw . dmbqlo45q2 ) , sizeof ( mdlrefDW ->
rtdw . dmbqlo45q2 ) ) ; mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0
, 14 , ( const void * ) & ( mdlrefDW -> rtdw . cpxr54tl5g ) , sizeof (
mdlrefDW -> rtdw . cpxr54tl5g ) ) ; mr_Motor_and_Driver_cacheDataAsMxArray (
rtdwData , 0 , 15 , ( const void * ) & ( mdlrefDW -> rtdw . aayofnyfma ) ,
sizeof ( mdlrefDW -> rtdw . aayofnyfma ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * )
& ( mdlrefDW -> rtdw . adf5pho5oy ) , sizeof ( mdlrefDW -> rtdw . adf5pho5oy
) ) ; mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const
void * ) & ( mdlrefDW -> rtdw . lbowrmd5fw ) , sizeof ( mdlrefDW -> rtdw .
lbowrmd5fw ) ) ; mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 18 ,
( const void * ) & ( mdlrefDW -> rtdw . irbxy1viiz ) , sizeof ( mdlrefDW ->
rtdw . irbxy1viiz ) ) ; mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0
, 19 , ( const void * ) & ( mdlrefDW -> rtdw . adfujmdxyf ) , sizeof (
mdlrefDW -> rtdw . adfujmdxyf ) ) ; mr_Motor_and_Driver_cacheDataAsMxArray (
rtdwData , 0 , 20 , ( const void * ) & ( mdlrefDW -> rtdw . i5crktpmac ) ,
sizeof ( mdlrefDW -> rtdw . i5crktpmac ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * )
& ( mdlrefDW -> rtdw . hiespqskmp ) , sizeof ( mdlrefDW -> rtdw . hiespqskmp
) ) ; mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const
void * ) & ( mdlrefDW -> rtdw . mxqbsawplp ) , sizeof ( mdlrefDW -> rtdw .
mxqbsawplp ) ) ; mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 23 ,
( const void * ) & ( mdlrefDW -> rtdw . bi1icpowut ) , sizeof ( mdlrefDW ->
rtdw . bi1icpowut ) ) ; mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0
, 24 , ( const void * ) & ( mdlrefDW -> rtdw . ju5h25lyet ) , sizeof (
mdlrefDW -> rtdw . ju5h25lyet ) ) ; mr_Motor_and_Driver_cacheDataAsMxArray (
rtdwData , 0 , 25 , ( const void * ) & ( mdlrefDW -> rtdw . mdhhylhwlg ) ,
sizeof ( mdlrefDW -> rtdw . mdhhylhwlg ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void * )
& ( mdlrefDW -> rtdw . paq0gh0ddd ) , sizeof ( mdlrefDW -> rtdw . paq0gh0ddd
) ) ; mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const
void * ) & ( mdlrefDW -> rtdw . juqucbm44r ) , sizeof ( mdlrefDW -> rtdw .
juqucbm44r ) ) ; mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 28 ,
( const void * ) & ( mdlrefDW -> rtdw . bgmtziepvj ) , sizeof ( mdlrefDW ->
rtdw . bgmtziepvj ) ) ; mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0
, 29 , ( const void * ) & ( mdlrefDW -> rtdw . fi53bxf5bd ) , sizeof (
mdlrefDW -> rtdw . fi53bxf5bd ) ) ; mr_Motor_and_Driver_cacheDataAsMxArray (
rtdwData , 0 , 30 , ( const void * ) & ( mdlrefDW -> rtdw . g3tf0nvv2w ) ,
sizeof ( mdlrefDW -> rtdw . g3tf0nvv2w ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const void * )
& ( mdlrefDW -> rtdw . pxhqr4cb2p ) , sizeof ( mdlrefDW -> rtdw . pxhqr4cb2p
) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ;
return ssDW ; } void mr_Motor_and_Driver_SetDWork ( carp3dc4p0e * mdlrefDW ,
const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtb )
, ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. ahxn11a4uj ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . ahxn11a4uj )
) ; mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . bntadq01i0 ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw .
bntadq01i0 ) ) ; mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . nzaadopmzv ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW ->
rtdw . nzaadopmzv ) ) ; mr_Motor_and_Driver_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . hpz3a5plfu ) , rtdwData , 0 , 3 , sizeof ( mdlrefDW
-> rtdw . hpz3a5plfu ) ) ; mr_Motor_and_Driver_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . msgwjfokow ) , rtdwData , 0 , 4 , sizeof (
mdlrefDW -> rtdw . msgwjfokow ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. d5ykmtl1o3 ) , rtdwData , 0 , 5 , sizeof ( mdlrefDW -> rtdw . d5ykmtl1o3 )
) ; mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . ntyeyxcpzv ) , rtdwData , 0 , 6 , sizeof ( mdlrefDW -> rtdw .
ntyeyxcpzv ) ) ; mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . iyvf0cfvz1 ) , rtdwData , 0 , 7 , sizeof ( mdlrefDW ->
rtdw . iyvf0cfvz1 ) ) ; mr_Motor_and_Driver_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . a1yzcpvsyb ) , rtdwData , 0 , 8 , sizeof ( mdlrefDW
-> rtdw . a1yzcpvsyb ) ) ; mr_Motor_and_Driver_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . o33esxcr4d ) , rtdwData , 0 , 9 , sizeof (
mdlrefDW -> rtdw . o33esxcr4d ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. ldgv3mxr0m ) , rtdwData , 0 , 10 , sizeof ( mdlrefDW -> rtdw . ldgv3mxr0m )
) ; mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . j2msih40xc ) , rtdwData , 0 , 11 , sizeof ( mdlrefDW -> rtdw .
j2msih40xc ) ) ; mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . oxjf1o2le0 ) , rtdwData , 0 , 12 , sizeof ( mdlrefDW ->
rtdw . oxjf1o2le0 ) ) ; mr_Motor_and_Driver_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . dmbqlo45q2 ) , rtdwData , 0 , 13 , sizeof ( mdlrefDW
-> rtdw . dmbqlo45q2 ) ) ; mr_Motor_and_Driver_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . cpxr54tl5g ) , rtdwData , 0 , 14 , sizeof (
mdlrefDW -> rtdw . cpxr54tl5g ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. aayofnyfma ) , rtdwData , 0 , 15 , sizeof ( mdlrefDW -> rtdw . aayofnyfma )
) ; mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . adf5pho5oy ) , rtdwData , 0 , 16 , sizeof ( mdlrefDW -> rtdw .
adf5pho5oy ) ) ; mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . lbowrmd5fw ) , rtdwData , 0 , 17 , sizeof ( mdlrefDW ->
rtdw . lbowrmd5fw ) ) ; mr_Motor_and_Driver_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . irbxy1viiz ) , rtdwData , 0 , 18 , sizeof ( mdlrefDW
-> rtdw . irbxy1viiz ) ) ; mr_Motor_and_Driver_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . adfujmdxyf ) , rtdwData , 0 , 19 , sizeof (
mdlrefDW -> rtdw . adfujmdxyf ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. i5crktpmac ) , rtdwData , 0 , 20 , sizeof ( mdlrefDW -> rtdw . i5crktpmac )
) ; mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . hiespqskmp ) , rtdwData , 0 , 21 , sizeof ( mdlrefDW -> rtdw .
hiespqskmp ) ) ; mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . mxqbsawplp ) , rtdwData , 0 , 22 , sizeof ( mdlrefDW ->
rtdw . mxqbsawplp ) ) ; mr_Motor_and_Driver_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . bi1icpowut ) , rtdwData , 0 , 23 , sizeof ( mdlrefDW
-> rtdw . bi1icpowut ) ) ; mr_Motor_and_Driver_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . ju5h25lyet ) , rtdwData , 0 , 24 , sizeof (
mdlrefDW -> rtdw . ju5h25lyet ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. mdhhylhwlg ) , rtdwData , 0 , 25 , sizeof ( mdlrefDW -> rtdw . mdhhylhwlg )
) ; mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . paq0gh0ddd ) , rtdwData , 0 , 26 , sizeof ( mdlrefDW -> rtdw .
paq0gh0ddd ) ) ; mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . juqucbm44r ) , rtdwData , 0 , 27 , sizeof ( mdlrefDW ->
rtdw . juqucbm44r ) ) ; mr_Motor_and_Driver_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . bgmtziepvj ) , rtdwData , 0 , 28 , sizeof ( mdlrefDW
-> rtdw . bgmtziepvj ) ) ; mr_Motor_and_Driver_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . fi53bxf5bd ) , rtdwData , 0 , 29 , sizeof (
mdlrefDW -> rtdw . fi53bxf5bd ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. g3tf0nvv2w ) , rtdwData , 0 , 30 , sizeof ( mdlrefDW -> rtdw . g3tf0nvv2w )
) ; mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . pxhqr4cb2p ) , rtdwData , 0 , 31 , sizeof ( mdlrefDW -> rtdw .
pxhqr4cb2p ) ) ; } } void mr_Motor_and_Driver_RegisterSimStateChecksum (
SimStruct * S ) { const uint32_T chksum [ 4 ] = { 2611108428U , 3922068096U ,
1375622000U , 3636762763U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"Motor_and_Driver" , & chksum [ 0 ] ) ; } mxArray *
mr_Motor_and_Driver_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 4 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 4 ] = { "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , } ; static const char * blockPath [ 4 ] = {
"Motor_and_Driver/Solver Configuration/EVAL_KEY/STATE_1" ,
"Motor_and_Driver/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ,
"Motor_and_Driver/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ,
"Motor_and_Driver/Solver Configuration/EVAL_KEY/STATE_1" , } ; static const
int reason [ 4 ] = { 0 , 0 , 5 , 5 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] <
4 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript (
data , 2 , subs ) ; mxSetCell ( data , offset , mxCreateString ( blockType [
subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2
, subs ) ; mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0
] ] ) ) ; subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs )
; mxSetCell ( data , offset , mxCreateDoubleScalar ( ( double ) reason [ subs
[ 0 ] ] ) ) ; } } return data ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
