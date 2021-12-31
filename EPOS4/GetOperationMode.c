/* This a library for communication with Maxon EPOS4 motor controllers
 * using MATLAB.
 *
 * Copyright, Eugenio Yime Rodriguez, 2015
 *  
 */

#include "mex.h"
#include "Definitions.h"

#ifdef _LINUX_
#include "Win2Linux.h"
#endif

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {
    DWORD ErrCode = 0;
    BOOL Fault = FALSE;
    HANDLE mHandle;
    WORD NodeID;
    long lHandle;
    char IdMode;
    char modes[6];
    int i;
    char ErrorInfo[255];

    modes[0] = OMD_HOMING_MODE;
    modes[1] = OMD_CURRENT_MODE;
    modes[2] = OMD_VELOCITY_MODE;
    modes[3] = OMD_POSITION_MODE;
    modes[4] = OMD_PROFILE_VELOCITY_MODE;
    modes[5] = OMD_PROFILE_POSITION_MODE;

    /* Examine input (right-hand-side) arguments. */
    if (nrhs != 2) {
        mexPrintf("Error: this function should be use with two input arguments\n");
        return;
    }
    /* Check first input */
    if (mxGetM(prhs[0]) != 1 || mxGetM(prhs[0]) != 1) {
        mexPrintf("Error: this function requires two input scalar\n");
        return;
    }
    /* Check second input */
    if (mxGetM(prhs[1]) != 1 || mxGetM(prhs[1]) != 1) {
        mexPrintf("Error: this function requires two input scalar\n");
        return;
    }

    /* Examine output (left-hand-side) arguments. */
    if (nlhs > 1) {
        mexPrintf("Error: this function should be use with only one output argument\n");
        return;
    }

    /* create output matrix */
    plhs[0] = mxCreateDoubleScalar(-1.0);

    /* first input */
    lHandle = (long) *mxGetPr(prhs[0]);
    mHandle = LongToHandle(lHandle);
    /* second input */
    NodeID = (WORD) * mxGetPr(prhs[1]);

    /* Get Operation Mode */
    if (!VCS_GetOperationMode(mHandle, NodeID, &IdMode, &ErrCode)) {
        VCS_GetErrorInfo(ErrCode, ErrorInfo, 255);
        mexPrintf("Error: %s \n", ErrorInfo);
        return;
    }

    for (i = 0; i < 6; i++) {
        if (IdMode == modes[i]) *mxGetPr(plhs[0]) = ((double) i) + 1.0;
    }
}
