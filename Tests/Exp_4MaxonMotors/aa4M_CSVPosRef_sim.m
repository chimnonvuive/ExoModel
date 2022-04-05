
% PID control but the model runs poorly
% load_system('tf4M_CSVposRef_ctrlDesign');
% load_system('exp4M_CSVPosRefCtrl');
% mdlWks = get_param('tf4M_CSVposRef_ctrlDesign','ModelWorkspace');
% Kp1 = getVariable(mdlWks,'Kp1');
% Kd1 = getVariable(mdlWks,'Kd1');
% N1 = getVariable(mdlWks,'N1');
% Kp2 = getVariable(mdlWks,'Kp2');
% Kd2 = getVariable(mdlWks,'Kd2');
% N2 = getVariable(mdlWks,'N2');
% Kp3 = getVariable(mdlWks,'Kp3');
% Kd3 = getVariable(mdlWks,'Kd3');
% N3 = getVariable(mdlWks,'N3');
% Kp4 = getVariable(mdlWks,'Kp4');
% Kd4 = getVariable(mdlWks,'Kd4');
% N4 = getVariable(mdlWks,'N4');


%%

load expsetup t_f sm_posn
load_system('exp4M_CSVPosRefCtrl');

modelName = 'exp4M_CSVPosRefCtrl';
paramNameValStruct.SimulationMode = 'accelerator';
% activeConfigObj = getActiveConfigSet(modelName);
% set_param(activeConfigObj,'StopTime',num2str(timeval(end)));
set_param(modelName, ...
    'Solver','FixedStepAuto', ...
    'StopTime',num2str(timeval(end)), ...
    'EnablePacing','on','PacingRate',1)
% set_param(modelName, ...
%         'Solver','FixedStepAuto', ...
%     'StopTime',num2str(7), ...
%     'EnablePacing','on','PacingRate',1)
% figure
% plot(timeval,[0; smooth(diff(sm_pathn.data(:,1)),20,'loess')], ...
%     timeval,[0; diff(sm_pathn.data(:,1))],'b-')

%%
simOut1 = sim(modelName,paramNameValStruct');
simOut1.getSimulationMetadata.TimingInfo

%%
save Tests/Exp_4MaxonMotors/exp4Msim simOut1
clear
