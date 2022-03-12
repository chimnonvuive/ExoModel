%%
Motor1 = Epos4(1,0);
Motor2 = Epos4(2,0);
Motor3 = Epos4(3,0);
Motor4 = Epos4(4,0);
%%
Motor1.ClearErrorState;
Motor2.ClearErrorState;
Motor3.ClearErrorState;
Motor4.ClearErrorState;

Motor1.EnableNode;
Motor2.EnableNode;
Motor3.EnableNode;
Motor4.EnableNode;
%%
load HomePos
Motor1.SetOperationMode(OperationModes.PPM)
Motor2.SetOperationMode(OperationModes.PPM)
Motor3.SetOperationMode(OperationModes.PPM)
Motor4.SetOperationMode(OperationModes.PPM)
T = timer('TimerFcn',@(~,~)disp('Fired.'),'StartDelay',5);
start(T)
Motor1.MotionInPosition(0,200,1000,true);
Motor2.MotionInPosition(0,200,1000,true);
Motor3.MotionInPosition(0,200,1000,true);
Motor4.MotionInPosition(0,200,1000,true);
% Motor1.MotionInPosition(qc1,200,1000,1);
wait(T)
%%
Motor1.DisableNode;
Motor2.DisableNode;
Motor3.DisableNode;
Motor4.DisableNode;

qc1 = Motor1.ActualPosition;
qc2 = Motor2.ActualPosition;
qc3 = Motor3.ActualPosition;
qc4 = Motor4.ActualPosition;

save Tests/HomePos qc1 qc2 qc3 qc4
%%
delete(Motor1)
delete(Motor2)
delete(Motor3)
delete(Motor4)
for i=262130:262200
    CloseCommunication(dec2hex(i));
end
clear Motor1 Motor2 Motor3 Motor4 qc1 qc2 qc3 qc4 i
