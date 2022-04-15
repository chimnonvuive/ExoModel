#ifndef RTW_HEADER_Motor_and_Driver_h_
#define RTW_HEADER_Motor_and_Driver_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef Motor_and_Driver_COMMON_INCLUDES_
#define Motor_and_Driver_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw.h"
#include "Motor_and_Driver_678d4e8_1_gateway.h"
#endif
#include "Motor_and_Driver_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME Motor_and_Driver
#define NSAMPLE_TIMES (5) 
#define NINPUTS (1)       
#define NOUTPUTS (2)     
#define NBLOCKIO (36) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T fu0jmlqjl4 ; real_T pfzpikjxxm [ 4 ] ; real_T
gvcs01gfki ; real_T dm5dfvv4bd [ 4 ] ; real_T jio04e5l2y [ 13 ] ; real_T
dq414il1rg ; real_T bq1g2orrwt [ 3 ] ; real_T dqihdby3th ; real_T mlqvt2g1kq
; real_T m0vxoft0f3 ; real_T llz1du4krc ; real_T kzcwpgqn1e ; real_T
cooy4a5ivy ; real_T onfqtofgj3 ; real_T dt3k0ww03w ; real_T akpvqkyld1 ;
real_T gzvslpqkcd ; real_T fjg2zg0f3m ; real_T lh1uwltxg0 ; real_T knorcxbsbi
; real_T hcs0qpqt3t ; real_T opqftfcl54 ; real_T pyuyn3v4dn ; real_T
alrmk4rget ; real_T gv4hdvrgjr ; real_T m0pnodctem ; real_T dj030qsvlg ;
real_T ciumjk5i4b ; real_T jv03wguaj0 ; real_T ewoec4jpzh ; real32_T
dbxopmzlmg ; real32_T dyrup5dyjo ; real32_T f3ovsqvcrg ; real32_T ekyms1wurq
; real32_T lugwzdstdq ; boolean_T oixjxwb01f ; } B ; typedef struct { real_T
i1ov2bkgtq ; real_T pxmhr5ub4g [ 2 ] ; real_T b3ieuujw5h [ 2 ] ; real_T
ehs0ismbbz [ 10 ] ; real_T pov3wcjhuh ; real_T djn0bieqvx ; real_T bwk11a0owp
; real_T kxbojg1zkz ; real_T okvdpbekia ; volatile real_T ep34iowbww [ 2 ] ;
real_T idsvig0gbj ; real_T jy0ot5cu1a [ 3 ] ; volatile real_T hu3arlbsbz [ 2
] ; void * curcdagsjb ; void * an0iwqneok ; void * k32aasjgy5 ; void *
k10l4nww4e ; void * ebj3xgeqfr ; void * ct2a0l3urc ; void * enba3cq10q ; void
* lwnxawb1gu ; void * h05rg3xqon ; void * ljaggftgsd ; struct { void *
LoggedData ; } fzxgf0zfea ; struct { void * LoggedData [ 2 ] ; } m5juniwyrn ;
struct { void * LoggedData ; } dkzhh4atc0 ; struct { void * AQHandles ; }
hjucof00tp ; struct { void * LoggedData ; } odhcan23dk ; struct { void *
LoggedData ; } e0cigxu0i5 ; struct { void * LoggedData ; } jgmnqn1qxg ;
struct { void * LoggedData ; } oe2lgyaknx ; struct { void * LoggedData ; }
iut021q1ij ; real32_T bsf12pb2h5 ; real32_T alwmsbt4vi ; volatile real32_T
ewa1ky2aid [ 2 ] ; volatile real32_T fu12tl5lft [ 2 ] ; int_T pk134fwa0i [ 3
] ; int_T krdhpu2htv ; volatile int8_T cwozdkk230 ; volatile int8_T
jelgxmupj2 ; volatile int8_T idud0pvpup ; volatile int8_T gy1pmud0mj ;
volatile int8_T dmyez5rj5c ; volatile int8_T enj3fp5ek4 ; int8_T fvfxc3w3vh ;
int8_T ckv0xszqnn ; boolean_T goks4dbmi4 ; boolean_T apyngkq3zi ; boolean_T
gkhcdetyhn ; } DW ; typedef struct { real32_T hilmfez3mk ; } ExtU ; typedef
struct { motorInfo mssvjyminv ; RespSignal elshvuie5m ; } ExtY ; typedef
struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
x3001_5 ; real_T x30A0_1 ; real_T x30A0_2 ; real_T x30A2_1 ; real_T x30A2_2 ;
real_T x30A3_1 ; real_T x30A3_2 ; real_T x30A3_3 ; real_T x30A3_4 ; real_T
x30A3_5 ; real_T x520886_ICont ; real_T x607325_RotIner ; real_T
x607325_RotOmgMax ; real_T x607325_Torq ; real_T x607325_TorqConst ; real_T
x607325_VNom ; real_T DiscretePIController_InitialConditionForIntegrator ;
real_T feedforward_acceleration_Value ; real_T feedforward_velocity_Value ;
real_T Zero_Value ; real_T Out1_Y0 ; real_T Gain_Gain ; real_T
Constant1_Value ; real_T RateTransition3_InitialCondition ; real_T
Integrator_gainval ; real_T Merge_InitialOutput ; real_T Merge1_InitialOutput
; real_T GAIN_Gain ; real_T ZeroGain_Gain ; real_T
RateTransition_InitialCondition ; real_T DiscreteTimeIntegrator1_gainval ;
real_T DiscreteTimeIntegrator1_IC ; real_T DiscreteTimeIntegrator_gainval ;
real_T DiscreteTimeIntegrator_IC ; real_T UnitDelay_InitialCondition ; real_T
DiscreteTimeIntegrator_gainval_bz4vjpssjb ; real_T
DiscreteTimeIntegrator_IC_f5egosl31z ; real_T
UnitDelay_InitialCondition_mz0dqclppl ; real_T ZeroGain_Gain_m40ckabu3g ;
real_T Bias_Bias ; real_T GAIN_Gain_hw2btsfaso ; real_T Gain_Gain_ktcz42xa5t
; real_T RateTransition_InitialCondition_jp45hakdeo ; real_T Constant_Value ;
real_T Gain_Gain_pah44eqa5n ; real_T Gain_Gain_gofic1b4wb ; real_T Gain1_Gain
; real32_T UnitDelay1_InitialCondition ; real32_T
RateTransition1_InitialCondition ; real32_T
UnitDelay_InitialCondition_gjecjbvtlj ; real32_T
RateTransition2_InitialCondition ; boolean_T Memory_InitialCondition ; } ;
extern const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW
rtDW ; extern ExtU rtU ; extern ExtY rtY ; extern P rtP ; extern mxArray *
mr_Motor_and_Driver_GetDWork ( ) ; extern void mr_Motor_and_Driver_SetDWork (
const mxArray * ssDW ) ; extern mxArray *
mr_Motor_and_Driver_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Motor_and_Driver_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
