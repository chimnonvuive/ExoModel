/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Motor_and_Driver/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Motor_and_Driver_678d4e8_1_ds_sys_struct.h"
#include "Motor_and_Driver_678d4e8_1_ds_f.h"
#include "Motor_and_Driver_678d4e8_1_ds.h"
#include "Motor_and_Driver_678d4e8_1_ds_externals.h"
#include "Motor_and_Driver_678d4e8_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Motor_and_Driver_678d4e8_1_ds_f(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t4, NeDsMethodOutput *t5)
{
  PmRealVector out;
  real_T U_idx_0;
  real_T X_idx_10;
  real_T X_idx_2;
  real_T X_idx_4;
  real_T X_idx_8;
  real_T X_idx_9;
  real_T intrm_sf_mf_1;
  int32_T M_idx_0;
  int32_T M_idx_1;
  int32_T M_idx_2;
  M_idx_0 = t4->mM.mX[0];
  M_idx_1 = t4->mM.mX[1];
  M_idx_2 = t4->mM.mX[2];
  U_idx_0 = t4->mU.mX[0];
  X_idx_2 = t4->mX.mX[2];
  X_idx_4 = t4->mX.mX[4];
  X_idx_8 = t4->mX.mX[8];
  X_idx_9 = t4->mX.mX[9];
  X_idx_10 = t4->mX.mX[10];
  out = t5->mF;
  if (U_idx_0 <= 0.0) {
    intrm_sf_mf_1 = 0.0;
  } else if (U_idx_0 >= 18.0) {
    intrm_sf_mf_1 = 1.0;
  } else {
    intrm_sf_mf_1 = U_idx_0 / 18.0;
  }

  U_idx_0 = M_idx_2 != 0 ? -1.0 : 1.0;
  if (M_idx_0 != 0) {
    X_idx_8 = X_idx_10 - X_idx_9 * 0.1;
  } else if (M_idx_1 != 0) {
    X_idx_8 = X_idx_10 - (X_idx_9 * 0.1 + X_idx_8 * U_idx_0 * 18.0 / 18.0);
  } else {
    X_idx_8 = X_idx_10 - (U_idx_0 * 18.0 + X_idx_9 * 0.1);
  }

  U_idx_0 = -(X_idx_2 / 4.4428829381583661 * exp(-(X_idx_2 / 4.4428829381583661 *
    (X_idx_2 / 4.4428829381583661))) * 0.18653151852776995 + tanh(X_idx_2 /
    0.31415926535897931) * 0.12);
  out.mX[0] = -0.0;
  out.mX[1] = -0.0;
  out.mX[2] = -0.0;
  out.mX[3] = 0.0;
  out.mX[4] = ((X_idx_4 - 303.15) * 0.004041 + 1.0) * X_idx_9 *
    -0.10939185165546103;
  out.mX[5] = -0.0;
  out.mX[6] = -0.0;
  out.mX[7] = -0.0;
  out.mX[8] = -intrm_sf_mf_1;
  out.mX[9] = X_idx_8;
  out.mX[10] = 0.0;
  out.mX[11] = 0.0;
  out.mX[12] = U_idx_0;
  out.mX[13] = 0.0;
  out.mX[14] = -(((X_idx_4 - 303.15) * 0.004041 + 1.0) * X_idx_9 * X_idx_9 *
                 0.00010939185165546103);
  out.mX[15] = -(-(((X_idx_4 - 303.15) * 0.004041 + 1.0) * X_idx_9 *
                   -0.10939185165546103) * 1.0E-9) / 1.0000000001093918;
  (void)sys;
  (void)t5;
  return 0;
}
