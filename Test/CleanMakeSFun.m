close all force
clc

cd EPOS4

delete sfun_maxon.mexw64

mex sfun_maxon.c -DWINDOWS -I.\Epos4Windows -L.\Epos4Windows -lEposCmd64 -silent

cd ..\