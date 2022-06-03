/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Motor_and_Driver/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Motor_and_Driver_678d4e8_1_ds_sys_struct.h"
#include "Motor_and_Driver_678d4e8_1_ds_a.h"
#include "Motor_and_Driver_678d4e8_1_ds.h"
#include "Motor_and_Driver_678d4e8_1_ds_externals.h"
#include "Motor_and_Driver_678d4e8_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Motor_and_Driver_678d4e8_1_ds_a(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t31, NeDsMethodOutput *t32)
{
  PmRealVector out;
  real_T t2[30];
  real_T t3[4];
  real_T t4[4];
  real_T t5[4];
  size_t t14;
  (void)t31;
  out = t32->mA;
  t3[0ULL] = 1.0;
  t3[1ULL] = 1.0;
  t3[2ULL] = -0.01;
  t3[3ULL] = 1.0;
  t4[0] = 0.081436156232397;
  t4[1] = -0.00030891269963645088;
  t4[2] = 0.01;
  t4[3] = 8.1436156223488559E-11;
  t5[0] = 0.003875968992248062;
  t5[1] = 0.0;
  t5[2] = 0.0;
  t5[3] = 0.016528925619834711;
  t2[0ULL] = -0.0;
  for (t14 = 0ULL; t14 < 4ULL; t14++) {
    t2[t14 + 1ULL] = t3[t14];
  }

  t2[5ULL] = -0.99999999989060817;
  for (t14 = 0ULL; t14 < 4ULL; t14++) {
    t2[t14 + 6ULL] = t4[t14];
  }

  for (t14 = 0ULL; t14 < 4ULL; t14++) {
    t2[t14 + 10ULL] = t5[t14];
  }

  out.mX[0] = t2[0];
  out.mX[1] = t2[1];
  out.mX[2] = t2[2];
  out.mX[3] = t2[3];
  out.mX[4] = t2[4];
  out.mX[5] = t2[5];
  out.mX[6] = t2[6];
  out.mX[7] = t2[7];
  out.mX[8] = t2[8];
  out.mX[9] = t2[9];
  out.mX[10] = t2[10];
  out.mX[11] = t2[11];
  out.mX[12] = t2[12];
  out.mX[13] = t2[13];
  out.mX[14] = 0.055555555555555552;
  out.mX[15] = -0.081436156232397;
  out.mX[16] = 0.0;
  out.mX[17] = -0.99999999989060817;
  out.mX[18] = -1.0;
  out.mX[19] = 0.0;
  out.mX[20] = -9.9999999989060832E-10;
  out.mX[21] = 1.0;
  out.mX[22] = 0.01;
  out.mX[23] = 0.01;
  out.mX[24] = -1.0;
  out.mX[25] = 0.01;
  out.mX[26] = 0.01;
  out.mX[27] = 1.0;
  out.mX[28] = 1.0;
  out.mX[29] = 1.0;
  (void)sys;
  (void)t32;
  return 0;
}
