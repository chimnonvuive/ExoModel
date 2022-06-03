/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Motor_and_Driver/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Motor_and_Driver_678d4e8_1_ds_sys_struct.h"
#include "Motor_and_Driver_678d4e8_1_ds_obs_act.h"
#include "Motor_and_Driver_678d4e8_1_ds.h"
#include "Motor_and_Driver_678d4e8_1_ds_externals.h"
#include "Motor_and_Driver_678d4e8_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Motor_and_Driver_678d4e8_1_ds_obs_act(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t14, NeDsMethodOutput *t15)
{
  PmRealVector out;
  real_T t0[148];
  real_T t2[4];
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
  size_t t4;
  int32_T b;
  U_idx_0 = t14->mU.mX[0];
  U_idx_1 = t14->mU.mX[1];
  X_idx_0 = t14->mX.mX[0];
  X_idx_1 = t14->mX.mX[1];
  X_idx_2 = t14->mX.mX[2];
  X_idx_3 = t14->mX.mX[3];
  X_idx_4 = t14->mX.mX[4];
  X_idx_5 = t14->mX.mX[5];
  X_idx_6 = t14->mX.mX[6];
  X_idx_7 = t14->mX.mX[7];
  X_idx_8 = t14->mX.mX[8];
  X_idx_9 = t14->mX.mX[9];
  X_idx_10 = t14->mX.mX[10];
  X_idx_11 = t14->mX.mX[11];
  X_idx_12 = t14->mX.mX[12];
  X_idx_13 = t14->mX.mX[13];
  X_idx_14 = t14->mX.mX[14];
  X_idx_15 = t14->mX.mX[15];
  out = t15->mOBS_ACT;
  Driver_Current_controller_Drive_Plant_Controlled_PWM_Voltage_pw = X_idx_8 *
    0.055555555555555552;
  Load_Harmonic_Drive_gear_tB = X_idx_13 * -0.01 + X_idx_14 * -0.01;
  Motor_Foster_Thermal_Model_B_T = (-X_idx_6 + -X_idx_7) + X_idx_4;
  t2[0] = 0.0;
  t2[1] = 0.0;
  t2[2] = 0.0;
  t2[3] = 0.0;
  t0[0ULL] = 0.0;
  t0[1ULL] = 0.0;
  t0[2ULL] = 0.0;
  t0[3ULL] = U_idx_0;
  t0[4ULL] = X_idx_8;
  t0[5ULL] = Driver_Current_controller_Drive_Plant_Controlled_PWM_Voltage_pw;
  t0[6ULL] = 0.0;
  t0[7ULL] = 0.0;
  t0[8ULL] = X_idx_8;
  t0[9ULL] = Driver_Current_controller_Drive_Plant_Controlled_PWM_Voltage_pw *
    18.0;
  t0[10ULL] = 0.0;
  t0[11ULL] = X_idx_8;
  t0[12ULL] = 0.0;
  t0[13ULL] = U_idx_1;
  t0[14ULL] = X_idx_9;
  t0[15ULL] = 0.0;
  t0[16ULL] = 0.0;
  t0[17ULL] = 0.0;
  t0[18ULL] = 0.0;
  t0[19ULL] = 0.0;
  t0[20ULL] = 0.0;
  t0[21ULL] = X_idx_10;
  t0[22ULL] = X_idx_9 * X_idx_9 * 0.0001 * 1000.0;
  t0[23ULL] = X_idx_10;
  t0[24ULL] = X_idx_0;
  t0[25ULL] = 0.0;
  t0[26ULL] = 0.0;
  t0[27ULL] = U_idx_0;
  t0[28ULL] = U_idx_0;
  t0[29ULL] = U_idx_0;
  t0[30ULL] = 0.0;
  t0[31ULL] = 0.0;
  t0[32ULL] = U_idx_1;
  t0[33ULL] = U_idx_1;
  t0[34ULL] = U_idx_1;
  t0[35ULL] = 0.0;
  t0[36ULL] = U_idx_1;
  t0[37ULL] = U_idx_1;
  t0[38ULL] = U_idx_0;
  t0[39ULL] = U_idx_0;
  t0[40ULL] = -X_idx_9;
  t0[41ULL] = -X_idx_9;
  t0[42ULL] = X_idx_10;
  t0[43ULL] = X_idx_10;
  t0[44ULL] = -X_idx_9;
  t0[45ULL] = X_idx_10;
  t0[46ULL] = X_idx_10;
  t0[47ULL] = X_idx_10;
  t0[48ULL] = 0.0;
  t0[49ULL] = X_idx_10;
  t0[50ULL] = 0.0;
  t0[51ULL] = X_idx_10;
  t0[52ULL] = 0.0;
  t0[53ULL] = X_idx_1;
  t0[54ULL] = 0.0;
  t0[55ULL] = X_idx_2 * -100.0;
  t0[56ULL] = X_idx_11;
  t0[57ULL] = X_idx_1;
  t0[58ULL] = X_idx_1;
  t0[59ULL] = X_idx_11;
  t0[60ULL] = X_idx_2 * -100.0;
  t0[61ULL] = 0.0;
  t0[62ULL] = X_idx_2 * -100.0;
  t0[63ULL] = X_idx_2;
  t0[64ULL] = 0.0;
  t0[65ULL] = X_idx_2 * -100.0;
  t0[66ULL] = X_idx_2;
  t0[67ULL] = 0.0;
  t0[68ULL] = Load_Harmonic_Drive_gear_tB;
  t0[69ULL] = 300.0;
  t0[70ULL] = 0.0;
  t0[71ULL] = X_idx_2 * -100.0;
  t0[72ULL] = 0.0;
  t0[73ULL] = X_idx_12;
  t0[74ULL] = 0.0;
  t0[75ULL] = X_idx_2;
  t0[76ULL] = 0.0;
  t0[77ULL] = X_idx_2;
  t0[78ULL] = 0.0;
  t0[79ULL] = 0.0;
  t0[80ULL] = Load_Harmonic_Drive_gear_tB * 100.0;
  t0[81ULL] = 0.0;
  t0[82ULL] = 0.0;
  t0[83ULL] = X_idx_2;
  t0[84ULL] = X_idx_2;
  t0[85ULL] = X_idx_13;
  t0[86ULL] = X_idx_2;
  t0[87ULL] = X_idx_2 * -100.0;
  t0[88ULL] = 0.0;
  t0[89ULL] = 0.0;
  t0[90ULL] = X_idx_2;
  t0[91ULL] = X_idx_14;
  t0[92ULL] = X_idx_2;
  t0[93ULL] = 0.0;
  t0[94ULL] = 0.0;
  t0[95ULL] = X_idx_14;
  t0[96ULL] = X_idx_14;
  t0[97ULL] = X_idx_14;
  t0[98ULL] = 0.0;
  t0[99ULL] = 0.0;
  t0[100ULL] = 0.0;
  t0[101ULL] = X_idx_4;
  t0[102ULL] = 0.0;
  t0[103ULL] = X_idx_2 * -100.0;
  t0[104ULL] = 1.0;
  t0[105ULL] = 1.0;
  t0[106ULL] = 0.0;
  t0[107ULL] = 0.0;
  t0[108ULL] = 0.0;
  t0[109ULL] = -X_idx_9;
  t0[110ULL] = X_idx_3;
  t0[111ULL] = 0.0;
  t0[112ULL] = X_idx_10;
  t0[113ULL] = X_idx_15 * 1000.0;
  t0[114ULL] = X_idx_13 * 0.01 + X_idx_14 * 0.01;
  t0[115ULL] = X_idx_4;
  t0[116ULL] = X_idx_10;
  t0[117ULL] = 0.0;
  t0[118ULL] = X_idx_5 * 9.5492965855137211;
  t0[119ULL] = 0.0;
  t0[120ULL] = X_idx_4;
  t0[121ULL] = Motor_Foster_Thermal_Model_B_T;
  t0[122ULL] = 0.0;
  t0[123ULL] = X_idx_6;
  t0[124ULL] = X_idx_7;
  for (t4 = 0ULL; t4 < 4ULL; t4++) {
    t0[t4 + 125ULL] = t2[t4];
  }

  t0[129ULL] = X_idx_4;
  t0[130ULL] = -X_idx_6 + X_idx_4;
  t0[131ULL] = X_idx_2 * -100.0;
  t0[132ULL] = 0.0;
  t0[133ULL] = 0.0;
  t0[134ULL] = Motor_Foster_Thermal_Model_B_T;
  t0[135ULL] = Motor_Foster_Thermal_Model_B_T;
  t0[136ULL] = 0.0;
  t0[137ULL] = Motor_Foster_Thermal_Model_B_T;
  t0[138ULL] = Motor_Foster_Thermal_Model_B_T;
  t0[139ULL] = 0.0;
  t0[140ULL] = X_idx_10;
  t0[141ULL] = 0.0;
  t0[142ULL] = X_idx_10;
  t0[143ULL] = 0.0;
  t0[144ULL] = X_idx_10;
  t0[145ULL] = X_idx_10;
  t0[146ULL] = X_idx_10;
  t0[147ULL] = 0.0;
  for (b = 0; b < 148; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t15;
  return 0;
}