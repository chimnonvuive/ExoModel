/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Motor_and_Driver/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Motor_and_Driver_678d4e8_1_ds_sys_struct.h"
#include "Motor_and_Driver_678d4e8_1_ds_obs_exp.h"
#include "Motor_and_Driver_678d4e8_1_ds.h"
#include "Motor_and_Driver_678d4e8_1_ds_externals.h"
#include "Motor_and_Driver_678d4e8_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Motor_and_Driver_678d4e8_1_ds_obs_exp(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t3, NeDsMethodOutput *t4)
{
  PmRealVector out;
  real_T t0[148];
  real_T nonscalar0[4];
  size_t t2;
  int32_T b;
  (void)t3;
  out = t4->mOBS_EXP;
  nonscalar0[0] = 300.0;
  nonscalar0[1] = 300.0;
  nonscalar0[2] = 300.0;
  nonscalar0[3] = 300.0;
  t0[0ULL] = 0.0;
  t0[1ULL] = 0.0;
  t0[2ULL] = 0.0;
  t0[3ULL] = 0.0;
  t0[4ULL] = 0.0;
  t0[5ULL] = 0.0;
  t0[6ULL] = 0.0;
  t0[7ULL] = 0.0;
  t0[8ULL] = 0.0;
  t0[9ULL] = 0.0;
  t0[10ULL] = 0.0;
  t0[11ULL] = 0.0;
  t0[12ULL] = 0.0;
  t0[13ULL] = 0.0;
  t0[14ULL] = 1.0;
  t0[15ULL] = 1.0;
  t0[16ULL] = 1.0;
  t0[17ULL] = 1.0;
  t0[18ULL] = 0.0;
  t0[19ULL] = 0.0;
  t0[20ULL] = 0.0;
  t0[21ULL] = 0.0;
  t0[22ULL] = 0.0;
  t0[23ULL] = 0.0;
  t0[24ULL] = 1.0;
  t0[25ULL] = 0.0;
  t0[26ULL] = 0.0;
  t0[27ULL] = 0.0;
  t0[28ULL] = 0.0;
  t0[29ULL] = 0.0;
  t0[30ULL] = 0.0;
  t0[31ULL] = 0.0;
  t0[32ULL] = 0.0;
  t0[33ULL] = 0.0;
  t0[34ULL] = 0.0;
  t0[35ULL] = 0.0;
  t0[36ULL] = 0.0;
  t0[37ULL] = 0.0;
  t0[38ULL] = 0.0;
  t0[39ULL] = 0.0;
  t0[40ULL] = 0.0;
  t0[41ULL] = 0.0;
  t0[42ULL] = 0.0;
  t0[43ULL] = 0.0;
  t0[44ULL] = 0.0;
  t0[45ULL] = 0.0;
  t0[46ULL] = 0.0;
  t0[47ULL] = 0.0;
  t0[48ULL] = 0.0;
  t0[49ULL] = 0.0;
  t0[50ULL] = 0.0;
  t0[51ULL] = 0.0;
  t0[52ULL] = 0.0;
  t0[53ULL] = 0.0;
  t0[54ULL] = 0.0;
  t0[55ULL] = 0.0;
  t0[56ULL] = 0.0;
  t0[57ULL] = 0.0;
  t0[58ULL] = 0.0;
  t0[59ULL] = 0.0;
  t0[60ULL] = 0.0;
  t0[61ULL] = 0.0;
  t0[62ULL] = 0.0;
  t0[63ULL] = 0.0;
  t0[64ULL] = 293.15;
  t0[65ULL] = 0.0;
  t0[66ULL] = 0.0;
  t0[67ULL] = 293.15;
  t0[68ULL] = 0.0;
  t0[69ULL] = 300.0;
  t0[70ULL] = 0.0;
  t0[71ULL] = 0.0;
  t0[72ULL] = 0.0;
  t0[73ULL] = 0.0;
  t0[74ULL] = 0.0;
  t0[75ULL] = 0.0;
  t0[76ULL] = 0.0;
  t0[77ULL] = 0.0;
  t0[78ULL] = 0.0;
  t0[79ULL] = 0.0;
  t0[80ULL] = 0.0;
  t0[81ULL] = 0.0;
  t0[82ULL] = 0.0;
  t0[83ULL] = 0.0;
  t0[84ULL] = 0.0;
  t0[85ULL] = 0.0;
  t0[86ULL] = 0.0;
  t0[87ULL] = 0.0;
  t0[88ULL] = 0.0;
  t0[89ULL] = 0.0;
  t0[90ULL] = 0.0;
  t0[91ULL] = 0.0;
  t0[92ULL] = 0.0;
  t0[93ULL] = 0.0;
  t0[94ULL] = 0.0;
  t0[95ULL] = 0.0;
  t0[96ULL] = 0.0;
  t0[97ULL] = 0.0;
  t0[98ULL] = 0.0;
  t0[99ULL] = 0.0;
  t0[100ULL] = 0.0;
  t0[101ULL] = 293.15;
  t0[102ULL] = 0.0;
  t0[103ULL] = 0.0;
  t0[104ULL] = 1.0;
  t0[105ULL] = 1.0;
  t0[106ULL] = 0.0;
  t0[107ULL] = 0.0;
  t0[108ULL] = 0.0;
  t0[109ULL] = 0.0;
  t0[110ULL] = 0.0;
  t0[111ULL] = 0.0;
  t0[112ULL] = 0.0;
  t0[113ULL] = 0.0;
  t0[114ULL] = 0.0;
  t0[115ULL] = 303.15;
  t0[116ULL] = 0.0;
  t0[117ULL] = 0.0;
  t0[118ULL] = 0.0;
  t0[119ULL] = 0.0;
  t0[120ULL] = 293.15;
  t0[121ULL] = 293.15;
  t0[122ULL] = 0.0;
  t0[123ULL] = 0.0;
  t0[124ULL] = 0.0;
  for (t2 = 0ULL; t2 < 4ULL; t2++) {
    t0[t2 + 125ULL] = nonscalar0[t2];
  }

  t0[129ULL] = 0.0;
  t0[130ULL] = 0.0;
  t0[131ULL] = 0.0;
  t0[132ULL] = 0.0;
  t0[133ULL] = 0.0;
  t0[134ULL] = 293.15;
  t0[135ULL] = 293.15;
  t0[136ULL] = 293.15;
  t0[137ULL] = 0.0;
  t0[138ULL] = 0.0;
  t0[139ULL] = 293.15;
  t0[140ULL] = 0.0;
  t0[141ULL] = 0.0;
  t0[142ULL] = 0.0;
  t0[143ULL] = 0.0;
  t0[144ULL] = 0.0;
  t0[145ULL] = 0.0;
  t0[146ULL] = 0.0;
  t0[147ULL] = 0.0;
  for (b = 0; b < 148; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t4;
  return 0;
}
