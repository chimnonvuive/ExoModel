%% run the real model to gather data
Ts = 0.015;
paramNameValStruct.SimulationMode = 'accelerator';
% paramNameValStruct.TimeOut        = 10;
simOut = sim('exp4M_CSVposRef',paramNameValStruct);
simOut.getSimulationMetadata.TimingInfo
%%
p1 = simOut.p1;
p2 = simOut.p2;
p3 = simOut.p3;
p4 = simOut.p4;
%%
save Data/Exoskeleton/motorRawdata p1 p2 p3 p4 Ts