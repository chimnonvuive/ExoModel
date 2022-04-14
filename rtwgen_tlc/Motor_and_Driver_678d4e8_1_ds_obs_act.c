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
  NeDynamicSystemInput *t4, NeDsMethodOutput *t5)
{
  PmRealVector out;
  real_T t0[133];
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
  real_T t2;
  int32_T b;
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
  out = t5->mOBS_ACT;
  t2 = X_idx_0 * -0.01;
  Subsystem1_Harmonic_Drive_gear_tB = X_idx_8 * -0.01;
  Subsystem_Reference_Current_controller_Drive_Plant_Controlled_1 = X_idx_9 *
    0.055555555555555552;
  t0[0ULL] = 0.0;
  t0[1ULL] = X_idx_2;
  t0[2ULL] = 0.0;
  t0[3ULL] = X_idx_0;
  t0[4ULL] = 1.0;
  t0[5ULL] = 1.0;
  t0[6ULL] = 0.0;
  t0[7ULL] = 0.0;
  t0[8ULL] = 0.0;
  t0[9ULL] = X_idx_5;
  t0[10ULL] = X_idx_1;
  t0[11ULL] = 0.0;
  t0[12ULL] = X_idx_6;
  t0[13ULL] = X_idx_7 * 1000.0;
  t0[14ULL] = X_idx_8 * 0.01;
  t0[15ULL] = X_idx_2;
  t0[16ULL] = X_idx_6;
  t0[17ULL] = 0.0;
  t0[18ULL] = X_idx_0 * 9.5492965855137211;
  t0[19ULL] = 0.0;
  t0[20ULL] = X_idx_0;
  t0[21ULL] = 0.0;
  t0[22ULL] = 0.0;
  t0[23ULL] = X_idx_2;
  t0[24ULL] = X_idx_2;
  t0[25ULL] = 0.0;
  t0[26ULL] = X_idx_2;
  t0[27ULL] = X_idx_2;
  t0[28ULL] = 0.0;
  t0[29ULL] = X_idx_6;
  t0[30ULL] = 0.0;
  t0[31ULL] = X_idx_6;
  t0[32ULL] = 0.0;
  t0[33ULL] = X_idx_6;
  t0[34ULL] = X_idx_6;
  t0[35ULL] = X_idx_6;
  t0[36ULL] = 0.0;
  t0[37ULL] = X_idx_3;
  t0[38ULL] = 0.0;
  t0[39ULL] = X_idx_0;
  t0[40ULL] = X_idx_0;
  t0[41ULL] = X_idx_3;
  t0[42ULL] = X_idx_3;
  t0[43ULL] = X_idx_0;
  t0[44ULL] = X_idx_0;
  t0[45ULL] = 0.0;
  t0[46ULL] = X_idx_0;
  t0[47ULL] = X_idx_0 * -0.01;
  t0[48ULL] = 0.0;
  t0[49ULL] = X_idx_0;
  t0[50ULL] = X_idx_0 * -0.01;
  t0[51ULL] = 0.0;
  t0[52ULL] = Subsystem1_Harmonic_Drive_gear_tB;
  t0[53ULL] = 300.0;
  t0[54ULL] = 0.0;
  t0[55ULL] = X_idx_0;
  t0[56ULL] = 0.0;
  t0[57ULL] = X_idx_0;
  t0[58ULL] = 0.0;
  t0[59ULL] = X_idx_0 * -0.01;
  t0[60ULL] = 0.0;
  t0[61ULL] = t2;
  t0[62ULL] = 0.0;
  t0[63ULL] = 0.0;
  t0[64ULL] = Subsystem1_Harmonic_Drive_gear_tB * 100.0;
  t0[65ULL] = 0.0;
  t0[66ULL] = 0.0;
  t0[67ULL] = X_idx_0;
  t0[68ULL] = 0.0;
  t0[69ULL] = 0.0;
  t0[70ULL] = X_idx_0 * -0.01;
  t0[71ULL] = X_idx_8;
  t0[72ULL] = t2;
  t0[73ULL] = X_idx_0 * -0.01;
  t0[74ULL] = X_idx_0 * -0.01;
  t0[75ULL] = X_idx_8;
  t0[76ULL] = X_idx_8;
  t0[77ULL] = X_idx_8;
  t0[78ULL] = X_idx_0 * -0.01;
  t0[79ULL] = X_idx_0 * -0.01;
  t0[80ULL] = 0.0;
  t0[81ULL] = 0.0;
  t0[82ULL] = 0.0;
  t0[83ULL] = U_idx_0;
  t0[84ULL] = X_idx_9;
  t0[85ULL] = Subsystem_Reference_Current_controller_Drive_Plant_Controlled_1;
  t0[86ULL] = 0.0;
  t0[87ULL] = 0.0;
  t0[88ULL] = X_idx_9;
  t0[89ULL] = Subsystem_Reference_Current_controller_Drive_Plant_Controlled_1 *
    18.0;
  t0[90ULL] = 0.0;
  t0[91ULL] = X_idx_9;
  t0[92ULL] = 0.0;
  t0[93ULL] = U_idx_1;
  t0[94ULL] = -X_idx_5;
  t0[95ULL] = 0.0;
  t0[96ULL] = 0.0;
  t0[97ULL] = 0.0;
  t0[98ULL] = 0.0;
  t0[99ULL] = 0.0;
  t0[100ULL] = 0.0;
  t0[101ULL] = X_idx_6;
  t0[102ULL] = X_idx_5 * X_idx_5 * 0.0001 * 1000.0;
  t0[103ULL] = X_idx_6;
  t0[104ULL] = X_idx_4;
  t0[105ULL] = 0.0;
  t0[106ULL] = 0.0;
  t0[107ULL] = U_idx_0;
  t0[108ULL] = U_idx_0;
  t0[109ULL] = U_idx_0;
  t0[110ULL] = 0.0;
  t0[111ULL] = 0.0;
  t0[112ULL] = U_idx_1;
  t0[113ULL] = U_idx_1;
  t0[114ULL] = U_idx_1;
  t0[115ULL] = 0.0;
  t0[116ULL] = U_idx_1;
  t0[117ULL] = U_idx_1;
  t0[118ULL] = U_idx_0;
  t0[119ULL] = U_idx_0;
  t0[120ULL] = X_idx_5;
  t0[121ULL] = X_idx_5;
  t0[122ULL] = X_idx_6;
  t0[123ULL] = X_idx_6;
  t0[124ULL] = X_idx_5;
  t0[125ULL] = X_idx_6;
  t0[126ULL] = X_idx_6;
  t0[127ULL] = X_idx_6;
  t0[128ULL] = 0.0;
  t0[129ULL] = X_idx_6;
  t0[130ULL] = 0.0;
  t0[131ULL] = X_idx_6;
  t0[132ULL] = 0.0;
  for (b = 0; b < 133; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t5;
  return 0;
}
