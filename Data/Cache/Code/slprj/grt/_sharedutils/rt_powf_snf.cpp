/*
 * rt_powf_snf.cpp
 *
 * Code generation for model "DZ_DSMC".
 *
 * Model version              : 4.93
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Thu May 19 17:44:59 2022
 * Created for block: DZ_DSMC
 */

#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include <cmath>
#include "rt_powf_snf.h"

real32_T rt_powf_snf(real32_T u0, real32_T u1)
{
  real32_T y;
  if (static_cast<boolean_T>(std::isnan(u0) | std::isnan(u1))) {
    y = (rtNaNF);
  } else {
    real32_T tmp;
    real32_T tmp_0;
    tmp = std::abs(u0);
    tmp_0 = std::abs(u1);
    if (std::isinf(u1)) {
      if (tmp == 1.0F) {
        y = 1.0F;
      } else if (tmp > 1.0F) {
        if (u1 > 0.0F) {
          y = (rtInfF);
        } else {
          y = 0.0F;
        }
      } else if (u1 > 0.0F) {
        y = 0.0F;
      } else {
        y = (rtInfF);
      }
    } else if (tmp_0 == 0.0F) {
      y = 1.0F;
    } else if (tmp_0 == 1.0F) {
      if (u1 > 0.0F) {
        y = u0;
      } else {
        y = 1.0F / u0;
      }
    } else if (u1 == 2.0F) {
      y = u0 * u0;
    } else if (static_cast<boolean_T>((u1 == 0.5F) & (u0 >= 0.0F))) {
      y = std::sqrt(u0);
    } else if (static_cast<boolean_T>((u0 < 0.0F) & (u1 > std::floor(u1)))) {
      y = (rtNaNF);
    } else {
      y = std::pow(u0, u1);
    }
  }

  return y;
}
