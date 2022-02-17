This is the readme file for Soft Real Time Simulink Block for Pacing Simulink Simulations
and associated c-mex S-functions:
   (1) sfun_getSystemClockTimeval.c
   (2) sfun_sleep.c
   (3) sfun_output_to_console.c

The goal of this Simulink model is to cause the Simulink simulation to advance simulated
time forward at the same average rate as real wall-clock time.  Soft real time
is achieved by adding a delay to cause a match between the total elapsed simulation time and
total elapsed wall-clock time. Because of this there is very little or no drift over many
seconds. There will always be some jitter when attempting soft-real-time on a non-real-time
operating system like Windows, standard linux or MacOS. Useful clock resolution is around
10ms on Windows machines and better in Linux or MacOS. This limits Sleep() or usleep()'s
ability to pause reliably at much less.

The C-MEX S-function sfun_sleep.c has a user-specified sample time default of 0.01(s).
This is different from the base simulation sample time of h_fixed=0.001(s).

To run, double click the light blue box in upper left to initialize h_fixed=0.001(s).

This block is similar to the Pace block provided in both the Aerospace Blockset and in the
base Simulink library as of Matlab R2018a. However, it provides two additional
features that the Pace blocks and other user-contributed Soft Real Time blocks do not provide:

(1) Full source is provided and soft-real-time is achieved through a combination of C-mex
s-functions and Similink code.

(2) There is no software limit on how many instances can run at a time on a single computer
or within a single or multiple instances of Matlab open on a single computer.

This code was developed on R2016b and is tested on Windows 10 using the MinGW 64-bit Compiler.

---------------------------------------------------------------------------
To install and get running:
- unzip .zip file into an empty folder
- open Matlab and compile the three C-mex s-functions with:
    mex sfun_getSystemClockTimeval.c
    mex sfun_sleep.c
    mex sfun_sim_time_to_console.c
- open the Simulink model and press play: soft_real_time_block.slx

**-> double click the light blue box in upper left to
     initialize h_fixed=0.001(s).
---------------------------------------------------------------------------

Marc Compere
comperem@gmail.com
created : 28 May 2018
modified: 29 May 2018