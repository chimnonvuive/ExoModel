#include "ne_ds.h"
#include "Motor_and_Driver_678d4e8_1_ds_sys_struct.h"
#include "Motor_and_Driver_678d4e8_1_ds_a.h"
#include "Motor_and_Driver_678d4e8_1_ds.h"
#include "Motor_and_Driver_678d4e8_1_ds_externals.h"
#include "Motor_and_Driver_678d4e8_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Motor_and_Driver_678d4e8_1_ds_a ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t20 , NeDsMethodOutput * t21 ) { PmRealVector out ;
real_T t2 [ 18 ] ; real_T t3 [ 5 ] ; size_t t8 ; ( void ) t20 ; out = t21 ->
mA ; t3 [ 0ULL ] = 1.0 ; t3 [ 1ULL ] = 0.081436156232397 ; t3 [ 2ULL ] = -
0.00030891269963645088 ; t3 [ 3ULL ] = 1.0E-5 ; t3 [ 4ULL ] =
8.1436156223488559E-11 ; t2 [ 0ULL ] = - 0.0 ; for ( t8 = 0ULL ; t8 < 5ULL ;
t8 ++ ) { t2 [ t8 + 1ULL ] = t3 [ t8 ] ; } out . mX [ 0 ] = t2 [ 0 ] ; out .
mX [ 1 ] = t2 [ 1 ] ; out . mX [ 2 ] = t2 [ 2 ] ; out . mX [ 3 ] = t2 [ 3 ] ;
out . mX [ 4 ] = t2 [ 4 ] ; out . mX [ 5 ] = t2 [ 5 ] ; out . mX [ 6 ] = -
0.99999999989060817 ; out . mX [ 7 ] = 0.055555555555555552 ; out . mX [ 8 ]
= - 0.081436156232397 ; out . mX [ 9 ] = 0.0 ; out . mX [ 10 ] = -
0.99999999989060817 ; out . mX [ 11 ] = - 1.0 ; out . mX [ 12 ] = 0.0 ; out .
mX [ 13 ] = - 9.9999999989060832E-10 ; out . mX [ 14 ] = 0.01 ; out . mX [ 15
] = 1.0 ; out . mX [ 16 ] = 1.0 ; out . mX [ 17 ] = 1.0 ; ( void ) sys ; (
void ) t21 ; return 0 ; }
