#include "DZ_DSMC_capi.h"
#include "DZ_DSMC.h"
#include "DZ_DSMC_private.h"
static RegMdlInfo rtMdlInfo_DZ_DSMC [ 45 ] = { { "dugemc2sabj" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "DZ_DSMC" } , {
"jgbdkq41zr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DZ_DSMC" } , { "on5zx2b221" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "DZ_DSMC" } , { "kjhljsa5gl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "DZ_DSMC" } , { "c4ijbunlbo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DZ_DSMC" } , {
"hfqpwavqym" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DZ_DSMC" } , { "c3w0mf3fuo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "DZ_DSMC" } , { "k544wrmhyk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "DZ_DSMC" } , { "gpalswceu3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DZ_DSMC" } , {
"no4rsekwgc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DZ_DSMC" } , { "mjpw4j13kq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "DZ_DSMC" } , { "gw2de31bgl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "DZ_DSMC" } , { "dejgxakak5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DZ_DSMC" } , {
"clkhzhey2f" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DZ_DSMC" } , { "l4urvd54fs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "DZ_DSMC" } , { "dkehgdhicg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "DZ_DSMC" } , { "krwu4r0kuq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DZ_DSMC" } , {
"kz3kjg533t" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DZ_DSMC" } , { "iff2hjlnlh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "DZ_DSMC" } , { "feedt00j3y" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "DZ_DSMC" } , { "h1hjhiyipq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DZ_DSMC" } , {
"nl15vcjauu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DZ_DSMC" } , { "ennfpc0v4s" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "DZ_DSMC" } , { "afby5huulj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "DZ_DSMC" } , { "DZ_DSMC" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "orph2xbn0z" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DZ_DSMC" } , {
"myhibtni12" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DZ_DSMC" } , { "fvmmfyrjw1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "DZ_DSMC" } , { "RespSignal" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "motorInfo" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"carp3dc4p0e" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_DZ_DSMC_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "DZ_DSMC" } , {
"mr_DZ_DSMC_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DZ_DSMC" } , {
"mr_DZ_DSMC_cacheBitFieldToCellArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "DZ_DSMC" } , {
"mr_DZ_DSMC_restoreDataFromMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "DZ_DSMC" } , {
"mr_DZ_DSMC_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "DZ_DSMC" } , { "mr_DZ_DSMC_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DZ_DSMC" } , {
"mr_DZ_DSMC_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "DZ_DSMC" } , { "mr_DZ_DSMC_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DZ_DSMC" } , {
"mr_DZ_DSMC_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "DZ_DSMC" } , { "mr_DZ_DSMC_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DZ_DSMC" } , {
"mr_DZ_DSMC_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"DZ_DSMC" } , { "mr_DZ_DSMC_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "DZ_DSMC" } , { "DZ_DSMC.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1
, ( NULL ) } , { "DZ_DSMC.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"DZ_DSMC" } } ; hbb5iv14ndy hbb5iv14nd = { { 10.0598631F , 0.988227904F } , {
0.0251162369F , 0.992807806F } , { 0.999403477F , 0.0216036141F ,
0.0183158685F , 0.00224760897F } , 0.015F , 0.898495138F , 30.0048714F ,
0.929886758F , 0.0F , 1.00143456E-10F , 1.04142869F , 5U , 10U , 0.0F , 0.0F
, { 10.0752115F , 0.186476275F } , 1.23378623F , 9.54929638F , 0.104719758F }
; void afby5huulj ( fvmmfyrjw1 * const hl4iwqr41h , dejgxakak5 * localDW ) {
simTgtPushModelBlockPath ( hl4iwqr41h -> _mdlRefSfcnS ,
"DZ_DSMC/Variant Subsystem2/High-fidelity model/Model" ) ; jyhh3oc42w ( & (
localDW -> itpis5vn4s . rtm ) , & ( localDW -> itpis5vn4s . rtdw ) ) ;
simTgtPopModelBlockPath ( hl4iwqr41h -> _mdlRefSfcnS ,
"DZ_DSMC/Variant Subsystem2/High-fidelity model/Model" ) ; if ( (
ssGetSimMode ( hl4iwqr41h -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( (
hl4iwqr41h -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( hl4iwqr41h ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( hl4iwqr41h
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "DZ_DSMC/Variant Subsystem2" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiDims forEachMdlRefDims ; int_T forEachMdlRefDimsArray
[ 32 ] ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncQueueHandle hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_SINGLE ) ; {
sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [ 1 ] = { 2 } ; sigDims . nDims = 1
; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( hl4iwqr41h
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , hl4iwqr41h ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> bqwsdckcpv . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , hl4iwqr41h -> DataMapInfo
. mmi . InstanceMap . fullPath , "9669162d-f089-4e36-8d65-4ed9b776333a" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if (
localDW -> bqwsdckcpv . AQHandles ) { sdiSetSignalSampleTimeString ( localDW
-> bqwsdckcpv . AQHandles , "0.015" , 0.015 , rtmGetTFinal ( hl4iwqr41h ) ) ;
sdiSetRunStartTime ( localDW -> bqwsdckcpv . AQHandles , rtmGetTaskTime (
hl4iwqr41h , 4 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
bqwsdckcpv . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> bqwsdckcpv . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> bqwsdckcpv . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } } void h1hjhiyipq ( dejgxakak5 *
localDW ) { int32_T i ; localDW -> c01aucwcgj [ 0 ] = hbb5iv14nd . P_19 ;
localDW -> c01aucwcgj [ 1 ] = hbb5iv14nd . P_19 ; localDW -> hirt5tdci2 =
hbb5iv14nd . P_20 ; for ( i = 0 ; i < 10 ; i ++ ) { localDW -> bdafkigi1z [ i
] = hbb5iv14nd . P_14 ; } localDW -> gct4ggaozf = 0.0 ; lemmpwcmcz ( & (
localDW -> itpis5vn4s . rtb ) , & ( localDW -> itpis5vn4s . rtdw ) ) ; } void
feedt00j3y ( dejgxakak5 * localDW ) { int32_T i ; localDW -> c01aucwcgj [ 0 ]
= hbb5iv14nd . P_19 ; localDW -> c01aucwcgj [ 1 ] = hbb5iv14nd . P_19 ;
localDW -> hirt5tdci2 = hbb5iv14nd . P_20 ; for ( i = 0 ; i < 10 ; i ++ ) {
localDW -> bdafkigi1z [ i ] = hbb5iv14nd . P_14 ; } i0x5alzcfy ( & ( localDW
-> itpis5vn4s . rtdw ) ) ; localDW -> gct4ggaozf = 0.0 ; } void ennfpc0v4s (
dejgxakak5 * localDW ) { icyzbmak44 ( & ( localDW -> itpis5vn4s . rtm ) , & (
localDW -> itpis5vn4s . rtdw ) ) ; } void DZ_DSMC ( fvmmfyrjw1 * const
hl4iwqr41h , const real32_T mirn5utboy [ 2 ] , const real32_T * c4rw1gubgl ,
real32_T fk5fr05cin [ 2 ] , clkhzhey2f * localB , dejgxakak5 * localDW ) {
real_T g345syqcwr ; real_T nmk ; real_T y ; int32_T i ; int32_T j ; real32_T
Lamk ; real32_T a5lxyfqiuu_tmp ; real32_T bqyuaz2qfj_idx_0 ; real32_T
bqyuaz2qfj_idx_1 ; real32_T gazdr1apvc ; real32_T udk ; uint8_T tmp ; if (
rtmIsSampleHit ( hl4iwqr41h , 4 , 0 ) ) { fk5fr05cin [ 0 ] = localDW ->
c01aucwcgj [ 0 ] ; fk5fr05cin [ 1 ] = localDW -> c01aucwcgj [ 1 ] ; { if (
localDW -> bqwsdckcpv . AQHandles && ssGetLogOutput ( hl4iwqr41h ->
_mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> bqwsdckcpv . AQHandles ,
rtmGetTaskTime ( hl4iwqr41h , 4 ) , ( char * ) & fk5fr05cin [ 0 ] + 0 ) ; } }
bqyuaz2qfj_idx_0 = fk5fr05cin [ 0 ] - mirn5utboy [ 0 ] ; bqyuaz2qfj_idx_1 =
fk5fr05cin [ 1 ] - mirn5utboy [ 1 ] ; localB -> ogysimvyrk = localDW ->
hirt5tdci2 ; localB -> cu03f02rez_mbvzarwird [ 0 ] = localB -> ogysimvyrk ;
for ( i = 0 ; i < 10 ; i ++ ) { localB -> cu03f02rez_mbvzarwird [ i + 1 ] =
localDW -> bdafkigi1z [ i ] ; } g345syqcwr = rtmGetTaskTime ( hl4iwqr41h , 4
) ; a5lxyfqiuu_tmp = hbb5iv14nd . P_7 [ 0 ] * bqyuaz2qfj_idx_0 + hbb5iv14nd .
P_7 [ 1 ] * bqyuaz2qfj_idx_1 ; if ( localDW -> gct4ggaozf < hbb5iv14nd . P_18
) { udk = muSingleScalarCeil ( ( real32_T ) muDoubleScalarRem ( g345syqcwr ,
hbb5iv14nd . P_10 ) ) ; if ( udk < 256.0F ) { if ( udk >= 0.0F ) { tmp = (
uint8_T ) udk ; } else { tmp = 0U ; } } else if ( udk >= 256.0F ) { tmp =
MAX_uint8_T ; } else { tmp = 0U ; } if ( tmp == 0 ) { g345syqcwr =
muDoubleScalarCeil ( g345syqcwr ) ; if ( g345syqcwr < 256.0 ) { if (
g345syqcwr >= 0.0 ) { tmp = ( uint8_T ) g345syqcwr ; } else { tmp = 0U ; } }
else if ( g345syqcwr >= 256.0 ) { tmp = MAX_uint8_T ; } else { tmp = 0U ; }
if ( tmp != 0 ) { localDW -> gct4ggaozf ++ ; } } } udk = 0.0F ; for ( i = 0 ;
i < ( int32_T ) localDW -> gct4ggaozf ; i ++ ) { if ( ( real_T ) i + 1.0 >
localDW -> gct4ggaozf ) { y = ( rtNaN ) ; } else { g345syqcwr = ( real_T ) i
+ 1.0 ; if ( ( boolean_T ) ( ( boolean_T ) ( muDoubleScalarIsInf ( localDW ->
gct4ggaozf ) ^ 1 ) & ( boolean_T ) ( muDoubleScalarIsNaN ( localDW ->
gct4ggaozf ) ^ 1 ) ) ) { if ( ( real_T ) i + 1.0 > localDW -> gct4ggaozf /
2.0 ) { g345syqcwr = localDW -> gct4ggaozf - ( ( real_T ) i + 1.0 ) ; } if (
g345syqcwr > 1000.0 ) { y = ( rtInf ) ; } else { y = 1.0 ; nmk = localDW ->
gct4ggaozf - g345syqcwr ; for ( j = 0 ; j < ( int32_T ) g345syqcwr ; j ++ ) {
y *= ( ( ( real_T ) j + 1.0 ) + nmk ) / ( ( real_T ) j + 1.0 ) ; } y =
muDoubleScalarRound ( y ) ; } } else { y = ( rtNaN ) ; } } udk -= ( real32_T
) ( muDoubleScalarPower ( - 1.0 , ( real_T ) i + 1.0 ) * y ) * localB ->
cu03f02rez_mbvzarwird [ i + 1 ] ; } gazdr1apvc = muSingleScalarAbs (
a5lxyfqiuu_tmp ) ; Lamk = ( 1.0F - hbb5iv14nd . P_11 ) * muSingleScalarExp (
- hbb5iv14nd . P_15 * muSingleScalarPower ( gazdr1apvc , hbb5iv14nd . P_17 )
) + hbb5iv14nd . P_11 ; if ( a5lxyfqiuu_tmp > hbb5iv14nd . P_12 ) { i = 1 ; }
else if ( gazdr1apvc <= hbb5iv14nd . P_12 ) { i = 0 ; } else { i = - 1 ; }
a5lxyfqiuu_tmp *= ( 1.0F - hbb5iv14nd . P_13 ) * Lamk ; Lamk = hbb5iv14nd .
P_16 / Lamk * ( real32_T ) i ; gazdr1apvc = ( ( ( ( ( hbb5iv14nd . P_7 [ 0 ]
* hbb5iv14nd . P_9 [ 0 ] + hbb5iv14nd . P_7 [ 1 ] * hbb5iv14nd . P_9 [ 1 ] )
* bqyuaz2qfj_idx_0 + ( hbb5iv14nd . P_7 [ 0 ] * hbb5iv14nd . P_9 [ 2 ] +
hbb5iv14nd . P_7 [ 1 ] * hbb5iv14nd . P_9 [ 3 ] ) * bqyuaz2qfj_idx_1 ) -
a5lxyfqiuu_tmp ) + Lamk ) + udk ) / - ( hbb5iv14nd . P_7 [ 0 ] * hbb5iv14nd .
P_8 [ 0 ] + hbb5iv14nd . P_7 [ 1 ] * hbb5iv14nd . P_8 [ 1 ] ) ; localB ->
kulumbncxa = ( ( ( a5lxyfqiuu_tmp - Lamk ) + ( localB ->
cu03f02rez_mbvzarwird [ 0 ] - udk ) ) - ( hbb5iv14nd . P_21 [ 0 ] *
bqyuaz2qfj_idx_0 + hbb5iv14nd . P_21 [ 1 ] * bqyuaz2qfj_idx_1 ) ) -
hbb5iv14nd . P_22 * gazdr1apvc ; a5lxyfqiuu_tmp = truncf ( ( * c4rw1gubgl +
gazdr1apvc ) * hbb5iv14nd . P_23 ) ; if ( ( boolean_T ) ( muSingleScalarIsNaN
( a5lxyfqiuu_tmp ) | muSingleScalarIsInf ( a5lxyfqiuu_tmp ) ) ) {
a5lxyfqiuu_tmp = 0.0F ; } else { a5lxyfqiuu_tmp = muSingleScalarRem (
a5lxyfqiuu_tmp , 4.2949673E+9F ) ; } localB -> oh43aktqez = ( real32_T ) (
a5lxyfqiuu_tmp < 0.0F ? - ( int32_T ) ( uint32_T ) - a5lxyfqiuu_tmp : (
int32_T ) ( uint32_T ) a5lxyfqiuu_tmp ) * hbb5iv14nd . P_24 ; } if (
rtmIsSampleHit ( hl4iwqr41h , 1 , 0 ) || rtmIsSampleHit ( hl4iwqr41h , 2 , 0
) || rtmIsSampleHit ( hl4iwqr41h , 3 , 0 ) || rtmIsSampleHit ( hl4iwqr41h , 4
, 0 ) ) { Motor_and_Driver ( & ( localDW -> itpis5vn4s . rtm ) , & localB ->
oh43aktqez , & localB -> av2p2jc2s0 , & localB -> c3z15gugfc , & localB ->
m50yh1ldum , & localB -> b2d0ux4vc4 , & localB -> j1oczanrvv , & localB ->
dadxhr525x , & ( localDW -> itpis5vn4s . rtb ) , & ( localDW -> itpis5vn4s .
rtdw ) ) ; } if ( rtmIsSampleHit ( hl4iwqr41h , 2 , 0 ) && rtmIsSampleHit (
hl4iwqr41h , 4 , 0 ) ) { localDW -> pdmw0mkkn1 [ 0 ] = localB -> av2p2jc2s0 ;
localDW -> pdmw0mkkn1 [ 1 ] = localB -> c3z15gugfc ; } if ( rtmIsSampleHit (
hl4iwqr41h , 4 , 0 ) ) { localB -> asdxktwkjk [ 0 ] = localDW -> pdmw0mkkn1 [
0 ] ; localB -> asdxktwkjk [ 1 ] = localDW -> pdmw0mkkn1 [ 1 ] ; } } void
DZ_DSMCTID5 ( dejgxakak5 * localDW ) { Motor_and_DriverTID4 ( & ( localDW ->
itpis5vn4s . rtb ) ) ; } void iff2hjlnlh ( fvmmfyrjw1 * const hl4iwqr41h ,
clkhzhey2f * localB , dejgxakak5 * localDW ) { int_T i ; if ( rtmIsSampleHit
( hl4iwqr41h , 4 , 0 ) ) { localDW -> c01aucwcgj [ 0 ] = localB -> asdxktwkjk
[ 0 ] ; localDW -> c01aucwcgj [ 1 ] = localB -> asdxktwkjk [ 1 ] ; localDW ->
hirt5tdci2 = localB -> kulumbncxa ; for ( i = 0 ; i < 9 ; i ++ ) { localDW ->
bdafkigi1z [ 9 - i ] = localDW -> bdafkigi1z [ 8 - i ] ; } localDW ->
bdafkigi1z [ 0 ] = localB -> ogysimvyrk ; } if ( rtmIsSampleHit ( hl4iwqr41h
, 1 , 0 ) || rtmIsSampleHit ( hl4iwqr41h , 2 , 0 ) || rtmIsSampleHit (
hl4iwqr41h , 3 , 0 ) || rtmIsSampleHit ( hl4iwqr41h , 4 , 0 ) ) { fhizeznu4p
( & ( localDW -> itpis5vn4s . rtm ) , & ( localDW -> itpis5vn4s . rtb ) , & (
localDW -> itpis5vn4s . rtdw ) ) ; } } void iff2hjlnlhTID5 ( void ) { } void
krwu4r0kuq ( fvmmfyrjw1 * const hl4iwqr41h , dejgxakak5 * localDW ) {
efqaccisye ( & ( localDW -> itpis5vn4s . rtm ) , & ( localDW -> itpis5vn4s .
rtdw ) ) ; if ( ( ssGetSimMode ( hl4iwqr41h -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( hl4iwqr41h -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
bqwsdckcpv . AQHandles ) { sdiTerminateStreaming ( & localDW -> bqwsdckcpv .
AQHandles ) ; } } } void dkehgdhicg ( dejgxakak5 * localDW , fvmmfyrjw1 *
const hl4iwqr41h ) { glspqvidja ( & ( localDW -> itpis5vn4s . rtdw ) , & (
localDW -> itpis5vn4s . rtm ) ) ; if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( hl4iwqr41h -> _mdlRefSfcnS , "DZ_DSMC" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void nl15vcjauu (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , int_T mdlref_TID3 , int_T mdlref_TID4 , int_T mdlref_TID5 ,
fvmmfyrjw1 * const hl4iwqr41h , clkhzhey2f * localB , dejgxakak5 * localDW ,
void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI ,
const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; ( void ) memset ( ( void * )
hl4iwqr41h , 0 , sizeof ( fvmmfyrjw1 ) ) ; hl4iwqr41h -> Timing .
mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; hl4iwqr41h -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; hl4iwqr41h -> Timing .
mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; hl4iwqr41h -> Timing .
mdlref_GlobalTID [ 3 ] = mdlref_TID3 ; hl4iwqr41h -> Timing .
mdlref_GlobalTID [ 4 ] = mdlref_TID4 ; hl4iwqr41h -> Timing .
mdlref_GlobalTID [ 5 ] = mdlref_TID5 ; hl4iwqr41h -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( hl4iwqr41h -> _mdlRefSfcnS , "DZ_DSMC" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> ogysimvyrk = 0.0F
; localB -> kulumbncxa = 0.0F ; localB -> oh43aktqez = 0.0F ; localB ->
av2p2jc2s0 = 0.0F ; localB -> c3z15gugfc = 0.0F ; localB -> m50yh1ldum = 0.0F
; localB -> b2d0ux4vc4 = 0.0F ; localB -> j1oczanrvv = 0.0F ; localB ->
dadxhr525x = 0.0F ; localB -> asdxktwkjk [ 0 ] = 0.0F ; localB -> asdxktwkjk
[ 1 ] = 0.0F ; } ( void ) memset ( ( void * ) localDW , 0 , sizeof (
dejgxakak5 ) ) ; localDW -> gct4ggaozf = 0.0 ; localDW -> c01aucwcgj [ 0 ] =
0.0F ; localDW -> c01aucwcgj [ 1 ] = 0.0F ; localDW -> hirt5tdci2 = 0.0F ; {
int32_T i ; for ( i = 0 ; i < 10 ; i ++ ) { localDW -> bdafkigi1z [ i ] =
0.0F ; } } localDW -> pdmw0mkkn1 [ 0 ] = 0.0F ; localDW -> pdmw0mkkn1 [ 1 ] =
0.0F ; DZ_DSMC_InitializeDataMapInfo ( hl4iwqr41h , localDW , sysRanPtr ,
contextTid ) ; fusa1jep2f ( _mdlRefSfcnS , mdlref_TID1 , mdlref_TID2 ,
mdlref_TID3 , mdlref_TID4 , mdlref_TID5 , & ( localDW -> itpis5vn4s . rtm ) ,
& ( localDW -> itpis5vn4s . rtb ) , & ( localDW -> itpis5vn4s . rtdw ) ,
hl4iwqr41h -> DataMapInfo . systemRan [ 0 ] , hl4iwqr41h -> DataMapInfo .
systemTid [ 0 ] , & ( hl4iwqr41h -> DataMapInfo . mmi ) ,
"DZ_DSMC/Variant Subsystem2/High-fidelity model/Model" , 0 , - 1 ) ; if ( (
rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) {
rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & ( hl4iwqr41h ->
DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( hl4iwqr41h -> DataMapInfo . mmi ,
rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex ( hl4iwqr41h ->
DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void mr_DZ_DSMC_MdlInfoRegFcn (
SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal =
0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) {
mr_Motor_and_Driver_MdlInfoRegFcn ( mdlRefSfcnS , "Motor_and_Driver" , retVal
) ; if ( * retVal == 0 ) return ; * retVal = 0 ; } } * retVal = 0 ;
ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName , rtMdlInfo_DZ_DSMC , 45 ) ; *
retVal = 1 ; } static void mr_DZ_DSMC_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_DZ_DSMC_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_DZ_DSMC_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_DZ_DSMC_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_DZ_DSMC_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_DZ_DSMC_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_DZ_DSMC_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i
, int j , uint_T numBits ) ; static uint_T
mr_DZ_DSMC_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i
, int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_DZ_DSMC_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_DZ_DSMC_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_DZ_DSMC_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_DZ_DSMC_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_DZ_DSMC_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_DZ_DSMC_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_DZ_DSMC_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray
, mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static uint_T
mr_DZ_DSMC_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray
, mwIndex i , int j , mwIndex offset , uint_T numBits ) { const uint_T
fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber ( srcArray
, i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u ) ; }
mxArray * mr_DZ_DSMC_GetDWork ( const dugemc2sabj * mdlrefDW ) { static const
char * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray
* ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_DZ_DSMC_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( mdlrefDW
-> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const char *
rtdwDataFieldNames [ 6 ] = { "mdlrefDW->rtdw.itpis5vn4s" ,
"mdlrefDW->rtdw.gct4ggaozf" , "mdlrefDW->rtdw.c01aucwcgj" ,
"mdlrefDW->rtdw.hirt5tdci2" , "mdlrefDW->rtdw.bdafkigi1z" ,
"mdlrefDW->rtdw.pdmw0mkkn1" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 6 , rtdwDataFieldNames ) ; { mxArray * varData =
mr_Motor_and_Driver_GetDWork ( & ( mdlrefDW -> rtdw . itpis5vn4s ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 0 , varData ) ; }
mr_DZ_DSMC_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) & (
mdlrefDW -> rtdw . gct4ggaozf ) , sizeof ( mdlrefDW -> rtdw . gct4ggaozf ) )
; mr_DZ_DSMC_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) & (
mdlrefDW -> rtdw . c01aucwcgj ) , sizeof ( mdlrefDW -> rtdw . c01aucwcgj ) )
; mr_DZ_DSMC_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & (
mdlrefDW -> rtdw . hirt5tdci2 ) , sizeof ( mdlrefDW -> rtdw . hirt5tdci2 ) )
; mr_DZ_DSMC_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & (
mdlrefDW -> rtdw . bdafkigi1z ) , sizeof ( mdlrefDW -> rtdw . bdafkigi1z ) )
; mr_DZ_DSMC_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & (
mdlrefDW -> rtdw . pdmw0mkkn1 ) , sizeof ( mdlrefDW -> rtdw . pdmw0mkkn1 ) )
; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ;
return ssDW ; } void mr_DZ_DSMC_SetDWork ( dugemc2sabj * mdlrefDW , const
mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_DZ_DSMC_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtb ) , ssDW ,
0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_Motor_and_Driver_SetDWork ( & (
mdlrefDW -> rtdw . itpis5vn4s ) , mxGetFieldByNumber ( rtdwData , 0 , 0 ) ) ;
mr_DZ_DSMC_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
gct4ggaozf ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . gct4ggaozf ) )
; mr_DZ_DSMC_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
c01aucwcgj ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw . c01aucwcgj ) )
; mr_DZ_DSMC_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
hirt5tdci2 ) , rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . hirt5tdci2 ) )
; mr_DZ_DSMC_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
bdafkigi1z ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw . bdafkigi1z ) )
; mr_DZ_DSMC_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
pdmw0mkkn1 ) , rtdwData , 0 , 5 , sizeof ( mdlrefDW -> rtdw . pdmw0mkkn1 ) )
; } } void mr_DZ_DSMC_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 2669189825U , 1319143477U , 315578974U ,
3417197143U , } ; slmrModelRefRegisterSimStateChecksum ( S , "DZ_DSMC" , &
chksum [ 0 ] ) ; mr_Motor_and_Driver_RegisterSimStateChecksum ( S ) ; }
mxArray * mr_DZ_DSMC_GetSimStateDisallowedBlocks ( ) { return
mr_Motor_and_Driver_GetSimStateDisallowedBlocks ( ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
