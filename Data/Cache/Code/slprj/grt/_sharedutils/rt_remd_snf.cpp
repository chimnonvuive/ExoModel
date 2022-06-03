/*
 * rt_remd_snf.cpp
 *
 * Code generation for model "DZ_DSMC".
 *
 * Model version              : 4.93
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Thu May 19 17:44:59 2022
 * Created for block: DZ_DSMC
 */

#include "rtwtypes.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include <cfloat>
#include <cmath>
#include "rt_remd_snf.h"

real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T y;
  if (static_cast<boolean_T>(static_cast<boolean_T>(std::isnan(u0) | std::isnan
        (u1)) | std::isinf(u0))) {
    y = (rtNaN);
  } else if (std::isinf(u1)) {
    y = u0;
  } else if (static_cast<boolean_T>((u1 != 0.0) & (u1 != std::trunc(u1)))) {
    real_T q;
    q = std::abs(u0 / u1);
    if (static_cast<boolean_T>((std::abs(q - std::floor(q + 0.5)) > DBL_EPSILON *
          q) ^ 1)) {
      y = 0.0 * u0;
    } else {
      y = std::fmod(u0, u1);
    }
  } else {
    y = std::fmod(u0, u1);
  }

  return y;
}
