#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"RespSignal" , 15 , 16 } , { "motorInfo" , 16 , 16 } , { "uint64_T" , 17 , 8
} , { "int64_T" , 18 , 8 } , { "char_T" , 19 , 8 } , { "uchar_T" , 20 , 8 } ,
{ "time_T" , 21 , 8 } } ; static uint_T rtDataTypeSizes [ ] = { sizeof (
real_T ) , sizeof ( real32_T ) , sizeof ( int8_T ) , sizeof ( uint8_T ) ,
sizeof ( int16_T ) , sizeof ( uint16_T ) , sizeof ( int32_T ) , sizeof (
uint32_T ) , sizeof ( boolean_T ) , sizeof ( fcn_call_T ) , sizeof ( int_T )
, sizeof ( pointer_T ) , sizeof ( action_T ) , 2 * sizeof ( uint32_T ) ,
sizeof ( int32_T ) , sizeof ( RespSignal ) , sizeof ( motorInfo ) , sizeof (
uint64_T ) , sizeof ( int64_T ) , sizeof ( char_T ) , sizeof ( uchar_T ) ,
sizeof ( time_T ) } ; static const char_T * rtDataTypeNames [ ] = { "real_T"
, "real32_T" , "int8_T" , "uint8_T" , "int16_T" , "uint16_T" , "int32_T" ,
"uint32_T" , "boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" , "action_T"
, "timer_uint32_pair_T" , "physical_connection" , "RespSignal" , "motorInfo"
, "uint64_T" , "int64_T" , "char_T" , "uchar_T" , "time_T" } ; static
DataTypeTransition rtBTransitions [ ] = { { ( char_T * ) ( & rtB . fu0jmlqjl4
) , 0 , 0 , 50 } , { ( char_T * ) ( & rtB . dbxopmzlmg ) , 1 , 0 , 5 } , { (
char_T * ) ( & rtB . oixjxwb01f ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtDW .
i1ov2bkgtq ) , 0 , 0 , 28 } , { ( char_T * ) ( & rtDW . curcdagsjb ) , 11 , 0
, 20 } , { ( char_T * ) ( & rtDW . bsf12pb2h5 ) , 1 , 0 , 6 } , { ( char_T *
) ( & rtDW . pk134fwa0i [ 0 ] ) , 10 , 0 , 4 } , { ( char_T * ) ( & rtDW .
cwozdkk230 ) , 2 , 0 , 8 } , { ( char_T * ) ( & rtDW . goks4dbmi4 ) , 8 , 0 ,
3 } } ; static DataTypeTransitionTable rtBTransTable = { 9U , rtBTransitions
} ; static DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( & rtP .
x3001_5 ) , 0 , 0 , 47 } , { ( char_T * ) ( & rtP .
UnitDelay1_InitialCondition ) , 1 , 0 , 4 } , { ( char_T * ) ( & rtP .
Memory_InitialCondition ) , 8 , 0 , 1 } } ; static DataTypeTransitionTable
rtPTransTable = { 3U , rtPTransitions } ;
