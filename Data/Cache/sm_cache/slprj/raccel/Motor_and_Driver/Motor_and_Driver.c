#include "rt_logging_mmi.h"
#include "Motor_and_Driver_capi.h"
#include <math.h>
#include "Motor_and_Driver.h"
#include "Motor_and_Driver_private.h"
#include "Motor_and_Driver_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 4 , & stopRequested ) ; }
rtExtModeShutdown ( 4 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 5 ; const char_T
* gbl_raccel_Version = "9.6 (R2021b) 14-May-2021" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 1 ; const int_T
gblNumModelInputs = 1 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ 1 } ; const int_T gblInportDims [ ] = { 1 , 1 } ; const int_T
gblInportComplex [ ] = { 0 } ; const int_T gblInportInterpoFlag [ ] = { 1 } ;
const int_T gblInportContinuous [ ] = { 0 } ; int_T enableFcnCallFlag [ ] = {
1 , 1 , 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; DW rtDW ; ExtU rtU ; ExtY rtY ; static SimStruct model_S ; SimStruct
* const rtS = & model_S ; void MdlInitialize ( void ) { rtDW . ep34iowbww [ 0
] = rtP . RateTransition3_InitialCondition ; rtDW . bsf12pb2h5 = rtP .
UnitDelay1_InitialCondition ; rtDW . i1ov2bkgtq = rtP .
DiscretePIController_InitialConditionForIntegrator ; rtDW . ewa1ky2aid [ 0 ]
= rtP . RateTransition1_InitialCondition ; rtDW . jy0ot5cu1a [ 0 ] = rtP .
RateTransition_InitialCondition ; rtDW . jy0ot5cu1a [ 1 ] = rtP .
RateTransition_InitialCondition ; rtDW . jy0ot5cu1a [ 2 ] = rtP .
RateTransition_InitialCondition ; rtDW . alwmsbt4vi = rtP .
UnitDelay_InitialCondition_gjecjbvtlj ; rtDW . pov3wcjhuh = rtP .
DiscreteTimeIntegrator1_IC ; rtDW . djn0bieqvx = rtP .
DiscreteTimeIntegrator_IC ; rtDW . bwk11a0owp = rtP .
UnitDelay_InitialCondition ; rtDW . fu12tl5lft [ 0 ] = rtP .
RateTransition2_InitialCondition ; rtDW . kxbojg1zkz = rtP .
DiscreteTimeIntegrator_IC_f5egosl31z ; rtDW . okvdpbekia = rtP .
UnitDelay_InitialCondition_mz0dqclppl ; rtDW . gkhcdetyhn = rtP .
Memory_InitialCondition ; rtDW . hu3arlbsbz [ 0 ] = rtP .
RateTransition_InitialCondition_jp45hakdeo ; rtB . fu0jmlqjl4 = rtP .
Merge_InitialOutput ; rtB . gvcs01gfki = rtP . Merge1_InitialOutput ; } void
MdlStart ( void ) { NeModelParameters modelParameters ; NeModelParameters
modelParameters_p ; NeslSimulationData * tmp_e ; NeslSimulator * tmp ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; NeuDiagnosticTree * diagnosticTree_p ; char * msg ; char * msg_p ; real_T
tmp_i ; int32_T tmp_m ; boolean_T tmp_p ; boolean_T val ; { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) {
rtwISigstreamManagerSetDestinationBase ( pISigstreamManager , 0 , & rtU .
hilmfez3mk ) ; } } { { { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Motor_and_Driver/Visualization/From" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_SINGLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. hjucof00tp . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"1de65734-e977-4743-8271-33a742bb7ce8" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "rpm" ) ; if ( rtDW . hjucof00tp . AQHandles
) { sdiSetSignalSampleTimeString ( rtDW . hjucof00tp . AQHandles , "6e-05" ,
6.0E-5 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . hjucof00tp .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . hjucof00tp . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . hjucof00tp . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } tmp = nesl_lease_simulator (
"Motor_and_Driver/Solver Configuration_1" , 0 , 0 ) ; rtDW . curcdagsjb = (
void * ) tmp ; tmp_p = pointer_is_null ( rtDW . curcdagsjb ) ; if ( tmp_p ) {
Motor_and_Driver_678d4e8_1_gateway ( ) ; tmp = nesl_lease_simulator (
"Motor_and_Driver/Solver Configuration_1" , 0 , 0 ) ; rtDW . curcdagsjb = (
void * ) tmp ; } slsaSaveRawMemoryForSimTargetOP ( rtS ,
"Motor_and_Driver/Solver Configuration_100" , ( void * * ) ( & rtDW .
curcdagsjb ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; tmp_e = nesl_create_simulation_data ( ) ; rtDW .
an0iwqneok = ( void * ) tmp_e ; diagnosticManager = rtw_create_diagnostics (
) ; rtDW . k32aasjgy5 = ( void * ) diagnosticManager ; modelParameters .
mSolverType = NE_SOLVER_TYPE_DISCRETE ; modelParameters . mSolverTolerance =
0.001 ; modelParameters . mVariableStepSolver = false ; modelParameters .
mIsUsingODEN = false ; modelParameters . mFixedStepSize = 0.001 ;
modelParameters . mStartTime = 0.0 ; modelParameters . mLoadInitialState =
false ; modelParameters . mUseSimState = false ; modelParameters .
mLinTrimCompile = false ; modelParameters . mLoggingMode = SSC_LOGGING_NONE ;
modelParameters . mRTWModifiedTimeStamp = 5.71841566E+8 ; modelParameters .
mZcDisabled = false ; tmp_i = 0.001 ; modelParameters . mSolverTolerance =
tmp_i ; tmp_i = 2.0E-5 ; modelParameters . mFixedStepSize = tmp_i ; tmp_p =
false ; modelParameters . mVariableStepSolver = tmp_p ; tmp_p = false ;
modelParameters . mIsUsingODEN = tmp_p ; val = false ; tmp_p =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp_p ) { tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; val = ( tmp_p &&
ssIsFirstInitCond ( rtS ) ) ; } modelParameters . mLoadInitialState = val ;
modelParameters . mZcDisabled = true ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . k32aasjgy5 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . curcdagsjb , &
modelParameters , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator ( "Motor_and_Driver/Solver Configuration_1" , 1 ,
0 ) ; rtDW . ct2a0l3urc = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW .
ct2a0l3urc ) ; if ( tmp_p ) { Motor_and_Driver_678d4e8_1_gateway ( ) ; tmp =
nesl_lease_simulator ( "Motor_and_Driver/Solver Configuration_1" , 1 , 0 ) ;
rtDW . ct2a0l3urc = ( void * ) tmp ; } slsaSaveRawMemoryForSimTargetOP ( rtS
, "Motor_and_Driver/Solver Configuration_110" , ( void * * ) ( & rtDW .
ct2a0l3urc ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; tmp_e = nesl_create_simulation_data ( ) ; rtDW .
enba3cq10q = ( void * ) tmp_e ; diagnosticManager = rtw_create_diagnostics (
) ; rtDW . lwnxawb1gu = ( void * ) diagnosticManager ; modelParameters_p .
mSolverType = NE_SOLVER_TYPE_DISCRETE ; modelParameters_p . mSolverTolerance
= 0.001 ; modelParameters_p . mVariableStepSolver = false ; modelParameters_p
. mIsUsingODEN = false ; modelParameters_p . mFixedStepSize = 0.001 ;
modelParameters_p . mStartTime = 0.0 ; modelParameters_p . mLoadInitialState
= false ; modelParameters_p . mUseSimState = false ; modelParameters_p .
mLinTrimCompile = false ; modelParameters_p . mLoggingMode = SSC_LOGGING_NONE
; modelParameters_p . mRTWModifiedTimeStamp = 5.71841566E+8 ;
modelParameters_p . mZcDisabled = false ; tmp_i = 0.001 ; modelParameters_p .
mSolverTolerance = tmp_i ; tmp_i = 2.0E-5 ; modelParameters_p .
mFixedStepSize = tmp_i ; tmp_p = false ; modelParameters_p .
mVariableStepSolver = tmp_p ; tmp_p = false ; modelParameters_p .
mIsUsingODEN = tmp_p ; val = false ; tmp_p = slIsRapidAcceleratorSimulating (
) ; if ( tmp_p ) { tmp_p = ssGetGlobalInitialStatesAvailable ( rtS ) ; val =
( tmp_p && ssIsFirstInitCond ( rtS ) ) ; } modelParameters_p .
mLoadInitialState = val ; modelParameters_p . mZcDisabled = true ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . lwnxawb1gu ;
diagnosticTree_p = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * )
rtDW . ct2a0l3urc , & modelParameters_p , diagnosticManager ) ; if ( tmp_m !=
0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p
) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus ( rtS
, msg_p ) ; } } rtB . bq1g2orrwt [ 0 ] = rtP .
RateTransition_InitialCondition ; rtB . bq1g2orrwt [ 1 ] = rtP .
RateTransition_InitialCondition ; rtB . bq1g2orrwt [ 2 ] = rtP .
RateTransition_InitialCondition ; MdlInitialize ( ) ; } void MdlOutputs (
int_T tid ) { NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree *
diagnosticTree_p ; char * msg ; char * msg_p ; real_T tmp_m [ 21 ] ; real_T
tmp_p [ 8 ] ; real_T p1ssatpqpd [ 6 ] ; real_T azqlvs3kjb ; real_T e3qjyexb1x
; real_T kwf5nmhyo4 ; real_T time ; real_T time_p ; real_T tmp_j ; int32_T
tmp_i ; int_T tmp_g [ 4 ] ; int_T tmp_e [ 3 ] ; real32_T ny1jc0nbyc ;
boolean_T tmp ; if ( gblInportFileName != ( NULL ) ) { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( slIsRapidAcceleratorSimulating ( ) &&
externalInputIsInDatasetFormat ) { const int maxErrorBufferSize = 16384 ;
char errMsg [ 16384 ] ; bool bSetErrorStatus = false ; if ( ssIsSampleHit (
rtS , 3 , 0 ) ) { { real_T time = ssGetTaskTime ( rtS , 3 ) ; if ( !
rtwISigstreamManagerIsPeriodicFcnCall ( pISigstreamManager , 0 ) ) { int_T
sampleHit = 0U ; bSetErrorStatus = rtwISigstreamManagerInjectDataMultiRate (
pISigstreamManager , 0 , time , 1 , "<Root>/RefSignal" , "i0" , & sampleHit ,
errMsg , maxErrorBufferSize ) ; } } } if ( bSetErrorStatus ) {
ssSetErrorStatus ( rtS , errMsg ) ; return ; } } else { int_T currTimeIdx ;
int_T i ; if ( gblInportTUtables [ 0 ] . nTimePoints > 0 ) { if (
ssIsSampleHit ( rtS , 3 , 0 ) ) { { real_T time = ssGetTaskTime ( rtS , 3 ) ;
int k = 1 ; if ( gblInportTUtables [ 0 ] . nTimePoints == 1 ) { k = 0 ; }
currTimeIdx = rt_getTimeIdx ( gblInportTUtables [ 0 ] . time , time ,
gblInportTUtables [ 0 ] . nTimePoints , * ( gblInportTUtables [ 0 ] .
currTimeIdx ) , 1 , 0 ) ; ( * gblInportTUtables [ 0 ] . currTimeIdx ) =
currTimeIdx ; for ( i = 0 ; i < 1 ; i ++ ) { real32_T * realPtr1 = ( real32_T
* ) gblInportTUtables [ 0 ] . ur + i * gblInportTUtables [ 0 ] . nTimePoints
+ currTimeIdx ; real32_T * realPtr2 = realPtr1 + 1 * k ; ( void )
rt_Interpolate_Datatype ( realPtr1 , realPtr2 , & rtU . hilmfez3mk , time ,
gblInportTUtables [ 0 ] . time [ currTimeIdx ] , gblInportTUtables [ 0 ] .
time [ currTimeIdx + k ] , gblInportTUtables [ 0 ] . uDataType ) ; } } } } }
} if ( ssIsSampleHit ( rtS , 0 , 0 ) ) { srClearBC ( rtDW . ckv0xszqnn ) ; }
if ( ssIsSampleHit ( rtS , 0 , 0 ) ) { srClearBC ( rtDW . fvfxc3w3vh ) ; } if
( ssIsSampleHit ( rtS , 1 , 0 ) ) { azqlvs3kjb = rtDW . ep34iowbww [ rtDW .
cwozdkk230 ] ; ny1jc0nbyc = rtDW . bsf12pb2h5 ; kwf5nmhyo4 = azqlvs3kjb -
ny1jc0nbyc ; azqlvs3kjb = kwf5nmhyo4 * rtB . lh1uwltxg0 + rtDW . i1ov2bkgtq ;
if ( azqlvs3kjb > rtP . x607325_VNom ) { rtB . fu0jmlqjl4 = rtP .
x607325_VNom ; } else if ( azqlvs3kjb < - rtP . x607325_VNom ) { rtB .
fu0jmlqjl4 = - rtP . x607325_VNom ; } else { rtB . fu0jmlqjl4 = azqlvs3kjb ;
} if ( rtB . fu0jmlqjl4 >= 0.0 ) { rtB . gvcs01gfki = rtP . Zero_Value ;
srUpdateBC ( rtDW . ckv0xszqnn ) ; } else { rtB . fu0jmlqjl4 *= rtP .
Gain_Gain ; rtB . gvcs01gfki = rtP . x607325_VNom ; srUpdateBC ( rtDW .
fvfxc3w3vh ) ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . pfzpikjxxm [ 0
] = rtB . fu0jmlqjl4 ; rtB . pfzpikjxxm [ 1 ] = 0.0 ; rtB . pfzpikjxxm [ 2 ]
= 0.0 ; rtDW . pxmhr5ub4g [ 0 ] = ! ( rtB . pfzpikjxxm [ 0 ] == rtDW .
pxmhr5ub4g [ 1 ] ) ; rtDW . pxmhr5ub4g [ 1 ] = rtB . pfzpikjxxm [ 0 ] ; rtB .
pfzpikjxxm [ 0 ] = rtDW . pxmhr5ub4g [ 1 ] ; rtB . pfzpikjxxm [ 3 ] = rtDW .
pxmhr5ub4g [ 0 ] ; rtB . dm5dfvv4bd [ 0 ] = rtB . gvcs01gfki ; rtB .
dm5dfvv4bd [ 1 ] = 0.0 ; rtB . dm5dfvv4bd [ 2 ] = 0.0 ; rtDW . b3ieuujw5h [ 0
] = ! ( rtB . dm5dfvv4bd [ 0 ] == rtDW . b3ieuujw5h [ 1 ] ) ; rtDW .
b3ieuujw5h [ 1 ] = rtB . dm5dfvv4bd [ 0 ] ; rtB . dm5dfvv4bd [ 0 ] = rtDW .
b3ieuujw5h [ 1 ] ; rtB . dm5dfvv4bd [ 3 ] = rtDW . b3ieuujw5h [ 0 ] ; }
simulationData = ( NeslSimulationData * ) rtDW . an0iwqneok ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 10 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . ehs0ismbbz [ 0 ] ; simulationData -> mData -> mModeVector . mN = 3 ;
simulationData -> mData -> mModeVector . mX = & rtDW . pk134fwa0i [ 0 ] ; tmp
= false ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData ->
mData -> mIsMajorTimeStep = true ; tmp = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; simulationData -> mData -> mIsSolverCheckingCIC
= false ; simulationData -> mData -> mIsComputingJacobian = false ;
simulationData -> mData -> mIsEvaluatingF0 = false ; simulationData -> mData
-> mIsSolverRequestingReset = false ; simulationData -> mData ->
mIsOkayToUpdateMode = true ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB . pfzpikjxxm
[ 0 ] ; tmp_p [ 1 ] = rtB . pfzpikjxxm [ 1 ] ; tmp_p [ 2 ] = rtB . pfzpikjxxm
[ 2 ] ; tmp_p [ 3 ] = rtB . pfzpikjxxm [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ]
= rtB . dm5dfvv4bd [ 0 ] ; tmp_p [ 5 ] = rtB . dm5dfvv4bd [ 1 ] ; tmp_p [ 6 ]
= rtB . dm5dfvv4bd [ 2 ] ; tmp_p [ 7 ] = rtB . dm5dfvv4bd [ 3 ] ; tmp_e [ 2 ]
= 8 ; simulationData -> mData -> mInputValues . mN = 8 ; simulationData ->
mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 3 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; simulationData -> mData -> mOutputs . mN = 13 ; simulationData
-> mData -> mOutputs . mX = & rtB . jio04e5l2y [ 0 ] ; simulationData ->
mData -> mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX =
NULL ; tmp = ssIsSampleHit ( rtS , 1 , 0 ) ; simulationData -> mData ->
mIsFundamentalSampleHit = tmp ; simulationData -> mData -> mTolerances . mN =
0 ; simulationData -> mData -> mTolerances . mX = NULL ; simulationData ->
mData -> mCstateHasChanged = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . k32aasjgy5 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . curcdagsjb ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; simulationData = (
NeslSimulationData * ) rtDW . enba3cq10q ; time_p = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_p ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . idsvig0gbj ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . krdhpu2htv ; tmp =
false ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData ->
mData -> mIsMajorTimeStep = true ; tmp = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; simulationData -> mData -> mIsSolverCheckingCIC
= false ; simulationData -> mData -> mIsComputingJacobian = false ;
simulationData -> mData -> mIsEvaluatingF0 = false ; simulationData -> mData
-> mIsSolverRequestingReset = false ; simulationData -> mData ->
mIsOkayToUpdateMode = true ; tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = rtB . pfzpikjxxm
[ 0 ] ; tmp_m [ 1 ] = rtB . pfzpikjxxm [ 1 ] ; tmp_m [ 2 ] = rtB . pfzpikjxxm
[ 2 ] ; tmp_m [ 3 ] = rtB . pfzpikjxxm [ 3 ] ; tmp_g [ 1 ] = 4 ; tmp_m [ 4 ]
= rtB . dm5dfvv4bd [ 0 ] ; tmp_m [ 5 ] = rtB . dm5dfvv4bd [ 1 ] ; tmp_m [ 6 ]
= rtB . dm5dfvv4bd [ 2 ] ; tmp_m [ 7 ] = rtB . dm5dfvv4bd [ 3 ] ; tmp_g [ 2 ]
= 8 ; memcpy ( & tmp_m [ 8 ] , & rtB . jio04e5l2y [ 0 ] , 13U * sizeof (
real_T ) ) ; tmp_g [ 3 ] = 21 ; simulationData -> mData -> mInputValues . mN
= 21 ; simulationData -> mData -> mInputValues . mX = & tmp_m [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 4 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_g [ 0 ] ; simulationData -> mData -> mOutputs .
mN = 6 ; simulationData -> mData -> mOutputs . mX = & p1ssatpqpd [ 0 ] ;
simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData ->
mSampleHits . mX = NULL ; tmp = ssIsSampleHit ( rtS , 1 , 0 ) ;
simulationData -> mData -> mIsFundamentalSampleHit = tmp ; simulationData ->
mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX =
NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . lwnxawb1gu ;
diagnosticTree_p = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. ct2a0l3urc , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if (
tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if
( tmp ) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus
( rtS , msg_p ) ; } } ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
rtB . dbxopmzlmg = ( real32_T ) p1ssatpqpd [ 1 ] ; e3qjyexb1x = rtP .
GAIN_Gain * p1ssatpqpd [ 2 ] ; rtB . dyrup5dyjo = ( real32_T ) e3qjyexb1x ;
rtB . f3ovsqvcrg = ( real32_T ) p1ssatpqpd [ 0 ] ; rtY . mssvjyminv . Angle =
rtB . dbxopmzlmg ; rtY . mssvjyminv . Speed = rtB . dyrup5dyjo ; rtY .
mssvjyminv . Current = rtB . f3ovsqvcrg ; if ( azqlvs3kjb > rtP .
x607325_VNom ) { e3qjyexb1x = azqlvs3kjb - rtP . x607325_VNom ; } else if (
azqlvs3kjb >= - rtP . x607325_VNom ) { e3qjyexb1x = 0.0 ; } else { e3qjyexb1x
= azqlvs3kjb - ( - rtP . x607325_VNom ) ; } rtB . dq414il1rg = kwf5nmhyo4 *
rtB . knorcxbsbi ; kwf5nmhyo4 = muDoubleScalarSign ( e3qjyexb1x ) ; if (
muDoubleScalarIsNaN ( kwf5nmhyo4 ) ) { kwf5nmhyo4 = 0.0 ; } else { kwf5nmhyo4
= muDoubleScalarRem ( kwf5nmhyo4 , 256.0 ) ; } tmp_j = muDoubleScalarSign (
rtB . dq414il1rg ) ; if ( muDoubleScalarIsNaN ( tmp_j ) ) { tmp_j = 0.0 ; }
else { tmp_j = muDoubleScalarRem ( tmp_j , 256.0 ) ; } if ( ( rtP .
ZeroGain_Gain * azqlvs3kjb != e3qjyexb1x ) && ( ( kwf5nmhyo4 < 0.0 ? (
int32_T ) ( int8_T ) - ( int8_T ) ( uint8_T ) - kwf5nmhyo4 : ( int32_T ) (
int8_T ) ( uint8_T ) kwf5nmhyo4 ) == ( tmp_j < 0.0 ? ( int32_T ) ( int8_T ) -
( int8_T ) ( uint8_T ) - tmp_j : ( int32_T ) ( int8_T ) ( uint8_T ) tmp_j ) )
) { rtB . dq414il1rg = rtP . Constant1_Value ; } rtDW . ewa1ky2aid [ rtDW .
idud0pvpup == 0 ] = ny1jc0nbyc ; rtDW . jelgxmupj2 = ( int8_T ) ( rtDW .
idud0pvpup == 0 ) ; rtDW . fu12tl5lft [ rtDW . dmyez5rj5c == 0 ] = rtB .
dbxopmzlmg ; rtDW . gy1pmud0mj = ( int8_T ) ( rtDW . dmyez5rj5c == 0 ) ; } if
( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . idud0pvpup = rtDW . jelgxmupj2 ;
ny1jc0nbyc = rtDW . ewa1ky2aid [ rtDW . idud0pvpup ] ; if ( ssIsSampleHit (
rtS , 3 , 0 ) ) { rtB . bq1g2orrwt [ 0 ] = rtDW . jy0ot5cu1a [ 0 ] ; rtB .
bq1g2orrwt [ 1 ] = rtDW . jy0ot5cu1a [ 1 ] ; rtB . bq1g2orrwt [ 2 ] = rtDW .
jy0ot5cu1a [ 2 ] ; } azqlvs3kjb = rtP . x30A3_1 / 1000.0 * ( rtDW .
alwmsbt4vi - rtDW . pov3wcjhuh ) + rtDW . pov3wcjhuh ; rtB . ewoec4jpzh = rtP
. x30A3_2 / 1000.0 * ( rtDW . alwmsbt4vi - azqlvs3kjb ) + rtDW . djn0bieqvx ;
azqlvs3kjb = rtP . x30A3_3 / 1.0E+6 * ( rtDW . alwmsbt4vi - azqlvs3kjb ) +
rtDW . bwk11a0owp ; e3qjyexb1x = rtB . bq1g2orrwt [ 1 ] - rtB . ewoec4jpzh ;
rtDW . dmyez5rj5c = rtDW . gy1pmud0mj ; rtB . ekyms1wurq = rtDW . fu12tl5lft
[ rtDW . dmyez5rj5c ] ; rtB . dqihdby3th = ( ( rtB . m0pnodctem / rtB .
dj030qsvlg * rtB . bq1g2orrwt [ 2 ] + rtB . ciumjk5i4b / rtB . jv03wguaj0 *
rtB . bq1g2orrwt [ 1 ] ) + e3qjyexb1x * rtB . opqftfcl54 ) + rtDW .
kxbojg1zkz ; rtB . m0vxoft0f3 = e3qjyexb1x * rtB . hcs0qpqt3t ; if ( rtB .
dqihdby3th > rtP . x520886_ICont ) { rtB . mlqvt2g1kq = rtP . x520886_ICont ;
} else if ( rtB . dqihdby3th < - rtP . x520886_ICont ) { rtB . mlqvt2g1kq = -
rtP . x520886_ICont ; } else { rtB . mlqvt2g1kq = rtB . dqihdby3th ; } if (
rtDW . okvdpbekia > rtP . x520886_ICont ) { e3qjyexb1x = rtDW . okvdpbekia -
rtP . x520886_ICont ; } else if ( rtDW . okvdpbekia >= - rtP . x520886_ICont
) { e3qjyexb1x = 0.0 ; } else { e3qjyexb1x = rtDW . okvdpbekia - ( - rtP .
x520886_ICont ) ; } kwf5nmhyo4 = muDoubleScalarSign ( e3qjyexb1x ) ; if (
muDoubleScalarIsNaN ( kwf5nmhyo4 ) ) { kwf5nmhyo4 = 0.0 ; } else { kwf5nmhyo4
= muDoubleScalarRem ( kwf5nmhyo4 , 256.0 ) ; } tmp_j = muDoubleScalarSign (
rtB . m0vxoft0f3 ) ; if ( muDoubleScalarIsNaN ( tmp_j ) ) { tmp_j = 0.0 ; }
else { tmp_j = muDoubleScalarRem ( tmp_j , 256.0 ) ; } rtB . oixjxwb01f = ( (
rtP . ZeroGain_Gain_m40ckabu3g * rtDW . okvdpbekia != e3qjyexb1x ) && ( (
kwf5nmhyo4 < 0.0 ? ( int32_T ) ( int8_T ) - ( int8_T ) ( uint8_T ) -
kwf5nmhyo4 : ( int32_T ) ( int8_T ) ( uint8_T ) kwf5nmhyo4 ) == ( tmp_j < 0.0
? ( int32_T ) ( int8_T ) - ( int8_T ) ( uint8_T ) - tmp_j : ( int32_T ) (
int8_T ) ( uint8_T ) tmp_j ) ) ) ; if ( rtDW . gkhcdetyhn ) { rtB .
m0vxoft0f3 = rtP . Constant_Value ; } rtB . llz1du4krc = ( ( ny1jc0nbyc * rtB
. alrmk4rget - rtDW . djn0bieqvx * rtB . gv4hdvrgjr ) - rtDW . bwk11a0owp ) /
rtB . pyuyn3v4dn ; rtB . kzcwpgqn1e = - rtP . x607325_Torq / 1000.0 ;
kwf5nmhyo4 = rtP . x607325_Torq / 1000.0 ; if ( azqlvs3kjb > kwf5nmhyo4 ) {
rtB . kzcwpgqn1e = kwf5nmhyo4 ; } else if ( ! ( azqlvs3kjb < rtB . kzcwpgqn1e
) ) { rtB . kzcwpgqn1e = azqlvs3kjb ; } } if ( ssIsSampleHit ( rtS , 3 , 0 )
) { rtB . cooy4a5ivy = rtU . hilmfez3mk ; } if ( ssIsSampleHit ( rtS , 1 , 0
) ) { rtB . onfqtofgj3 = p1ssatpqpd [ 4 ] + rtP . Bias_Bias ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . dt3k0ww03w = p1ssatpqpd [ 5 ] ; }
kwf5nmhyo4 = rtP . GAIN_Gain_hw2btsfaso * p1ssatpqpd [ 3 ] ; rtB . lugwzdstdq
= ( real32_T ) kwf5nmhyo4 ; rtY . elshvuie5m . Angle = rtB . dbxopmzlmg ; rtY
. elshvuie5m . Speed = rtB . dyrup5dyjo ; rtY . elshvuie5m . Torque = rtB .
lugwzdstdq ; rtB . akpvqkyld1 = rtP . Gain_Gain_ktcz42xa5t * rtB . dyrup5dyjo
; rtB . gzvslpqkcd = rtDW . hu3arlbsbz [ rtDW . enj3fp5ek4 ] ; { if ( rtDW .
hjucof00tp . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW .
hjucof00tp . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
dyrup5dyjo + 0 ) ; } } rtB . fjg2zg0f3m = rtB . f3ovsqvcrg * rtB . dt3k0ww03w
; } UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID4 ( int_T tid ) { rtB .
lh1uwltxg0 = 1.0E-6 * rtP . x30A0_1 ; rtB . knorcxbsbi = 0.001 * rtP .
x30A0_2 ; rtB . hcs0qpqt3t = 1.0E-6 * rtP . x30A2_2 ; rtB . opqftfcl54 =
1.0E-6 * rtP . x30A2_1 ; rtB . pyuyn3v4dn = rtP . Gain_Gain_pah44eqa5n * rtP
. x30A3_5 * 1.0E-7 ; rtB . alrmk4rget = 1.0E-6 * rtP . x3001_5 ; rtB .
gv4hdvrgjr = rtP . Gain_Gain_gofic1b4wb * rtP . x30A3_4 *
9.5492965855137212E-6 ; rtB . m0pnodctem = ( rtP . x607325_RotIner + rtP .
feedforward_acceleration_Value ) * rtP . Gain1_Gain ; rtB . dj030qsvlg =
0.001 * rtP . x607325_TorqConst ; rtB . ciumjk5i4b = 9.5492965855137212E-6 *
rtP . feedforward_velocity_Value ; rtB . jv03wguaj0 = 0.001 * rtP .
x607325_TorqConst ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid )
{ NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
tmp_p [ 8 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e [ 3 ] ; boolean_T tmp
; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . ep34iowbww [ rtDW .
cwozdkk230 == 0 ] = rtB . mlqvt2g1kq ; rtDW . cwozdkk230 = ( int8_T ) ( rtDW
. cwozdkk230 == 0 ) ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW .
bsf12pb2h5 = rtB . f3ovsqvcrg ; rtDW . i1ov2bkgtq += rtP . Integrator_gainval
* rtB . dq414il1rg ; simulationData = ( NeslSimulationData * ) rtDW .
an0iwqneok ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN =
1 ; simulationData -> mData -> mTime . mX = & time ; simulationData -> mData
-> mContStates . mN = 0 ; simulationData -> mData -> mContStates . mX = NULL
; simulationData -> mData -> mDiscStates . mN = 10 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . ehs0ismbbz [ 0 ] ; simulationData -> mData ->
mModeVector . mN = 3 ; simulationData -> mData -> mModeVector . mX = & rtDW .
pk134fwa0i [ 0 ] ; tmp = false ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = true ; tmp = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; simulationData ->
mData -> mIsSolverCheckingCIC = false ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; simulationData -> mData -> mIsSolverRequestingReset = false ;
simulationData -> mData -> mIsOkayToUpdateMode = true ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . pfzpikjxxm [ 0 ] ; tmp_p [ 1 ] = rtB . pfzpikjxxm [ 1 ] ;
tmp_p [ 2 ] = rtB . pfzpikjxxm [ 2 ] ; tmp_p [ 3 ] = rtB . pfzpikjxxm [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . dm5dfvv4bd [ 0 ] ; tmp_p [ 5 ] = rtB .
dm5dfvv4bd [ 1 ] ; tmp_p [ 6 ] = rtB . dm5dfvv4bd [ 2 ] ; tmp_p [ 7 ] = rtB .
dm5dfvv4bd [ 3 ] ; tmp_e [ 2 ] = 8 ; simulationData -> mData -> mInputValues
. mN = 8 ; simulationData -> mData -> mInputValues . mX = & tmp_p [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 3 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_e [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . k32aasjgy5 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . curcdagsjb , NESL_SIM_UPDATE
, simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
} if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { rtDW . jy0ot5cu1a [ 0 ] = 0.0 ; rtDW
. jy0ot5cu1a [ 1 ] = rtB . cooy4a5ivy ; rtDW . jy0ot5cu1a [ 2 ] = 0.0 ; } if
( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . alwmsbt4vi = rtB . ekyms1wurq ;
rtDW . pov3wcjhuh += rtP . DiscreteTimeIntegrator1_gainval * rtB . ewoec4jpzh
; rtDW . djn0bieqvx += rtP . DiscreteTimeIntegrator_gainval * rtB .
llz1du4krc ; if ( rtDW . djn0bieqvx >= rtP . x607325_RotOmgMax *
3.1415926535897931 / 30.0 ) { rtDW . djn0bieqvx = rtP . x607325_RotOmgMax *
3.1415926535897931 / 30.0 ; } else if ( rtDW . djn0bieqvx <= - rtP .
x607325_RotOmgMax * 3.1415926535897931 / 30.0 ) { rtDW . djn0bieqvx = - rtP .
x607325_RotOmgMax * 3.1415926535897931 / 30.0 ; } rtDW . bwk11a0owp = rtB .
kzcwpgqn1e ; rtDW . kxbojg1zkz += rtP .
DiscreteTimeIntegrator_gainval_bz4vjpssjb * rtB . m0vxoft0f3 ; rtDW .
okvdpbekia = rtB . dqihdby3th ; rtDW . gkhcdetyhn = rtB . oixjxwb01f ; rtDW .
hu3arlbsbz [ rtDW . enj3fp5ek4 == 0 ] = rtB . ewoec4jpzh ; rtDW . enj3fp5ek4
= ( int8_T ) ( rtDW . enj3fp5ek4 == 0 ) ; } UNUSED_PARAMETER ( tid ) ; } void
MdlUpdateTID4 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlTerminate
( void ) { neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
k32aasjgy5 ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
an0iwqneok ) ; nesl_erase_simulator (
"Motor_and_Driver/Solver Configuration_1" ) ; nesl_destroy_registry ( ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . lwnxawb1gu
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . enba3cq10q
) ; nesl_erase_simulator ( "Motor_and_Driver/Solver Configuration_1" ) ;
nesl_destroy_registry ( ) ; { if ( rtDW . hjucof00tp . AQHandles ) {
sdiTerminateStreaming ( & rtDW . hjucof00tp . AQHandles ) ; } } } static void
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
1u << numBits ) - 1u ) ; } mxArray * mr_Motor_and_Driver_GetDWork ( ) {
static const char * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "NULL_PrevZCX"
, } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
rtB ) , sizeof ( rtB ) ) ; { static const char * rtdwDataFieldNames [ 30 ] =
{ "rtDW.i1ov2bkgtq" , "rtDW.pxmhr5ub4g" , "rtDW.b3ieuujw5h" ,
"rtDW.ehs0ismbbz" , "rtDW.pov3wcjhuh" , "rtDW.djn0bieqvx" , "rtDW.bwk11a0owp"
, "rtDW.kxbojg1zkz" , "rtDW.okvdpbekia" , "rtDW.ep34iowbww" ,
"rtDW.idsvig0gbj" , "rtDW.jy0ot5cu1a" , "rtDW.hu3arlbsbz" , "rtDW.bsf12pb2h5"
, "rtDW.alwmsbt4vi" , "rtDW.ewa1ky2aid" , "rtDW.fu12tl5lft" ,
"rtDW.pk134fwa0i" , "rtDW.krdhpu2htv" , "rtDW.cwozdkk230" , "rtDW.jelgxmupj2"
, "rtDW.idud0pvpup" , "rtDW.gy1pmud0mj" , "rtDW.dmyez5rj5c" ,
"rtDW.enj3fp5ek4" , "rtDW.fvfxc3w3vh" , "rtDW.ckv0xszqnn" , "rtDW.goks4dbmi4"
, "rtDW.apyngkq3zi" , "rtDW.gkhcdetyhn" , } ; mxArray * rtdwData =
mxCreateStructMatrix ( 1 , 1 , 30 , rtdwDataFieldNames ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * )
& ( rtDW . i1ov2bkgtq ) , sizeof ( rtDW . i1ov2bkgtq ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * )
& ( rtDW . pxmhr5ub4g ) , sizeof ( rtDW . pxmhr5ub4g ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * )
& ( rtDW . b3ieuujw5h ) , sizeof ( rtDW . b3ieuujw5h ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * )
& ( rtDW . ehs0ismbbz ) , sizeof ( rtDW . ehs0ismbbz ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * )
& ( rtDW . pov3wcjhuh ) , sizeof ( rtDW . pov3wcjhuh ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * )
& ( rtDW . djn0bieqvx ) , sizeof ( rtDW . djn0bieqvx ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * )
& ( rtDW . bwk11a0owp ) , sizeof ( rtDW . bwk11a0owp ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * )
& ( rtDW . kxbojg1zkz ) , sizeof ( rtDW . kxbojg1zkz ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * )
& ( rtDW . okvdpbekia ) , sizeof ( rtDW . okvdpbekia ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * )
& ( rtDW . ep34iowbww ) , sizeof ( rtDW . ep34iowbww ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * )
& ( rtDW . idsvig0gbj ) , sizeof ( rtDW . idsvig0gbj ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * )
& ( rtDW . jy0ot5cu1a ) , sizeof ( rtDW . jy0ot5cu1a ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * )
& ( rtDW . hu3arlbsbz ) , sizeof ( rtDW . hu3arlbsbz ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * )
& ( rtDW . bsf12pb2h5 ) , sizeof ( rtDW . bsf12pb2h5 ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * )
& ( rtDW . alwmsbt4vi ) , sizeof ( rtDW . alwmsbt4vi ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * )
& ( rtDW . ewa1ky2aid ) , sizeof ( rtDW . ewa1ky2aid ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * )
& ( rtDW . fu12tl5lft ) , sizeof ( rtDW . fu12tl5lft ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void * )
& ( rtDW . pk134fwa0i ) , sizeof ( rtDW . pk134fwa0i ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * )
& ( rtDW . krdhpu2htv ) , sizeof ( rtDW . krdhpu2htv ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * )
& ( rtDW . cwozdkk230 ) , sizeof ( rtDW . cwozdkk230 ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void * )
& ( rtDW . jelgxmupj2 ) , sizeof ( rtDW . jelgxmupj2 ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * )
& ( rtDW . idud0pvpup ) , sizeof ( rtDW . idud0pvpup ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void * )
& ( rtDW . gy1pmud0mj ) , sizeof ( rtDW . gy1pmud0mj ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void * )
& ( rtDW . dmyez5rj5c ) , sizeof ( rtDW . dmyez5rj5c ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void * )
& ( rtDW . enj3fp5ek4 ) , sizeof ( rtDW . enj3fp5ek4 ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void * )
& ( rtDW . fvfxc3w3vh ) , sizeof ( rtDW . fvfxc3w3vh ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void * )
& ( rtDW . ckv0xszqnn ) , sizeof ( rtDW . ckv0xszqnn ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void * )
& ( rtDW . goks4dbmi4 ) , sizeof ( rtDW . goks4dbmi4 ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void * )
& ( rtDW . apyngkq3zi ) , sizeof ( rtDW . apyngkq3zi ) ) ;
mr_Motor_and_Driver_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const void * )
& ( rtDW . gkhcdetyhn ) , sizeof ( rtDW . gkhcdetyhn ) ) ; mxSetFieldByNumber
( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_Motor_and_Driver_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW , 0
, 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber (
ssDW , 0 , 1 ) ; mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & (
rtDW . i1ov2bkgtq ) , rtdwData , 0 , 0 , sizeof ( rtDW . i1ov2bkgtq ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . pxmhr5ub4g
) , rtdwData , 0 , 1 , sizeof ( rtDW . pxmhr5ub4g ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . b3ieuujw5h
) , rtdwData , 0 , 2 , sizeof ( rtDW . b3ieuujw5h ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . ehs0ismbbz
) , rtdwData , 0 , 3 , sizeof ( rtDW . ehs0ismbbz ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . pov3wcjhuh
) , rtdwData , 0 , 4 , sizeof ( rtDW . pov3wcjhuh ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . djn0bieqvx
) , rtdwData , 0 , 5 , sizeof ( rtDW . djn0bieqvx ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . bwk11a0owp
) , rtdwData , 0 , 6 , sizeof ( rtDW . bwk11a0owp ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . kxbojg1zkz
) , rtdwData , 0 , 7 , sizeof ( rtDW . kxbojg1zkz ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . okvdpbekia
) , rtdwData , 0 , 8 , sizeof ( rtDW . okvdpbekia ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . ep34iowbww
) , rtdwData , 0 , 9 , sizeof ( rtDW . ep34iowbww ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . idsvig0gbj
) , rtdwData , 0 , 10 , sizeof ( rtDW . idsvig0gbj ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . jy0ot5cu1a
) , rtdwData , 0 , 11 , sizeof ( rtDW . jy0ot5cu1a ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . hu3arlbsbz
) , rtdwData , 0 , 12 , sizeof ( rtDW . hu3arlbsbz ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . bsf12pb2h5
) , rtdwData , 0 , 13 , sizeof ( rtDW . bsf12pb2h5 ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . alwmsbt4vi
) , rtdwData , 0 , 14 , sizeof ( rtDW . alwmsbt4vi ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . ewa1ky2aid
) , rtdwData , 0 , 15 , sizeof ( rtDW . ewa1ky2aid ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . fu12tl5lft
) , rtdwData , 0 , 16 , sizeof ( rtDW . fu12tl5lft ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . pk134fwa0i
) , rtdwData , 0 , 17 , sizeof ( rtDW . pk134fwa0i ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . krdhpu2htv
) , rtdwData , 0 , 18 , sizeof ( rtDW . krdhpu2htv ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . cwozdkk230
) , rtdwData , 0 , 19 , sizeof ( rtDW . cwozdkk230 ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . jelgxmupj2
) , rtdwData , 0 , 20 , sizeof ( rtDW . jelgxmupj2 ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . idud0pvpup
) , rtdwData , 0 , 21 , sizeof ( rtDW . idud0pvpup ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . gy1pmud0mj
) , rtdwData , 0 , 22 , sizeof ( rtDW . gy1pmud0mj ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . dmyez5rj5c
) , rtdwData , 0 , 23 , sizeof ( rtDW . dmyez5rj5c ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . enj3fp5ek4
) , rtdwData , 0 , 24 , sizeof ( rtDW . enj3fp5ek4 ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . fvfxc3w3vh
) , rtdwData , 0 , 25 , sizeof ( rtDW . fvfxc3w3vh ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . ckv0xszqnn
) , rtdwData , 0 , 26 , sizeof ( rtDW . ckv0xszqnn ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . goks4dbmi4
) , rtdwData , 0 , 27 , sizeof ( rtDW . goks4dbmi4 ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . apyngkq3zi
) , rtdwData , 0 , 28 , sizeof ( rtDW . apyngkq3zi ) ) ;
mr_Motor_and_Driver_restoreDataFromMxArray ( ( void * ) & ( rtDW . gkhcdetyhn
) , rtdwData , 0 , 29 , sizeof ( rtDW . gkhcdetyhn ) ) ; } } mxArray *
mr_Motor_and_Driver_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 10 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 10 ] = { "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , "Scope" , "Scope" , "Scope" , "Scope" , "Scope" ,
"Scope" , "Scope" , "Scope" , } ; static const char * blockPath [ 10 ] = {
"Motor_and_Driver/Solver Configuration/EVAL_KEY/STATE_1" ,
"Motor_and_Driver/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ,
"Motor_and_Driver/Motor/Scope" , "Motor_and_Driver/Visualization/Scope6" ,
"Motor_and_Driver/Visualization/Scope" ,
"Motor_and_Driver/Visualization/Scope1" ,
"Motor_and_Driver/Visualization/Scope2" ,
"Motor_and_Driver/Visualization/Scope3" ,
"Motor_and_Driver/Visualization/Scope4" ,
"Motor_and_Driver/Visualization/Scope5" , } ; static const int reason [ 10 ]
= { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , } ; for ( subs [ 0 ] = 0 ; subs [
0 ] < 10 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( double ) reason [ subs [ 0 ] ] ) ) ; } } return data
; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 0 ) ;
ssSetNumY ( rtS , 2 ) ; ssSetNumU ( rtS , 1 ) ; ssSetDirectFeedThrough ( rtS
, 1 ) ; ssSetNumSampleTimes ( rtS , 4 ) ; ssSetNumBlocks ( rtS , 171 ) ;
ssSetNumBlockIO ( rtS , 36 ) ; ssSetNumBlockParams ( rtS , 52 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 2.0E-5 ) ;
ssSetSampleTime ( rtS , 1 , 6.0E-5 ) ; ssSetSampleTime ( rtS , 2 , 0.0004 ) ;
ssSetSampleTime ( rtS , 3 , 0.1 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 0.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ;
ssSetOffsetTime ( rtS , 3 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 223359711U ) ; ssSetChecksumVal ( rtS , 1 ,
930802253U ) ; ssSetChecksumVal ( rtS , 2 , 1300783331U ) ; ssSetChecksumVal
( rtS , 3 , 2119893538U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; ( void ) memset ( ( char * ) rtS , 0 ,
sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0 , sizeof
( struct _ssMdlInfo ) ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ;
ssSetExecutionInfo ( rtS , executionInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { ssSetU ( rtS , ( ( void * ) & rtU ) ) ; rtU . hilmfez3mk = 0.0F
; } { ssSetY ( rtS , & rtY ) ; ( void ) memset ( & rtY , 0 , sizeof ( ExtY )
) ; ssSetWorkSizeInBytes ( rtS , sizeof ( rtY ) , "YOut" ) ; } { void * dwork
= ( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset (
dwork , 0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void )
memset ( ( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ;
ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo . numDataTypes = 22 ;
dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = &
rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = & rtBTransTable ; dtInfo .
PTransTable = & rtPTransTable ; dtInfo . dataTypeInfoTable =
rtDataTypeInfoTable ; } Motor_and_Driver_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"Motor_and_Driver" ) ; ssSetPath ( rtS , "Motor_and_Driver" ) ; ssSetTStart (
rtS , 0.0 ) ; ssSetTFinal ( rtS , 10.0 ) ; ssSetStepSize ( rtS , 2.0E-5 ) ;
ssSetFixedStepSize ( rtS , 2.0E-5 ) ; { static RTWLogInfo rt_DataLoggingInfo
; rt_DataLoggingInfo . loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 1 , 2
, 2 , 10 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
} ; static int_T rt_LoggedStateDimensions [ ] = { 1 , 2 , 2 , 10 , 1 , 1 , 1
, 1 , 1 , 1 , 1 } ; static boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_SINGLE , SS_SINGLE } ; static int_T rt_LoggedStateComplexSignals [ ] = { 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) } ; static const char_T * rt_LoggedStateLabels [ ] = { "DSTATE" ,
"Discrete" , "Discrete" , "Discrete" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = {
 "Motor_and_Driver/Driver/Current controller/Discrete PI Controller/Integrator/Discrete/Integrator"
, "Motor_and_Driver/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ,
"Motor_and_Driver/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ,
"Motor_and_Driver/Solver\nConfiguration/EVAL_KEY/STATE_1" ,
"Motor_and_Driver/Driver/Velocity observer/Discrete-Time\nIntegrator1" ,
"Motor_and_Driver/Driver/Velocity observer/Discrete-Time\nIntegrator" ,
"Motor_and_Driver/Driver/Velocity observer/Unit Delay" ,
"Motor_and_Driver/Driver/Velocity controller PI/Discrete-Time\nIntegrator" ,
"Motor_and_Driver/Driver/Velocity controller PI/Unit Delay" ,
"Motor_and_Driver/Driver/Current controller/Unit Delay1" ,
"Motor_and_Driver/Driver/Unit Delay" } ; static const char_T *
rt_LoggedStateNames [ ] = { "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" } ; static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 } ; static RTWLogDataTypeConvert
rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 ,
1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } ,
{ 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_SINGLE , SS_SINGLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_SINGLE , SS_SINGLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 3 , 4 , 5 ,
6 , 7 , 8 , 32 , 33 } ; static RTWLogSignalInfo rt_LoggedStateSignalInfo = {
11 , rt_LoggedStateWidths , rt_LoggedStateNumDimensions ,
rt_LoggedStateDimensions , rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) ,
rt_LoggedStateDataTypeIds , rt_LoggedStateComplexSignals , ( NULL ) ,
rt_LoggingStatePreprocessingFcnPtrs , { rt_LoggedStateLabels } , ( NULL ) , (
NULL ) , ( NULL ) , { rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 11 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtDW . i1ov2bkgtq ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) rtDW . pxmhr5ub4g ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) rtDW . b3ieuujw5h ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) rtDW . ehs0ismbbz ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtDW . pov3wcjhuh ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtDW . djn0bieqvx ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtDW . bwk11a0owp ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtDW . kxbojg1zkz ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtDW . okvdpbekia ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtDW . bsf12pb2h5 ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtDW . alwmsbt4vi ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "tmp_raccel_xout" ) ; rtliSetLogXFinal (
ssGetRTWLogInfo ( rtS ) , "xFinal" ) ; rtliSetLogVarNameModifier (
ssGetRTWLogInfo ( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS
) , 2 ) ; rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 0 ) ;
rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS ) , 1 ) ; rtliSetLogY (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo ( ssGetRTWLogInfo (
rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL
) ) ; } { static ssSolverInfo slvrInfo ; ssSetSolverInfo ( rtS , & slvrInfo )
; ssSetSolverName ( rtS , "FixedStepDiscrete" ) ; ssSetVariableStepSolver (
rtS , 0 ) ; ssSetSolverConsistencyChecking ( rtS , 0 ) ;
ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ; ssSetSolverRobustResetMethod (
rtS , 0 ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetTNextTid ( rtS , INT_MIN ) ;
ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; } ssSetChecksumVal ( rtS , 0 , 223359711U
) ; ssSetChecksumVal ( rtS , 1 , 930802253U ) ; ssSetChecksumVal ( rtS , 2 ,
1300783331U ) ; ssSetChecksumVal ( rtS , 3 , 2119893538U ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [ 4 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = (
sysRanDType * ) & rtDW . ckv0xszqnn ; systemRan [ 2 ] = ( sysRanDType * ) &
rtDW . fvfxc3w3vh ; systemRan [ 3 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_Motor_and_Driver_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_Motor_and_Driver_GetDWork ) ;
slsaSetWorkFcnForSimTargetOP ( rtS , mr_Motor_and_Driver_SetDWork ) ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 4 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID4 ( tid ) ; }
