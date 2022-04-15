#ifndef RTW_HEADER_Motor_and_Driver_h_
#define RTW_HEADER_Motor_and_Driver_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef Motor_and_Driver_COMMON_INCLUDES_
#define Motor_and_Driver_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#include "nesl_rtw.h"
#include "Motor_and_Driver_678d4e8_1_gateway.h"
#endif
#include "Motor_and_Driver_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
typedef struct { real_T g4rfzbmv2r ; real_T h2wq0gdhph ; real_T leflq0awlb [
4 ] ; real_T beh1jyo0lg ; real_T ejxx0dyzgm [ 4 ] ; real_T lpfaa4yfgc [ 17 ]
; real_T lbosajnd5o ; real_T ltqgecb1hp ; real_T nyi24fjkvj ; real_T
fmzczxuzch ; real_T npgo0mulex ; real_T i00ihxzcdp ; real_T cn3uvp0opx ;
real_T owie2v20ax ; real_T coz0wgohpd ; real_T blvifzpbzh ; real_T m0hc3foanl
; real_T c4tkvxgscc ; real_T gnaoemsjbf ; real_T edpmmlaoam ; real_T
g4rfzbmv2r_mbvzarwird ; real_T h2wq0gdhph_cl54gopm0x ; real_T
leflq0awlb_kkiq3xxxve ; real_T lpfaa4yfgc_cxarnvbvui ; real_T cfpzpwnygo ;
real_T g2iqxn1trf ; real32_T jradpfn2au ; boolean_T m1ikydsfj0 ; } newmk5ltqt
; typedef struct { real_T ahxn11a4uj ; real_T bntadq01i0 ; real_T nzaadopmzv
[ 2 ] ; real_T hpz3a5plfu [ 2 ] ; real_T msgwjfokow [ 14 ] ; real_T
d5ykmtl1o3 ; real_T ntyeyxcpzv ; real_T iyvf0cfvz1 ; real_T a1yzcpvsyb ;
real_T o33esxcr4d ; real_T ldgv3mxr0m ; real_T j2msih40xc [ 2 ] ; real_T
oxjf1o2le0 ; real_T dmbqlo45q2 [ 2 ] ; real_T cpxr54tl5g [ 6 ] ; real_T
aayofnyfma [ 2 ] ; void * huu4fzhbm1 ; void * kadxlamyjz ; void * k25q3biwpn
; void * cx1hmenm5m ; void * ngvfutnx0a ; void * ezwrjgfnd4 ; void *
pa2vb3qro5 ; void * hjw13xaqv4 ; void * ph02vmsmha ; void * ghxzwspmv0 ;
struct { void * AQHandles ; } dkms3ioakc ; struct { void * AQHandles ; }
d1cf0p4sh4 ; real32_T adf5pho5oy ; real32_T lbowrmd5fw [ 2 ] ; int_T
irbxy1viiz [ 3 ] ; int_T adfujmdxyf ; int8_T i5crktpmac ; int8_T hiespqskmp ;
int8_T mxqbsawplp ; int8_T bi1icpowut ; int8_T ju5h25lyet ; int8_T mdhhylhwlg
; int8_T paq0gh0ddd ; int8_T juqucbm44r ; int8_T bgmtziepvj ; boolean_T
fi53bxf5bd ; boolean_T g3tf0nvv2w ; boolean_T pxhqr4cb2p ; } an3ws3rp20 ;
struct gcdnwszwdjd_ { real_T P_7 ; real_T P_8 ; real_T P_9 ; real_T P_10 ;
real_T P_11 ; real_T P_12 ; real_T P_13 ; real_T P_14 ; real_T P_15 ; real_T
P_16 ; real_T P_17 ; real_T P_18 ; real_T P_19 ; real_T P_20 ; real_T P_21 ;
real_T P_22 ; real_T P_23 ; real_T P_24 ; real_T P_25 ; real_T P_26 ; real_T
P_27 ; real_T P_28 ; real_T P_29 ; real_T P_30 ; real_T P_31 ; real_T P_32 ;
real_T P_33 ; real_T P_34 ; real_T P_35 ; real_T P_36 ; real_T P_37 ; real_T
P_38 ; real_T P_39 ; real_T P_40 ; real_T P_41 ; real_T P_42 ; real_T P_43 ;
real_T P_44 ; real_T P_45 ; real_T P_46 ; real_T P_47 ; real_T P_48 ; real_T
P_49 ; real32_T P_50 ; real32_T P_51 ; boolean_T P_52 ; } ; struct c45rvfusmj
{ struct SimStruct_tag * _mdlRefSfcnS ; const rtTimingBridge * timingBridge ;
struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 12 ] ; int32_T * vardimsAddress [
12 ] ; RTWLoggingFcnPtr loggingPtrs [ 12 ] ; sysRanDType * systemRan [ 5 ] ;
int_T systemTid [ 5 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 5 ]
; } Timing ; } ; typedef struct { newmk5ltqt rtb ; an3ws3rp20 rtdw ;
jqmbuwnn4r rtm ; } carp3dc4p0e ; extern real_T rtP_x520886_ICont ; extern
real_T rtP_x607325_RotIner ; extern real_T rtP_x607325_RotOmgMax ; extern
real_T rtP_x607325_Torq ; extern real_T rtP_x607325_TorqConst ; extern real_T
rtP_x607325_VNom ; extern real32_T rtP_x28_000006_reduction ; extern void
fusa1jep2f ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1
, int_T mdlref_TID2 , int_T mdlref_TID3 , int_T mdlref_TID4 , jqmbuwnn4r *
const n4f1kxfugf , newmk5ltqt * localB , an3ws3rp20 * localDW , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern
void mr_Motor_and_Driver_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_Motor_and_Driver_GetDWork
( const carp3dc4p0e * mdlrefDW ) ; extern void mr_Motor_and_Driver_SetDWork (
carp3dc4p0e * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_Motor_and_Driver_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_Motor_and_Driver_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Motor_and_Driver_GetCAPIStaticMap ( void ) ;
extern void jyhh3oc42w ( jqmbuwnn4r * const n4f1kxfugf , an3ws3rp20 * localDW
) ; extern void lemmpwcmcz ( newmk5ltqt * localB , an3ws3rp20 * localDW ) ;
extern void i0x5alzcfy ( an3ws3rp20 * localDW ) ; extern void efqaccisye (
jqmbuwnn4r * const n4f1kxfugf , an3ws3rp20 * localDW ) ; extern void
icyzbmak44 ( jqmbuwnn4r * const n4f1kxfugf , an3ws3rp20 * localDW ) ; extern
void fhizeznu4p ( jqmbuwnn4r * const n4f1kxfugf , newmk5ltqt * localB ,
an3ws3rp20 * localDW ) ; extern void fhizeznu4pTID4 ( void ) ; extern void
Motor_and_Driver ( jqmbuwnn4r * const n4f1kxfugf , const real32_T *
oscxqmx0zv , real32_T * peoowe2dcb , real32_T * jl14elai0k , real32_T *
m2stjjg02g , real32_T * lztr0ojbkn , real32_T * idlzyauu4m , real32_T *
l0v2lexcb2 , newmk5ltqt * localB , an3ws3rp20 * localDW ) ; extern void
Motor_and_DriverTID4 ( newmk5ltqt * localB ) ; extern void glspqvidja (
an3ws3rp20 * localDW , jqmbuwnn4r * const n4f1kxfugf ) ;
#endif
