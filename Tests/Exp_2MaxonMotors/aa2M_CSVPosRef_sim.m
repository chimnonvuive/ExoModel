load_system('tf2M_CSVposRef_ctrlDesign')
load_system('exp2M_CSVPosRefCtrl')
mdlWks = get_param('tf2M_CSVposRef_ctrlDesign','ModelWorkspace');
kp1 = getVariable(mdlWks,'Kp1');
ki1 = getVariable(mdlWks,'Ki1');
kp2 = getVariable(mdlWks,'Kp2');
ki2 = getVariable(mdlWks,'Ki2');

mdlWks1 = get_param('exp2M_CSVPosRefCtrl','ModelWorkspace');
assignin(mdlWks1,'Kp1',kp1)
assignin(mdlWks1,'Kp2',kp2)
assignin(mdlWks1,'Ki1',ki1)
assignin(mdlWks1,'Ki2',ki2)

load expsetup t_f sm_posn
paramNameValStruct.SimulationMode = 'accelerator';
paramNameValStruct.TimeOut        = t_f+10;
simOut1 = sim('exp2M_CSVPosRefCtrl',paramNameValStruct);
simOut1.getSimulationMetadata.TimingInfo
save Tests/Exp_2MaxonMotors/exp2Msim simOut1
clear
