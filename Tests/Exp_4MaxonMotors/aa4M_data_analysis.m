% tmp = p1;
% x = tmp.time;
% v = tmp.Data(:,4);
% xq = (0:0.001:x(end))';
% vq1 = interp1(x,v,xq);
% 
% TT = timetable(seconds(xq),vq1);
% 
% [pxx,f] = pspectrum(TT);
% 
% plot(f,abs(pxx))

%%
close all
load Data/Exoskeleton/DSMC_svars4M svars
% svars = [svar1 svar2 svar3 svar4];
figure
for i=1:4
    subplot(2,2,i)
    hold on
    plot(svars(i).Data(1,1),svars(i).Data(1,2),'ko','LineWidth',2,'MarkerSize',10)
    plot(svars(i).Data(:,1),svars(i).Data(:,2),'k--')
    plot(svars(i).Data(end,1),svars(i).Data(end,2),'kx','LineWidth',2,'MarkerSize',10)
    grid on
    % xlabel('\ddot x')
    hold off
end

%%
load Data/Exoskeleton/DSMC_svars1M
figure
for i=1:4
    subplot(2,2,i)
    x1 = xs{i}{1}.Values;
    x2 = xs{i}{2}.Values;
    hold on
    plot(x1.Data(1),x2.Data(1),'ko','LineWidth',2,'MarkerSize',10)
    plot(x1.Data,x2.Data,'k--')
    plot(x1.Data(end),x2.Data(end),'kx','LineWidth',2,'MarkerSize',10)
    grid on
    % xlabel('\ddot x')
    hold off
end

%%
load expsetup sm_posn

for i=1:4
    subplot(2,2,i)
    xvar = x1{i}{1}.Values;
    yvar = sm_posn.Data(:,i);
    
    hold on
    plot(x1.Data(1),x2.Data(1),'ko','LineWidth',2,'MarkerSize',10)
    plot(x1.Data,x2.Data,'k--')
    plot(x1.Data(end),x2.Data(end),'kx','LineWidth',2,'MarkerSize',10)
    grid on
    % xlabel('\ddot x')
    hold off
end
n = 0:15;
x = 0.84.^n;
y = circshift(x,5);
[c,lags] = xcorr(x,y);
stem(lags,c)

%% Report
close all
load exp4Msim
load expsetup sm_path1 t_f

k_gear = 10;
a = 1.6875e-4;
theta_f = 0;
theta_i = 0;
theta__dot_f = 0;
theta__dot_i = 0;
theta__ddot_i = 0;

theta = JointTrajFit(sm_path1.Time,a,t_f,theta_f,theta_i,theta__dot_f,theta__dot_i,theta__ddot_i);

sm_veltraj = diff(100*sm_path1.Data)/sm_path1.Time(2)*30/pi; % convert rad/s to rpm
sm_veltraj = [zeros(1,size(sm_veltraj,2)); sm_veltraj];

f1 = figure;
plot(sm_path1.Time, sm_veltraj)
legend('Left hip','Left knee','Right hip','Right knee')
title('Estimated Velocity Response')
xlabel('Time (s)'), ylabel('Motor speed (rpm)')
grid on, axis tight

Right leg
Motor1VelRef = simOut1.logsout{1}.Values.signal1/k_gear;
Motor1VelAct = simOut1.logsout{1}.Values.Speed;
Motor2VelRef = simOut1.logsout{2}.Values.signal1/k_gear;
Motor2VelAct = simOut1.logsout{2}.Values.Speed;

f2 = figure;
f2.Position = [10 10 550 550];

subplot(2,1,1), hold on
plot(Motor1VelRef,'k--')
plot(Motor1VelAct,'k-','LineWidth',1)
title('Double Motor Experiment - Velocity Response')
legend('Referenced','Actual')
xlabel(''), ylabel('Motor 1 speed (rpm)')
grid on, axis tight, hold off

subplot(2,1,2), hold on
plot(Motor2VelRef,'k--')
plot(Motor2VelAct,'k-','LineWidth',1)
legend('Referenced','Actual')
xlabel('Time (s)'), ylabel('Motor 2 speed (rpm)')
grid on, axis tight, hold off
Motor1Pos = simOut1.logsout{5}.Values;
Motor2Pos = simOut1.logsout{6}.Values;
Motor1Cur = simOut1.logsout{3}.Values;
Motor2Cur = simOut1.logsout{4}.Values;

f3 = figure;
f3.Position = [10 10 550 550];

subplot(2,1,1), hold on
p = plot(Motor1Pos,'Color','black');
p(1).LineStyle = '--';
p(2).LineWidth = 1;
title('Double Motor Experiment - Position Response')
legend('Referenced','Actual')
xlabel(''), ylabel('Joint 1 position (deg)')
grid on, axis tight, hold off

subplot(2,1,2), hold on
p = plot(Motor2Pos,'Color','black');
p(1).LineStyle = '--';
p(2).LineWidth = 1;
legend('Referenced','Actual')
xlabel('Time (s)'), ylabel('Joint 2 position (deg)')
grid on, axis tight, hold off
f4 = figure;
f4.Position = [10 10 550 550];

subplot(2,1,1), hold on
plot(Motor1Cur,'k-','LineWidth',1);
title('Double Motor Experiment - Current Response')
xlabel(''), ylabel('Motor 1 current (mA)')
grid on, axis tight, hold off

subplot(2,1,2), hold on
plot(Motor2Cur,'k-','LineWidth',1);
xlabel('Time (s)'), ylabel('Motor 2 current (mA)')
grid on, axis tight, hold off

Left leg
Motor3VelRef = simOut1.logsout{7}.Values.signal1/k_gear;
Motor3VelAct = simOut1.logsout{7}.Values.Speed;
Motor4VelRef = simOut1.logsout{8}.Values.signal1/k_gear;
Motor4VelAct = simOut1.logsout{8}.Values.Speed;

f5 = figure;
f5.Position = [10 10 550 550];

subplot(2,1,1), hold on
plot(Motor3VelRef,'k--')
plot(Motor3VelAct,'k-','LineWidth',1)
title('Double Motor Experiment - Velocity Response')
legend('Referenced','Actual')
xlabel(''), ylabel('Motor 3 speed (rpm)')
grid on, axis tight, hold off

subplot(2,1,2), hold on
plot(Motor4VelRef,'k--')
plot(Motor4VelAct,'k-','LineWidth',1)
legend('Referenced','Actual')
xlabel('Time (s)'), ylabel('Motor 4 speed (rpm)')
grid on, axis tight, hold off
Motor3Pos = simOut1.logsout{11}.Values;
Motor4Pos = simOut1.logsout{12}.Values;
Motor3Cur = simOut1.logsout{9}.Values;
Motor4Cur = simOut1.logsout{10}.Values;

f6 = figure;
f6.Position = [10 10 550 550];

subplot(2,1,1), hold on
p = plot(Motor3Pos,'Color','black');
p(1).LineStyle = '--';
p(2).LineWidth = 1;
title('Double Motor Experiment - Position Response')
legend('Referenced','Actual')
xlabel(''), ylabel('Joint 1 position (deg)')
grid on, axis tight, hold off

subplot(2,1,2), hold on
p = plot(Motor4Pos,'Color','black');
p(1).LineStyle = '--';
p(2).LineWidth = 1;
legend('Referenced','Actual')
xlabel('Time (s)'), ylabel('Joint 2 position (deg)')
grid on, axis tight, hold off
f7 = figure;
f7.Position = [10 10 550 550];

subplot(2,1,1), hold on
plot(Motor3Cur,'k-','LineWidth',1);
title('Double Motor Experiment - Current Response')
xlabel(''), ylabel('Motor 3 current (mA)')
grid on, axis tight, hold off

subplot(2,1,2), hold on
plot(Motor4Cur,'k-','LineWidth',1);
xlabel('Time (s)'), ylabel('Motor 4 current (mA)')
grid on, axis tight, hold off

Error
f8 = figure;
subplot(2,2,1)
plot(Motor1Pos.time,Motor1Pos.data(:,1)-Motor1Pos.data(:,2))
subplot(2,2,2)
plot(Motor2Pos.time,Motor2Pos.data(:,1)-Motor2Pos.data(:,2))
subplot(2,2,3)
plot(Motor3Pos.time,Motor3Pos.data(:,1)-Motor3Pos.data(:,2))
subplot(2,2,4)
plot(Motor4Pos.time,Motor4Pos.data(:,1)-Motor4Pos.data(:,2))

% filter()

% set(gcf,'DefaultFigureVisible','off');
% exportgraphics(f2,'Tests/Exp_4MaxonMotors/exp4Mfig_VelR.png','Resolution',600);
% exportgraphics(f3,'Tests/Exp_4MaxonMotors/exp4Mfig_PosR.png','Resolution',600);
% exportgraphics(f4,'Tests/Exp_4MaxonMotors/exp4Mfig_CurR.png','Resolution',600);
% exportgraphics(f5,'Tests/Exp_4MaxonMotors/exp4Mfig_VelL.png','Resolution',600);
% exportgraphics(f6,'Tests/Exp_4MaxonMotors/exp4Mfig_PosL.png','Resolution',600);
% exportgraphics(f7,'Tests/Exp_4MaxonMotors/exp4Mfig_CurL.png','Resolution',600);
% set(gcf,'DefaultFigureVisible','on');





% save Data/Exoskeleton/DSMCparams svars
%% save the models, clear everything
save Data/Exoskeleton/motorModel mModel
% clear

