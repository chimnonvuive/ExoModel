/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Motor_and_Driver/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Motor_and_Driver_678d4e8_1_ds_sys_struct.h"
#include "Motor_and_Driver_678d4e8_1_ds_log.h"
#include "Motor_and_Driver_678d4e8_1_ds.h"
#include "Motor_and_Driver_678d4e8_1_ds_externals.h"
#include "Motor_and_Driver_678d4e8_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Motor_and_Driver_678d4e8_1_ds_log(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t4, NeDsMethodOutput *t5)
{
  PmRealVector out;
  real_T Subsystem1_Harmonic_Drive_gear_damperF_w;
  real_T Subsystem1_Harmonic_Drive_gear_tB;
  real_T Subsystem_Reference_Current_controller_Drive_Plant_Controlled_1;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_2;
  real_T X_idx_3;
  real_T X_idx_4;
  real_T X_idx_5;
  real_T X_idx_6;
  real_T X_idx_7;
  real_T X_idx_8;
  real_T X_idx_9;
  U_idx_0 = t4->mU.mX[0];
  U_idx_1 = t4->mU.mX[1];
  X_idx_0 = t4->mX.mX[0];
  X_idx_1 = t4->mX.mX[1];
  X_idx_2 = t4->mX.mX[2];
  X_idx_3 = t4->mX.mX[3];
  X_idx_4 = t4->mX.mX[4];
  X_idx_5 = t4->mX.mX[5];
  X_idx_6 = t4->mX.mX[6];
  X_idx_7 = t4->mX.mX[7];
  X_idx_8 = t4->mX.mX[8];
  X_idx_9 = t4->mX.mX[9];
  out = t5->mLOG;
  Subsystem1_Harmonic_Drive_gear_damperF_w = X_idx_0 * -0.01;
  Subsystem1_Harmonic_Drive_gear_tB = X_idx_8 * -0.01;
  Subsystem_Reference_Current_controller_Drive_Plant_Controlled_1 = X_idx_9 *
    0.055555555555555552;
  out.mX[0] = X_idx_2;
  out.mX[1] = X_idx_0;
  out.mX[2] = X_idx_5;
  out.mX[3] = X_idx_1;
  out.mX[4] = X_idx_6;
  out.mX[5] = X_idx_7 * 1000.0;
  out.mX[6] = X_idx_8 * 0.01;
  out.mX[7] = X_idx_2;
  out.mX[8] = X_idx_6;
  out.mX[9] = X_idx_0 * 9.5492965855137211;
  out.mX[10] = X_idx_0;
  out.mX[11] = X_idx_2;
  out.mX[12] = X_idx_2;
  out.mX[13] = X_idx_2;
  out.mX[14] = X_idx_2;
  out.mX[15] = X_idx_6;
  out.mX[16] = X_idx_6;
  out.mX[17] = X_idx_6;
  out.mX[18] = X_idx_6;
  out.mX[19] = X_idx_6;
  out.mX[20] = X_idx_3;
  out.mX[21] = X_idx_0;
  out.mX[22] = X_idx_0;
  out.mX[23] = X_idx_3;
  out.mX[24] = X_idx_3;
  out.mX[25] = X_idx_0;
  out.mX[26] = X_idx_0;
  out.mX[27] = X_idx_0;
  out.mX[28] = X_idx_0 * -0.01;
  out.mX[29] = X_idx_0;
  out.mX[30] = X_idx_0 * -0.01;
  out.mX[31] = Subsystem1_Harmonic_Drive_gear_tB;
  out.mX[32] = X_idx_0;
  out.mX[33] = X_idx_0;
  out.mX[34] = 0.0;
  out.mX[35] = X_idx_0 * -0.01;
  out.mX[36] = Subsystem1_Harmonic_Drive_gear_damperF_w;
  out.mX[37] = 0.0;
  out.mX[38] = Subsystem1_Harmonic_Drive_gear_tB * 100.0;
  out.mX[39] = X_idx_0;
  out.mX[40] = X_idx_0 * -0.01;
  out.mX[41] = X_idx_8;
  out.mX[42] = Subsystem1_Harmonic_Drive_gear_damperF_w;
  out.mX[43] = Subsystem1_Harmonic_Drive_gear_damperF_w * X_idx_8;
  out.mX[44] = X_idx_0 * -0.01;
  out.mX[45] = X_idx_0 * -0.01;
  out.mX[46] = X_idx_8;
  out.mX[47] = X_idx_8;
  out.mX[48] = X_idx_8;
  out.mX[49] = X_idx_0 * -0.01;
  out.mX[50] = X_idx_0 * -0.01;
  out.mX[51] = U_idx_0;
  out.mX[52] = X_idx_9;
  out.mX[53] = Subsystem_Reference_Current_controller_Drive_Plant_Controlled_1;
  out.mX[54] = X_idx_9;
  out.mX[55] = Subsystem_Reference_Current_controller_Drive_Plant_Controlled_1 *
    18.0;
  out.mX[56] = X_idx_9;
  out.mX[57] = U_idx_1;
  out.mX[58] = -X_idx_5;
  out.mX[59] = X_idx_6;
  out.mX[60] = X_idx_5 * X_idx_5 * 0.0001 * 1000.0;
  out.mX[61] = X_idx_6;
  out.mX[62] = X_idx_4;
  out.mX[63] = U_idx_0;
  out.mX[64] = U_idx_0;
  out.mX[65] = U_idx_0;
  out.mX[66] = U_idx_1;
  out.mX[67] = U_idx_1;
  out.mX[68] = U_idx_1;
  out.mX[69] = U_idx_1;
  out.mX[70] = U_idx_1;
  out.mX[71] = U_idx_0;
  out.mX[72] = U_idx_0;
  out.mX[73] = X_idx_5;
  out.mX[74] = X_idx_5;
  out.mX[75] = X_idx_6;
  out.mX[76] = X_idx_6;
  out.mX[77] = X_idx_5;
  out.mX[78] = X_idx_6;
  out.mX[79] = X_idx_6;
  out.mX[80] = X_idx_6;
  out.mX[81] = X_idx_6;
  out.mX[82] = X_idx_6;
  (void)sys;
  (void)t5;
  return 0;
}
