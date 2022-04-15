#include "ne_ds.h"
#include "Motor_and_Driver_678d4e8_1_ds_sys_struct.h"
#include "Motor_and_Driver_678d4e8_1_ds_obs_all.h"
#include "Motor_and_Driver_678d4e8_1_ds.h"
#include "Motor_and_Driver_678d4e8_1_ds_externals.h"
#include "Motor_and_Driver_678d4e8_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Motor_and_Driver_678d4e8_1_ds_obs_all ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t4 , NeDsMethodOutput * t5 ) { PmRealVector out
; real_T t0 [ 137 ] ; real_T
Driver_Current_controller_Drive_Plant_Controlled_PWM_Voltage1_1 ; real_T
Load_Harmonic_Drive_gear_tB ; real_T U_idx_0 ; real_T U_idx_1 ; real_T
X_idx_0 ; real_T X_idx_1 ; real_T X_idx_10 ; real_T X_idx_11 ; real_T
X_idx_12 ; real_T X_idx_13 ; real_T X_idx_2 ; real_T X_idx_3 ; real_T X_idx_4
; real_T X_idx_5 ; real_T X_idx_6 ; real_T X_idx_7 ; real_T X_idx_8 ; real_T
X_idx_9 ; int32_T b ; U_idx_0 = t4 -> mU . mX [ 0 ] ; U_idx_1 = t4 -> mU . mX
[ 1 ] ; X_idx_0 = t4 -> mX . mX [ 0 ] ; X_idx_1 = t4 -> mX . mX [ 1 ] ;
X_idx_2 = t4 -> mX . mX [ 2 ] ; X_idx_3 = t4 -> mX . mX [ 3 ] ; X_idx_4 = t4
-> mX . mX [ 4 ] ; X_idx_5 = t4 -> mX . mX [ 5 ] ; X_idx_6 = t4 -> mX . mX [
6 ] ; X_idx_7 = t4 -> mX . mX [ 7 ] ; X_idx_8 = t4 -> mX . mX [ 8 ] ; X_idx_9
= t4 -> mX . mX [ 9 ] ; X_idx_10 = t4 -> mX . mX [ 10 ] ; X_idx_11 = t4 -> mX
. mX [ 11 ] ; X_idx_12 = t4 -> mX . mX [ 12 ] ; X_idx_13 = t4 -> mX . mX [ 13
] ; out = t5 -> mOBS_ALL ;
Driver_Current_controller_Drive_Plant_Controlled_PWM_Voltage1_1 = X_idx_6 *
0.055555555555555552 ; Load_Harmonic_Drive_gear_tB = X_idx_11 * - 0.01 +
X_idx_12 * - 0.01 ; t0 [ 0ULL ] = 0.0 ; t0 [ 1ULL ] = 0.0 ; t0 [ 2ULL ] = 0.0
; t0 [ 3ULL ] = U_idx_0 ; t0 [ 4ULL ] = X_idx_6 ; t0 [ 5ULL ] =
Driver_Current_controller_Drive_Plant_Controlled_PWM_Voltage1_1 ; t0 [ 6ULL ]
= 0.0 ; t0 [ 7ULL ] = 0.0 ; t0 [ 8ULL ] = X_idx_6 ; t0 [ 9ULL ] =
Driver_Current_controller_Drive_Plant_Controlled_PWM_Voltage1_1 * 18.0 ; t0 [
10ULL ] = 0.0 ; t0 [ 11ULL ] = X_idx_6 ; t0 [ 12ULL ] = 0.0 ; t0 [ 13ULL ] =
U_idx_1 ; t0 [ 14ULL ] = X_idx_7 ; t0 [ 15ULL ] = 0.0 ; t0 [ 16ULL ] = 0.0 ;
t0 [ 17ULL ] = 0.0 ; t0 [ 18ULL ] = 0.0 ; t0 [ 19ULL ] = 0.0 ; t0 [ 20ULL ] =
0.0 ; t0 [ 21ULL ] = X_idx_8 ; t0 [ 22ULL ] = X_idx_7 * X_idx_7 * 0.0001 *
1000.0 ; t0 [ 23ULL ] = X_idx_8 ; t0 [ 24ULL ] = X_idx_0 ; t0 [ 25ULL ] = 0.0
; t0 [ 26ULL ] = 0.0 ; t0 [ 27ULL ] = U_idx_0 ; t0 [ 28ULL ] = U_idx_0 ; t0 [
29ULL ] = U_idx_0 ; t0 [ 30ULL ] = 0.0 ; t0 [ 31ULL ] = 0.0 ; t0 [ 32ULL ] =
U_idx_1 ; t0 [ 33ULL ] = U_idx_1 ; t0 [ 34ULL ] = U_idx_1 ; t0 [ 35ULL ] =
0.0 ; t0 [ 36ULL ] = U_idx_1 ; t0 [ 37ULL ] = U_idx_1 ; t0 [ 38ULL ] =
U_idx_0 ; t0 [ 39ULL ] = U_idx_0 ; t0 [ 40ULL ] = - X_idx_7 ; t0 [ 41ULL ] =
- X_idx_7 ; t0 [ 42ULL ] = X_idx_8 ; t0 [ 43ULL ] = X_idx_8 ; t0 [ 44ULL ] =
- X_idx_7 ; t0 [ 45ULL ] = X_idx_8 ; t0 [ 46ULL ] = X_idx_8 ; t0 [ 47ULL ] =
X_idx_8 ; t0 [ 48ULL ] = 0.0 ; t0 [ 49ULL ] = X_idx_8 ; t0 [ 50ULL ] = 0.0 ;
t0 [ 51ULL ] = X_idx_8 ; t0 [ 52ULL ] = 0.0 ; t0 [ 53ULL ] = X_idx_1 ; t0 [
54ULL ] = 0.0 ; t0 [ 55ULL ] = X_idx_2 * - 100.0 ; t0 [ 56ULL ] = X_idx_9 ;
t0 [ 57ULL ] = X_idx_1 ; t0 [ 58ULL ] = X_idx_1 ; t0 [ 59ULL ] = X_idx_9 ; t0
[ 60ULL ] = X_idx_2 * - 100.0 ; t0 [ 61ULL ] = 0.0 ; t0 [ 62ULL ] = X_idx_2 *
- 100.0 ; t0 [ 63ULL ] = X_idx_2 ; t0 [ 64ULL ] = 0.0 ; t0 [ 65ULL ] =
X_idx_2 * - 100.0 ; t0 [ 66ULL ] = X_idx_2 ; t0 [ 67ULL ] = 0.0 ; t0 [ 68ULL
] = Load_Harmonic_Drive_gear_tB ; t0 [ 69ULL ] = 300.0 ; t0 [ 70ULL ] = 0.0 ;
t0 [ 71ULL ] = X_idx_2 * - 100.0 ; t0 [ 72ULL ] = 0.0 ; t0 [ 73ULL ] =
X_idx_10 ; t0 [ 74ULL ] = 0.0 ; t0 [ 75ULL ] = X_idx_2 ; t0 [ 76ULL ] = 0.0 ;
t0 [ 77ULL ] = X_idx_2 ; t0 [ 78ULL ] = 0.0 ; t0 [ 79ULL ] = 0.0 ; t0 [ 80ULL
] = Load_Harmonic_Drive_gear_tB * 100.0 ; t0 [ 81ULL ] = 0.0 ; t0 [ 82ULL ] =
0.0 ; t0 [ 83ULL ] = X_idx_2 ; t0 [ 84ULL ] = X_idx_2 ; t0 [ 85ULL ] =
X_idx_11 ; t0 [ 86ULL ] = X_idx_2 ; t0 [ 87ULL ] = X_idx_2 * - 100.0 ; t0 [
88ULL ] = 0.0 ; t0 [ 89ULL ] = 0.0 ; t0 [ 90ULL ] = X_idx_2 ; t0 [ 91ULL ] =
X_idx_12 ; t0 [ 92ULL ] = X_idx_2 ; t0 [ 93ULL ] = 0.0 ; t0 [ 94ULL ] = 0.0 ;
t0 [ 95ULL ] = X_idx_12 ; t0 [ 96ULL ] = X_idx_12 ; t0 [ 97ULL ] = X_idx_12 ;
t0 [ 98ULL ] = 0.0 ; t0 [ 99ULL ] = 0.0 ; t0 [ 100ULL ] = 0.0 ; t0 [ 101ULL ]
= X_idx_4 ; t0 [ 102ULL ] = 0.0 ; t0 [ 103ULL ] = X_idx_2 * - 100.0 ; t0 [
104ULL ] = 1.0 ; t0 [ 105ULL ] = 1.0 ; t0 [ 106ULL ] = 0.0 ; t0 [ 107ULL ] =
0.0 ; t0 [ 108ULL ] = 0.0 ; t0 [ 109ULL ] = - X_idx_7 ; t0 [ 110ULL ] =
X_idx_3 ; t0 [ 111ULL ] = 0.0 ; t0 [ 112ULL ] = X_idx_8 ; t0 [ 113ULL ] =
X_idx_13 * 1000.0 ; t0 [ 114ULL ] = X_idx_11 * 0.01 + X_idx_12 * 0.01 ; t0 [
115ULL ] = X_idx_4 ; t0 [ 116ULL ] = X_idx_8 ; t0 [ 117ULL ] = 0.0 ; t0 [
118ULL ] = X_idx_5 * 9.5492965855137211 ; t0 [ 119ULL ] = 0.0 ; t0 [ 120ULL ]
= X_idx_2 * - 100.0 ; t0 [ 121ULL ] = 0.0 ; t0 [ 122ULL ] = 0.0 ; t0 [ 123ULL
] = X_idx_4 ; t0 [ 124ULL ] = X_idx_4 ; t0 [ 125ULL ] = 0.0 ; t0 [ 126ULL ] =
X_idx_4 ; t0 [ 127ULL ] = X_idx_4 ; t0 [ 128ULL ] = 0.0 ; t0 [ 129ULL ] =
X_idx_8 ; t0 [ 130ULL ] = 0.0 ; t0 [ 131ULL ] = X_idx_8 ; t0 [ 132ULL ] = 0.0
; t0 [ 133ULL ] = X_idx_8 ; t0 [ 134ULL ] = X_idx_8 ; t0 [ 135ULL ] = X_idx_8
; t0 [ 136ULL ] = 0.0 ; for ( b = 0 ; b < 137 ; b ++ ) { out . mX [ b ] = t0
[ b ] ; } ( void ) sys ; ( void ) t5 ; return 0 ; }
