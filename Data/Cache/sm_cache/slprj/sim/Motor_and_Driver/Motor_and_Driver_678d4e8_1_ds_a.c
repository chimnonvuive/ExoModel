#include "ne_ds.h"
#include "Motor_and_Driver_678d4e8_1_ds_sys_struct.h"
#include "Motor_and_Driver_678d4e8_1_ds_a.h"
#include "Motor_and_Driver_678d4e8_1_ds.h"
#include "Motor_and_Driver_678d4e8_1_ds_externals.h"
#include "Motor_and_Driver_678d4e8_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Motor_and_Driver_678d4e8_1_ds_a ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t29 , NeDsMethodOutput * t30 ) { PmRealVector out ;
real_T t2 [ 26 ] ; real_T t3 [ 4 ] ; real_T t4 [ 4 ] ; size_t t12 ; ( void )
t29 ; out = t30 -> mA ; t3 [ 0ULL ] = 1.0 ; t3 [ 1ULL ] = 1.0 ; t3 [ 2ULL ] =
- 0.01 ; t3 [ 3ULL ] = 1.0 ; t4 [ 0 ] = 0.081436156232397 ; t4 [ 1 ] = -
0.00030891269963645088 ; t4 [ 2 ] = 0.01 ; t4 [ 3 ] = 8.1436156223488559E-11
; t2 [ 0ULL ] = - 0.0 ; for ( t12 = 0ULL ; t12 < 4ULL ; t12 ++ ) { t2 [ t12 +
1ULL ] = t3 [ t12 ] ; } t2 [ 5ULL ] = - 0.99999999989060817 ; for ( t12 =
0ULL ; t12 < 4ULL ; t12 ++ ) { t2 [ t12 + 6ULL ] = t4 [ t12 ] ; } out . mX [
0 ] = t2 [ 0 ] ; out . mX [ 1 ] = t2 [ 1 ] ; out . mX [ 2 ] = t2 [ 2 ] ; out
. mX [ 3 ] = t2 [ 3 ] ; out . mX [ 4 ] = t2 [ 4 ] ; out . mX [ 5 ] = t2 [ 5 ]
; out . mX [ 6 ] = t2 [ 6 ] ; out . mX [ 7 ] = t2 [ 7 ] ; out . mX [ 8 ] = t2
[ 8 ] ; out . mX [ 9 ] = t2 [ 9 ] ; out . mX [ 10 ] = 0.055555555555555552 ;
out . mX [ 11 ] = - 0.081436156232397 ; out . mX [ 12 ] = 0.0 ; out . mX [ 13
] = - 0.99999999989060817 ; out . mX [ 14 ] = - 1.0 ; out . mX [ 15 ] = 0.0 ;
out . mX [ 16 ] = - 9.9999999989060832E-10 ; out . mX [ 17 ] = 1.0 ; out . mX
[ 18 ] = 0.01 ; out . mX [ 19 ] = 0.01 ; out . mX [ 20 ] = - 1.0 ; out . mX [
21 ] = 0.01 ; out . mX [ 22 ] = 0.01 ; out . mX [ 23 ] = 1.0 ; out . mX [ 24
] = 1.0 ; out . mX [ 25 ] = 1.0 ; ( void ) sys ; ( void ) t30 ; return 0 ; }
