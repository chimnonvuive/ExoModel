#ifndef RTW_HEADER_DZ_DSMC_h_
#define RTW_HEADER_DZ_DSMC_h_
#include <stddef.h>
#include <math.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef DZ_DSMC_COMMON_INCLUDES_
#define DZ_DSMC_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "DZ_DSMC_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "Motor_and_Driver.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "mwmathutil.h"
typedef struct { real32_T cu03f02rez_mbvzarwird [ 11 ] ; real32_T ogysimvyrk
; real32_T kulumbncxa ; real32_T oh43aktqez ; real32_T av2p2jc2s0 ; real32_T
c3z15gugfc ; real32_T m50yh1ldum ; real32_T b2d0ux4vc4 ; real32_T j1oczanrvv
; real32_T dadxhr525x ; real32_T asdxktwkjk [ 2 ] ; } clkhzhey2f ; typedef
struct { real_T gct4ggaozf ; struct { void * AQHandles ; } bqwsdckcpv ;
real32_T c01aucwcgj [ 2 ] ; real32_T hirt5tdci2 ; real32_T bdafkigi1z [ 10 ]
; real32_T pdmw0mkkn1 [ 2 ] ; carp3dc4p0e itpis5vn4s ; } dejgxakak5 ; struct
hbb5iv14ndy_ { real32_T P_7 [ 2 ] ; real32_T P_8 [ 2 ] ; real32_T P_9 [ 4 ] ;
real32_T P_10 ; real32_T P_11 ; real32_T P_12 ; real32_T P_13 ; real32_T P_14
; real32_T P_15 ; real32_T P_16 ; uint8_T P_17 ; uint8_T P_18 ; real32_T P_19
; real32_T P_20 ; real32_T P_21 [ 2 ] ; real32_T P_22 ; real32_T P_23 ;
real32_T P_24 ; } ; struct myhibtni12 { struct SimStruct_tag * _mdlRefSfcnS ;
const rtTimingBridge * timingBridge ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
3 ] ; int32_T * vardimsAddress [ 3 ] ; RTWLoggingFcnPtr loggingPtrs [ 3 ] ;
rtwCAPI_ModelMappingInfo * childMMI [ 1 ] ; sysRanDType * systemRan [ 3 ] ;
int_T systemTid [ 3 ] ; } DataMapInfo ; struct { uint8_T rtmDbBufReadBuf5 ;
uint8_T rtmDbBufWriteBuf5 ; boolean_T rtmDbBufLastBufWr5 ; uint32_T
rtmDbBufClockTick5 [ 2 ] ; uint32_T rtmDbBufClockTickH5 [ 2 ] ; int_T
mdlref_GlobalTID [ 6 ] ; } Timing ; } ; typedef struct { clkhzhey2f rtb ;
dejgxakak5 rtdw ; fvmmfyrjw1 rtm ; } dugemc2sabj ; extern real_T
rtP_x520886_ICont ; extern real_T rtP_x607325_RotIner ; extern real_T
rtP_x607325_RotOmgMax ; extern real_T rtP_x607325_Torq ; extern real_T
rtP_x607325_TorqConst ; extern real_T rtP_x607325_VNom ; extern real32_T
rtP_x28_000006_reduction ; extern void nl15vcjauu ( SimStruct * _mdlRefSfcnS
, int_T mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , int_T
mdlref_TID3 , int_T mdlref_TID4 , int_T mdlref_TID5 , fvmmfyrjw1 * const
hl4iwqr41h , clkhzhey2f * localB , dejgxakak5 * localDW , void * sysRanPtr ,
int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_DZ_DSMC_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName ,
int_T * retVal ) ; extern mxArray * mr_DZ_DSMC_GetDWork ( const dugemc2sabj *
mdlrefDW ) ; extern void mr_DZ_DSMC_SetDWork ( dugemc2sabj * mdlrefDW , const
mxArray * ssDW ) ; extern void mr_DZ_DSMC_RegisterSimStateChecksum (
SimStruct * S ) ; extern mxArray * mr_DZ_DSMC_GetSimStateDisallowedBlocks ( )
; extern const rtwCAPI_ModelMappingStaticInfo * DZ_DSMC_GetCAPIStaticMap (
void ) ; extern void afby5huulj ( fvmmfyrjw1 * const hl4iwqr41h , dejgxakak5
* localDW ) ; extern void h1hjhiyipq ( dejgxakak5 * localDW ) ; extern void
feedt00j3y ( dejgxakak5 * localDW ) ; extern void krwu4r0kuq ( fvmmfyrjw1 *
const hl4iwqr41h , dejgxakak5 * localDW ) ; extern void ennfpc0v4s (
dejgxakak5 * localDW ) ; extern void iff2hjlnlh ( fvmmfyrjw1 * const
hl4iwqr41h , clkhzhey2f * localB , dejgxakak5 * localDW ) ; extern void
iff2hjlnlhTID5 ( void ) ; extern void DZ_DSMC ( fvmmfyrjw1 * const hl4iwqr41h
, const real32_T mirn5utboy [ 2 ] , const real32_T * c4rw1gubgl , real32_T
fk5fr05cin [ 2 ] , clkhzhey2f * localB , dejgxakak5 * localDW ) ; extern void
DZ_DSMCTID5 ( dejgxakak5 * localDW ) ; extern void dkehgdhicg ( dejgxakak5 *
localDW , fvmmfyrjw1 * const hl4iwqr41h ) ;
#endif
