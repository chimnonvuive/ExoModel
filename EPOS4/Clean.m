clear
close all force
clc

cd EPOS4

delete *.mexa64
delete *.mexa32
delete *.mexw32
delete *.mexw64

delete *.dll
delete *.lib

cd ..\

delete *.mexa64
delete *.mexa32
delete *.mexw32
delete *.mexw64
delete *.slxc
delete *.original
delete *.autosave

% delete Data\Cache\*.mexa64
% delete Data\Cache\*.mexa32
% delete Data\Cache\*.mexw32
% delete Data\Cache\*.mexw64

try
    rmdir('dig','s')
    rmdir('Data\Cache\*','s')
    rmdir('Data\Cache\slprj','s')
catch
end

% listedFolders = dir('*{*');
% for i=1:length(listedFolders)
%     try
%         rmdir(listedFolders(i).name, 's');
%     catch
%     end
% end
