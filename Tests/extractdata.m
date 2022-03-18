% According to reasearch, the patient's cadence is ~50 steps/min, with step
% length 0.5 m. The resulting velocity is 0.4167 m/s and each step takes
% 1.2s to complete. 

t_f = 15; % end time
opts = delimitedTextImportOptions("NumVariables",4, ...
    "Delimiter",',', ...
    "VariableNames",{'Left hip','Left knee','Right hip','Right knee'}, ...
    "VariableTypes",{'double','double','double','double'}, ...
    "PreserveVariableNames",true);
tabularData1 = readtable('Data\Gait\Gait_2Joints_01.csv',opts);
tabularData2 = readtable('Data\Gait\Gait_2Joints_02.csv',opts);
sm_t1 = linspace(0,t_f,size(tabularData1,1));
sm_traj1 = deg2rad(table2array(tabularData1));
sm_path1 = timeseries(sm_traj1,sm_t1);
sm_t2 = linspace(0,t_f,size(tabularData2,1));
sm_traj2 = deg2rad(table2array(tabularData2));
sm_path2 = timeseries(sm_traj2,sm_t2);

%%
n = 3; % repetition
dt = sm_path2.time(2);
pval = repmat(sm_path2.data,n,1);
for i=1:size(pval,2)
    pval(:,i) = smooth(pval(:,i),8);
    tmp = smooth(diff(pval(:,i))/dt,30,'loess');
    vval(:,i) = [tmp(1); tmp];
    tmp = smooth(diff(vval(:,i))/dt,20,'loess');
    aval(:,i) = [tmp(1); tmp];
end
timeval = 0:dt:(n*size(sm_path2.data,1)-1)*dt;
sm_posn = timeseries(pval,timeval);
sm_veln = timeseries(vval,timeval);
sm_accn = timeseries(aval,timeval);

% test smooth function
% plot(timeval, pval(:,1))
% plot(timeval, vval(:,1))
% plot(timeval, aval(:,1))

%%
save Tests/Exp_2MaxonMotors/expsetup sm_path1 sm_path2 t_f ...
    sm_posn sm_veln sm_accn
clear