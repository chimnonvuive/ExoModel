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
  real_T X_idx_0;
  real_T X_idx_2;
  real_T X_idx_5;
  real_T X_idx_6;
  real_T X_idx_9;
  real_T intrm_sf_mf_1;
  int32_T M_idx_0;
  int32_T M_idx_1;
  int32_T M_idx_2;
  M_idx_0 = t4->mM.mX[0];
  M_idx_1 = t4->mM.mX[1];
  M_idx_2 = t4->mM.mX[2];
  U_idx_0 = t4->mU.mX[0];
  X_idx_0 = t4->mX.mX[0];
  X_idx_2 = t4->mX.mX[2];
  X_idx_5 = t4->mX.mX[5];
  X_idx_6 = t4->mX.mX[6];
  X_idx_9 = t4->mX.mX[9];
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
    X_idx_6 -= X_idx_5 * -0.1;
  } else if (M_idx_1 != 0) {
    X_idx_6 -= X_idx_5 * -0.1 + X_idx_9 * U_idx_0 * 18.0 / 18.0;
  } else {
    X_idx_6 -= U_idx_0 * 18.0 + X_idx_5 * -0.1;
  }

  U_idx_0 = -(tanh(X_idx_0 * -0.01 / 0.0010471975511965976) * 0.01);
  out.mX[0] = 0.0;
  out.mX[1] = ((X_idx_2 - 298.15) * 0.00393 + 1.0) * X_idx_5 *
    0.10939185165546103;
  out.mX[2] = -0.0;
  out.mX[3] = -0.0;
  out.mX[4] = -0.0;
  out.mX[5] = -(((X_idx_2 - 298.15) * 0.00393 + 1.0) * X_idx_5 * X_idx_5 *
                0.00010939185165546103);
  out.mX[6] = -(-(((X_idx_2 - 298.15) * 0.00393 + 1.0) * X_idx_5 *
                  0.10939185165546103) * 1.0E-9) / 1.0000000001093918;
  out.mX[7] = U_idx_0;
  out.mX[8] = -intrm_sf_mf_1;
  out.mX[9] = X_idx_6;
  (void)sys;
  (void)t5;
  return 0;
}
