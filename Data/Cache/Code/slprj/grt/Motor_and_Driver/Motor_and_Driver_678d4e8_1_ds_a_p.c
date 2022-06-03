/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Motor_and_Driver/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Motor_and_Driver_678d4e8_1_ds_sys_struct.h"
#include "Motor_and_Driver_678d4e8_1_ds_a_p.h"
#include "Motor_and_Driver_678d4e8_1_ds.h"
#include "Motor_and_Driver_678d4e8_1_ds_externals.h"
#include "Motor_and_Driver_678d4e8_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Motor_and_Driver_678d4e8_1_ds_a_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mA_P;
  out.mNumCol = 16ULL;
  out.mNumRow = 16ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 1;
  out.mJc[3] = 5;
  out.mJc[4] = 6;
  out.mJc[5] = 6;
  out.mJc[6] = 10;
  out.mJc[7] = 12;
  out.mJc[8] = 14;
  out.mJc[9] = 15;
  out.mJc[10] = 18;
  out.mJc[11] = 21;
  out.mJc[12] = 23;
  out.mJc[13] = 24;
  out.mJc[14] = 26;
  out.mJc[15] = 28;
  out.mJc[16] = 30;
  out.mIr[0] = 0;
  out.mIr[1] = 10;
  out.mIr[2] = 11;
  out.mIr[3] = 12;
  out.mIr[4] = 13;
  out.mIr[5] = 15;
  out.mIr[6] = 4;
  out.mIr[7] = 5;
  out.mIr[8] = 13;
  out.mIr[9] = 15;
  out.mIr[10] = 6;
  out.mIr[11] = 7;
  out.mIr[12] = 6;
  out.mIr[13] = 7;
  out.mIr[14] = 8;
  out.mIr[15] = 5;
  out.mIr[16] = 9;
  out.mIr[17] = 15;
  out.mIr[18] = 4;
  out.mIr[19] = 9;
  out.mIr[20] = 15;
  out.mIr[21] = 1;
  out.mIr[22] = 10;
  out.mIr[23] = 11;
  out.mIr[24] = 2;
  out.mIr[25] = 5;
  out.mIr[26] = 5;
  out.mIr[27] = 12;
  out.mIr[28] = 3;
  out.mIr[29] = 14;
  (void)sys;
  (void)t2;
  return 0;
}
