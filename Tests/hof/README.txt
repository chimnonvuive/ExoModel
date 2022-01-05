README.TXT
On this diskette are the major files related to the paper:
"Speed dependence of averaged EMG profiles in walking." 
By Hof, Elzinga, Grimmius and Halbertsma
(note: 'Halbertsma' is JPK Halbertsma, not JM Halbertsma, 
the coauthor of the paper with Nilsson, Thorstensson and Grillner.)

There are two subdirectories: ASCII and MFILES.

The ASCII directory contains in ascii format, TAB delimited:
allmeas.txt    containing the measured average profiles for 14 muscles at 5 speeds
fdata.txt       with the processed data: F0, F1,F2,D0,D1,D2,f0,f1
These two files can be downloaded into a spreadsheed program like EXCEL, etc.
No processing program could be supplied, unfortunately. 

The MFILES directory contains the data and some example programs in MatLab format,
 version 5.2 and higher. (Maybe earlier versions will do as well.)

allmeas.mat    containing the measured average profiles for 14 muscles at 5 speeds
fdata.mat       with the processed data: F0, F1,F2,D0,D1,D2,f0,f1

In order to use the following programs, these two mat files should be loaded into the Matlab workspace:
>>> load allmeas ; load fdata ;

fitplot.m	  a program to verify the claims made in the paper. Select a muscle
  and a speed and the result is a figure that shows the measured profile, 
  the estimate with f0/f1 and the estimate with F0F1F2. 
  In the command screen the r.m.s. errors are shown.

Plotmusc.m  plots the five profiles for the selected muscle. 
  This is a Matlab function that requires an array from allmeas as an  argument, e.g.
>>> plotmusc(TA)       shows a plot of Tibialis Anterior, something like Figure 3a.
winterfig.m  does a similar thing, but now the EMGs are filterd 
  with a 3 Hz critically damped filter, as recommended by DA Winter (see Discussion)
>>> winterfig(TA)    show the filtered plot of Tibialis Anterior, something like Figure 3b.

In general, by far the most convincing show is to execute the Matlab programs. 
If you don't have the program, maybe a colleague is willing to run it. 

