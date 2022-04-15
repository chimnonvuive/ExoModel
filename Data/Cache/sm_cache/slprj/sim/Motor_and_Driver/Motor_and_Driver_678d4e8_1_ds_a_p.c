#include "ne_ds.h"
#include "Motor_and_Driver_678d4e8_1_ds_sys_struct.h"
#include "Motor_and_Driver_678d4e8_1_ds_a_p.h"
#include "Motor_and_Driver_678d4e8_1_ds.h"
#include "Motor_and_Driver_678d4e8_1_ds_externals.h"
#include "Motor_and_Driver_678d4e8_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Motor_and_Driver_678d4e8_1_ds_a_p ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; out = t2 -> mA_P ; out . mNumCol = 14ULL ; out . mNumRow
= 14ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 1 ; out . mJc [ 2 ] = 1 ;
out . mJc [ 3 ] = 5 ; out . mJc [ 4 ] = 6 ; out . mJc [ 5 ] = 6 ; out . mJc [
6 ] = 10 ; out . mJc [ 7 ] = 11 ; out . mJc [ 8 ] = 14 ; out . mJc [ 9 ] = 17
; out . mJc [ 10 ] = 19 ; out . mJc [ 11 ] = 20 ; out . mJc [ 12 ] = 22 ; out
. mJc [ 13 ] = 24 ; out . mJc [ 14 ] = 26 ; out . mIr [ 0 ] = 0 ; out . mIr [
1 ] = 8 ; out . mIr [ 2 ] = 9 ; out . mIr [ 3 ] = 10 ; out . mIr [ 4 ] = 11 ;
out . mIr [ 5 ] = 13 ; out . mIr [ 6 ] = 4 ; out . mIr [ 7 ] = 5 ; out . mIr
[ 8 ] = 11 ; out . mIr [ 9 ] = 13 ; out . mIr [ 10 ] = 6 ; out . mIr [ 11 ] =
5 ; out . mIr [ 12 ] = 7 ; out . mIr [ 13 ] = 13 ; out . mIr [ 14 ] = 4 ; out
. mIr [ 15 ] = 7 ; out . mIr [ 16 ] = 13 ; out . mIr [ 17 ] = 1 ; out . mIr [
18 ] = 8 ; out . mIr [ 19 ] = 9 ; out . mIr [ 20 ] = 2 ; out . mIr [ 21 ] = 5
; out . mIr [ 22 ] = 5 ; out . mIr [ 23 ] = 10 ; out . mIr [ 24 ] = 3 ; out .
mIr [ 25 ] = 12 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
