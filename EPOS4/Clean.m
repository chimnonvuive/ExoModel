clear
close all force
clc

% delete *.mexa64
% delete *.mexa32
% delete *.mexw32
% delete *.mexw64

delete('EPOS4\*.dll')
delete('EPOS4\*.lib')

try
    rmdir('Data\Cache\sm_cache\*','s')
    rmdir('rtwgen_tlc','s')
    rmdir('dig','s')
catch
end