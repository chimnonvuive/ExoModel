/*
 * File: rt_remd.c
 *
 * Code generated for Simulink model 'DZ_DSMC'.
 *
 * Model version                  : 4.81
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Fri Apr 15 17:32:24 2022
 */

#include "rtwtypes.h"
#include <float.h>
#include <math.h>
#include "rt_remd.h"

real_T rt_remd(real_T u0, real_T u1)
{
  real_T y;
  if ((boolean_T)((int32_T)(((u1 != 0.0) ? ((int32_T)1) : ((int32_T)0)) & ((u1
          != trunc(u1)) ? ((int32_T)1) : ((int32_T)0))))) {
    real_T q;
    q = fabs(u0 / u1);
    if (fabs(q - floor(q + 0.5)) <= (DBL_EPSILON * q)) {
      y = 0.0;
    } else {
      y = fmod(u0, u1);
    }
  } else {
    y = fmod(u0, u1);
  }

  return y;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
