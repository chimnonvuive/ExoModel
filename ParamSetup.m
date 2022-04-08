%% Testing
% Model DSMC_params was manually simulated and analyzed. The real motor was
% used for validation of control algorithm. The errors stored in variable
% xs were also recorded for analysis purposes. The parameters were
% commented because this phase was finished 
load DSMC_params
load motorModel

Ts = 0.015;
nodeID = 4;
N = 10;
%%
Phi = single(mModel{nodeID,3}.A);
Gam = single(mModel{nodeID,3}.B);
C   = single(Cs(nodeID,:));
del = single(dels(nodeID));
eta = single(etas(nodeID));
gamm= single(gamms(nodeID));
qT  = single(qTs(nodeID));
vphi= single(vphis(nodeID));
xiT = single(xiTs(nodeID));
N = 10;
%%
i1 = timeseries(single([sm_posn.data(:,nodeID)*100, sm_veln.data(:,nodeID)*100]),sm_posn.time);
i2 = timeseries(single(zeros(length(sm_posn.time),1)),sm_posn.time);
% title(['Motor ',num2str(i)])
%     xlabel('e_1 (deg)'), ylabel('e_2 (rpm)')
    
