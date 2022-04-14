close all force
clc

if ~isempty('EPOS4\sfun_maxon.mexw64')
    delete EPOS4\sfun_maxon.mexw64
end

% try1
    cd EPOS4
    mex sfun_maxon.c -DWINDOWS -I.\Epos4Windows -L.\Epos4Windows -lEposCmd64 -silent
    cd ..\
% catch
% end