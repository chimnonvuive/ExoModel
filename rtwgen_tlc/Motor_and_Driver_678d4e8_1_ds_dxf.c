/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Motor_and_Driver/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Motor_and_Driver_678d4e8_1_ds_sys_struct.h"
#include "Motor_and_Driver_678d4e8_1_ds_dxf.h"
#include "Motor_and_Driver_678d4e8_1_ds.h"
#include "Motor_and_Driver_678d4e8_1_ds_externals.h"
#include "Motor_and_Driver_678d4e8_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Motor_and_Driver_678d4e8_1_ds_dxf(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t15, NeDsMethodOutput *t16)
{
  PmRealVector out;
  real_T t3[10];
  real_T t5[4];
  real_T X_idx_0;
  real_T X_idx_2;
  real_T X_idx_5;
  real_T t2;
  size_t t7;
  int32_T M_idx_0;
  int32_T M_idx_1;
  int32_T M_idx_2;
  M_idx_0 = t15->mM.mX[0];
  M_idx_1 = t15->mM.mX[1];
  M_idx_2 = t15->mM.mX[2];
  X_idx_0 = t15->mX.mX[0];
  X_idx_2 = t15->mX.mX[2];
  X_idx_5 = t15->mX.mX[5];
  out = t16->mDXF;
  X_idx_0 *= -0.01;
  if (M_idx_0 != 0) {
    t2 = 0.0;
  } else if (M_idx_1 != 0) {
    t2 = -((M_idx_2 != 0 ? -1.0 : 1.0) * 18.0 / 18.0);
  } else {
    t2 = 0.0;
  }

  t5[0ULL] = ((X_idx_2 - 298.15) * 0.00393 + 1.0) * 0.10939185165546103;
  t5[1ULL] = -(((X_idx_2 - 298.15) * 0.00393 + 1.0) * X_idx_5 *
               0.00021878370331092207);
  t5[2ULL] = -(-(((X_idx_2 - 298.15) * 0.00393 + 1.0) * 0.10939185165546103) *
               1.0E-9) / 1.0000000001093918;
  t5[3ULL] = 0.1;
  X_idx_0 = cosh(X_idx_0 / 0.0010471975511965976) * cosh(X_idx_0 /
    0.0010471975511965976);
  t3[0ULL] = -(-9.5492965855137211 * (1.0 / (X_idx_0 == 0.0 ? 1.0E-16 : X_idx_0))
               * 0.01);
  t3[1ULL] = X_idx_5 * 0.00042990997700596188;
  t3[2ULL] = -(X_idx_5 * X_idx_5 * 4.2990997700596188E-7);
  t3[3ULL] = -(-(X_idx_5 * 0.00042990997700596188) * 1.0E-9) /
    1.0000000001093918;
  for (t7 = 0ULL; t7 < 4ULL; t7++) {
    t3[t7 + 4ULL] = t5[t7];
  }

  out.mX[0] = t3[0];
  out.mX[1] = t3[1];
  out.mX[2] = t3[2];
  out.mX[3] = t3[3];
  out.mX[4] = t3[4];
  out.mX[5] = t3[5];
  out.mX[6] = t3[6];
  out.mX[7] = t3[7];
  out.mX[8] = 1.0;
  out.mX[9] = t2;
  (void)sys;
  (void)t16;
  return 0;
}
