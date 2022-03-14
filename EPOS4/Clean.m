clear
close all force
clc

cd EPOS4

% delete *.mexa64
% delete *.mexa32
% delete *.mexw32
% delete *.mexw64

delete *.dll
delete *.lib

cd ..\

try
    rmdir('dig','s')
catch
end