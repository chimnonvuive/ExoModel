#include "Definitions.h"



static HANDLE mHandle = NULL;

if (mHandle == NULL) {
        mHandle = VCS_OpenDevice("EPOS4", "MAXON SERIAL V2", "USB", "USB0", &ErrCode);
        if (ErrCode) {
            mexPrintf("Error opening USB, ErrCode is %i\n", (int) ErrCode);
            ssSetErrorStatus(S, "Error opening Device");
            LeaveLock();
            return;
        };
};