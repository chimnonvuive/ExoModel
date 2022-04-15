#ifndef RTW_HEADER_DZ_DSMC_cap_host_h_
#define RTW_HEADER_DZ_DSMC_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap_simtarget.h"
#include "Motor_and_Driver_capi_host.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo *
childMMI [ 1 ] ; Motor_and_Driver_host_DataMapInfo_T child0 ; }
DZ_DSMC_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void DZ_DSMC_host_InitializeDataMapInfo ( DZ_DSMC_host_DataMapInfo_T *
dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
