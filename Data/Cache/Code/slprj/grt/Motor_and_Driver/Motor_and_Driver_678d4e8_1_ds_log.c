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
  NeDynamicSystemInput *t12, NeDsMethodOutput *t13)
{
  PmRealVector out;
  real_T Driver_Current_controller_Drive_Plant_Controlled_PWM_Voltage_pw;
  real_T Load_Harmonic_Drive_gear_tB;
  real_T Motor_Foster_Thermal_Model_B_T;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_10;
  real_T X_idx_11;
  real_T X_idx_12;
  real_T X_idx_13;
  real_T X_idx_14;
  real_T X_idx_15;
  real_T X_idx_2;
  real_T X_idx_3;
  real_T X_idx_4;
  real_T X_idx_5;
  real_T X_idx_6;
  real_T X_idx_7;
  real_T X_idx_8;
  real_T X_idx_9;
  U_idx_0 = t12->mU.mX[0];
  U_idx_1 = t12->mU.mX[1];
  X_idx_0 = t12->mX.mX[0];
  X_idx_1 = t12->mX.mX[1];
  X_idx_2 = t12->mX.mX[2];
  X_idx_3 = t12->mX.mX[3];
  X_idx_4 = t12->mX.mX[4];
  X_idx_5 = t12->mX.mX[5];
  X_idx_6 = t12->mX.mX[6];
  X_idx_7 = t12->mX.mX[7];
  X_idx_8 = t12->mX.mX[8];
  X_idx_9 = t12->mX.mX[9];
  X_idx_10 = t12->mX.mX[10];
  X_idx_11 = t12->mX.mX[11];
  X_idx_12 = t12->mX.mX[12];
  X_idx_13 = t12->mX.mX[13];
  X_idx_14 = t12->mX.mX[14];
  X_idx_15 = t12->mX.mX[15];
  out = t13->mLOG;
  Driver_Current_controller_Drive_Plant_Controlled_PWM_Voltage_pw = X_idx_8 *
    0.055555555555555552;
  Load_Harmonic_Drive_gear_tB = X_idx_13 * -0.01 + X_idx_14 * -0.01;
  Motor_Foster_Thermal_Model_B_T = (-X_idx_6 + -X_idx_7) + X_idx_4;
  out.mX[0] = U_idx_0;
  out.mX[1] = X_idx_8;
  out.mX[2] = Driver_Current_controller_Drive_Plant_Controlled_PWM_Voltage_pw;
  out.mX[3] = X_idx_8;
  out.mX[4] = Driver_Current_controller_Drive_Plant_Controlled_PWM_Voltage_pw *
    18.0;
  out.mX[5] = X_idx_8;
  out.mX[6] = U_idx_1;
  out.mX[7] = X_idx_9;
  out.mX[8] = X_idx_10;
  out.mX[9] = X_idx_9 * X_idx_9 * 0.0001 * 1000.0;
  out.mX[10] = X_idx_10;
  out.mX[11] = X_idx_0;
  out.mX[12] = U_idx_0;
  out.mX[13] = U_idx_0;
  out.mX[14] = U_idx_0;
  out.mX[15] = U_idx_1;
  out.mX[16] = U_idx_1;
  out.mX[17] = U_idx_1;
  out.mX[18] = U_idx_1;
  out.mX[19] = U_idx_1;
  out.mX[20] = U_idx_0;
  out.mX[21] = U_idx_0;
  out.mX[22] = -X_idx_9;
  out.mX[23] = -X_idx_9;
  out.mX[24] = X_idx_10;
  out.mX[25] = X_idx_10;
  out.mX[26] = -X_idx_9;
  out.mX[27] = X_idx_10;
  out.mX[28] = X_idx_10;
  out.mX[29] = X_idx_10;
  out.mX[30] = X_idx_10;
  out.mX[31] = X_idx_10;
  out.mX[32] = X_idx_1;
  out.mX[33] = X_idx_2 * -100.0;
  out.mX[34] = X_idx_11;
  out.mX[35] = X_idx_1;
  out.mX[36] = X_idx_1;
  out.mX[37] = X_idx_11;
  out.mX[38] = X_idx_2 * -100.0;
  out.mX[39] = X_idx_2 * -100.0;
  out.mX[40] = X_idx_2;
  out.mX[41] = X_idx_2 * -100.0;
  out.mX[42] = X_idx_2;
  out.mX[43] = Load_Harmonic_Drive_gear_tB;
  out.mX[44] = X_idx_2 * -100.0;
  out.mX[45] = X_idx_12;
  out.mX[46] = 0.0;
  out.mX[47] = X_idx_2;
  out.mX[48] = X_idx_2;
  out.mX[49] = 0.0;
  out.mX[50] = Load_Harmonic_Drive_gear_tB * 100.0;
  out.mX[51] = X_idx_2;
  out.mX[52] = X_idx_2;
  out.mX[53] = X_idx_13;
  out.mX[54] = X_idx_2;
  out.mX[55] = X_idx_2 * -100.0;
  out.mX[56] = X_idx_2;
  out.mX[57] = X_idx_14;
  out.mX[58] = X_idx_2;
  out.mX[59] = X_idx_2 * X_idx_14;
  out.mX[60] = X_idx_14;
  out.mX[61] = X_idx_14;
  out.mX[62] = X_idx_14;
  out.mX[63] = X_idx_4;
  out.mX[64] = X_idx_2 * -100.0;
  out.mX[65] = -X_idx_9;
  out.mX[66] = X_idx_3;
  out.mX[67] = X_idx_10;
  out.mX[68] = X_idx_15 * 1000.0;
  out.mX[69] = X_idx_13 * 0.01 + X_idx_14 * 0.01;
  out.mX[70] = X_idx_4;
  out.mX[71] = X_idx_10;
  out.mX[72] = X_idx_5 * 9.5492965855137211;
  out.mX[73] = X_idx_4;
  out.mX[74] = Motor_Foster_Thermal_Model_B_T;
  out.mX[75] = X_idx_6;
  out.mX[76] = X_idx_7;
  out.mX[77] = X_idx_4;
  out.mX[78] = -X_idx_6 + X_idx_4;
  out.mX[79] = X_idx_2 * -100.0;
  out.mX[80] = Motor_Foster_Thermal_Model_B_T;
  out.mX[81] = Motor_Foster_Thermal_Model_B_T;
  out.mX[82] = Motor_Foster_Thermal_Model_B_T;
  out.mX[83] = Motor_Foster_Thermal_Model_B_T;
  out.mX[84] = X_idx_10;
  out.mX[85] = X_idx_10;
  out.mX[86] = X_idx_10;
  out.mX[87] = X_idx_10;
  out.mX[88] = X_idx_10;
  (void)sys;
  (void)t13;
  return 0;
}
