/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Motor_and_Driver/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Motor_and_Driver_678d4e8_1_ds_sys_struct.h"
#include "Motor_and_Driver_678d4e8_1_ds_tdxf_p.h"
#include "Motor_and_Driver_678d4e8_1_ds.h"
#include "Motor_and_Driver_678d4e8_1_ds_externals.h"
#include "Motor_and_Driver_678d4e8_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Motor_and_Driver_678d4e8_1_ds_tdxf_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDXF_P;
  out.mNumCol = 16ULL;
  out.mNumRow = 16ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 1;
  out.mJc[3] = 5;
  out.mJc[4] = 6;
  out.mJc[5] = 9;
  out.mJc[6] = 13;
  out.mJc[7] = 15;
  out.mJc[8] = 17;
  out.mJc[9] = 19;
  out.mJc[10] = 24;
  out.mJc[11] = 27;
  out.mJc[12] = 29;
  out.mJc[13] = 30;
  out.mJc[14] = 32;
  out.mJc[15] = 34;
  out.mJc[16] = 36;
  out.mIr[0] = 0;
  out.mIr[1] = 10;
  out.mIr[2] = 11;
  out.mIr[3] = 12;
  out.mIr[4] = 13;
  out.mIr[5] = 15;
  out.mIr[6] = 4;
  out.mIr[7] = 14;
  out.mIr[8] = 15;
  out.mIr[9] = 4;
  out.mIr[10] = 5;
  out.mIr[11] = 13;
  out.mIr[12] = 15;
  out.mIr[13] = 6;
  out.mIr[14] = 7;
  out.mIr[15] = 6;
  out.mIr[16] = 7;
  out.mIr[17] = 8;
  out.mIr[18] = 9;
  out.mIr[19] = 4;
  out.mIr[20] = 5;
  out.mIr[21] = 9;
  out.mIr[22] = 14;
  out.mIr[23] = 15;
  out.mIr[24] = 4;
  out.mIr[25] = 9;
  out.mIr[26] = 15;
  out.mIr[27] = 1;
  out.mIr[28] = 10;
  out.mIr[29] = 11;
  out.mIr[30] = 2;
  out.mIr[31] = 5;
  out.mIr[32] = 5;
  out.mIr[33] = 12;
  out.mIr[34] = 3;
  out.mIr[35] = 14;
  (void)sys;
  (void)t2;
  return 0;
}
