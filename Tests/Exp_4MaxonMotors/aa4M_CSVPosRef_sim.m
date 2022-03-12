load_system('tf4M_CSVposRef_ctrlDesign');
load_system('exp4M_CSVPosRefCtrl');
mdlWks = get_param('tf4M_CSVposRef_ctrlDesign','ModelWorkspace');
kp1 = getVariable(mdlWks,'Kp1');
kd1 = getVariable(mdlWks,'Kd1');
n1 = getVariable(mdlWks,'N1');
kp2 = getVariable(mdlWks,'Kp2');
kd2 = getVariable(mdlWks,'Kd2');
n2 = getVariable(mdlWks,'N2');
kp3 = getVariable(mdlWks,'Kp3');
kd3 = getVariable(mdlWks,'Kd3');
n3 = getVariable(mdlWks,'N3');
kp4 = getVariable(mdlWks,'Kp4');
kd4 = getVariable(mdlWks,'Kd4');
n4 = getVariable(mdlWks,'N4');

mdlWks1 = get_param('exp4M_CSVPosRefCtrl','ModelWorkspace');
assignin(mdlWks1,'Kp1',kp1);
assignin(mdlWks1,'Kp2',kp2);
assignin(mdlWks1,'Kp3',kp3);
assignin(mdlWks1,'Kp4',kp4);
assignin(mdlWks1,'Kd1',kd1);
assignin(mdlWks1,'Kd2',kd2);
assignin(mdlWks1,'Kd3',kd3);
assignin(mdlWks1,'Kd4',kd4);
assignin(mdlWks1,'N1',n1);
assignin(mdlWks1,'N2',n2);
assignin(mdlWks1,'N3',n3);
assignin(mdlWks1,'N4',n4);

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
