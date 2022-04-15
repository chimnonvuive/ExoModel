#include "Motor_and_Driver_capi_host.h"
static Motor_and_Driver_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        Motor_and_Driver_host_InitializeDataMapInfo(&(root), "Motor_and_Driver");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
