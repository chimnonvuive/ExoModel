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
  out.mNumCol = 14ULL;
  out.mNumRow = 14ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 1;
  out.mJc[3] = 5;
  out.mJc[4] = 6;
  out.mJc[5] = 9;
  out.mJc[6] = 13;
  out.mJc[7] = 15;
  out.mJc[8] = 20;
  out.mJc[9] = 23;
  out.mJc[10] = 25;
  out.mJc[11] = 26;
  out.mJc[12] = 28;
  out.mJc[13] = 30;
  out.mJc[14] = 32;
  out.mIr[0] = 0;
  out.mIr[1] = 8;
  out.mIr[2] = 9;
  out.mIr[3] = 10;
  out.mIr[4] = 11;
  out.mIr[5] = 13;
  out.mIr[6] = 4;
  out.mIr[7] = 12;
  out.mIr[8] = 13;
  out.mIr[9] = 4;
  out.mIr[10] = 5;
  out.mIr[11] = 11;
  out.mIr[12] = 13;
  out.mIr[13] = 6;
  out.mIr[14] = 7;
  out.mIr[15] = 4;
  out.mIr[16] = 5;
  out.mIr[17] = 7;
  out.mIr[18] = 12;
  out.mIr[19] = 13;
  out.mIr[20] = 4;
  out.mIr[21] = 7;
  out.mIr[22] = 13;
  out.mIr[23] = 1;
  out.mIr[24] = 8;
  out.mIr[25] = 9;
  out.mIr[26] = 2;
  out.mIr[27] = 5;
  out.mIr[28] = 5;
  out.mIr[29] = 10;
  out.mIr[30] = 3;
  out.mIr[31] = 12;
  (void)sys;
  (void)t2;
  return 0;
}
