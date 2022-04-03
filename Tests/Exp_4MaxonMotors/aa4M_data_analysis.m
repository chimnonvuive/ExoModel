close all
load motorRawdata
load motorParamEst

%%
mModel = struct([]);
nx = 2;
isShowFig = false;
p = [p1 p2 p3 p4];
derr = zeros(1,length(p));
k = 2*pi/4096; % PPI to rad
k1 = pi/30;
opt = ssestOptions('InitializeMethod','n4sid', ...
    'InitialState','zero', ...
    'N4Weight','SSARX', ...
    'Focus','prediction', ...
    'EnforceStability',true, ...``````````
    'SearchMethod','lm');
opt1 = ssestOptions('InitializeMethod','n4sid', ...
    'InitialState','zero', ...
    'N4Weight','SSARX', ...
    'Focus','prediction', ...
    'EnforceStability',true, ...
    'OutputWeight','noise', ...
    'SearchMethod','lm');
opt1.SearchOptions.Tolerance = 0.001;
opt1.SearchOptions.MaxIterations = 50;
opt1.SearchOptions.Advanced.LMStep = 5;
opt1.SearchOptions.Advanced.MaxBisections = 50;
opt2 = ssestOptions('InitializeMethod','n4sid', ...
    'InitialState','zero', ...
    'Focus','prediction', ...
    'EnforceStability',true);

for i=1:size(K_T)
    
    % create iddata
    tmp1raw = iddata(p(i).Data(:,3)*k1,p(i).Data(:,1)*k1,Ts,'Name', ...
        strcat('Motor ',num2str(i),' response'), ...
        'InputName',{'Time'},'InputUnit',{'s'}, ...
        'OutputName',{'Velocity'},'OutputUnit',{'rad/s'});
    % continuous transfer function estimation with 1 pole and no zero
    mModel{i,1} = tfest(tmp1raw,1,0); % m11.Report.Fit
    % continuous transfer function estimation with 2 poles and no zero
    mModel{i,2} = tfest(tmp1raw,2,0); % m12.Report.Fit
    
    
    % state-space estimation
    % the real model is continuous but receive digital IO. Thus, the state-
    % space model is estimated in continuous time domain and then digitized
    % with sample time Ts.
    tmp2raw = iddata([p(i).Data(:,2)*k p(i).Data(:,3)*k1], ...
        p(i).Data(:,1)*k1,Ts,'Name', ...
        strcat('Motor ',num2str(i),' response'), ...
        'InputName',{'Time'},'InputUnit',{'s'}, ...
        'OutputName',{'Position','Velocity'}, ...
        'OutputUnit',{'rad','rad/s'});
    mModel{i,5} = ssest(tmp2raw,nx, ...
        'form','canonical','DisturbanceModel','none',opt);
%     derr(i) = 5*100*pi/180/mModel{i,5}.B(1);
    mModel{i,3} = c2d(mModel{i,5},Ts);
    
    
    % dynamic model
    cur_data = smoothdata(p(i).Data(:,4)/1e3,'gaussian','SmoothingFactor',0.1);
    
    tmp3raw = iddata([p(i).Data(:,2)*k p(i).Data(:,3)*k1 p(i).Data(:,4)/1e3], ...
        p(i).Data(:,1)*k1,Ts,'Name', ...
        strcat('Motor ',num2str(i),' response'), ...
        'InputName',{'Time'},'InputUnit',{'s'}, ...
        'OutputName',{'Position','Speed','Current'}, ...
        'OutputUnit',{'rad','rad/s','A'});
    
    tmp3fil = iddata([p(i).Data(:,2)*k p(i).Data(:,3)*k1 cur_data], ...
        p(i).Data(:,1)*k1,Ts,'Name', ...
        strcat('Motor ',num2str(i),' response'), ...
        'InputName',{'Time'},'InputUnit',{'s'}, ...
        'OutputName',{'Position','Speed','Current'}, ...
        'OutputUnit',{'rad','rad/s','A'});
    ssc_sys = ssest(tmp3fil,3, ...
        'InputDelay',Ts, ...
        'form','canonical', ...
        'Feedthrough',1, ...
        'DisturbanceModel','none',opt1);
%     disp('Fit percent to filtered data (SI units):')
%     disp(['Position   ', 'Velocity   ', 'Current'])
%     disp(ssc_sys.Report.Fit.FitPercent')
    mModel{i,6} = ssc_sys;
    mModel{i,4} = c2d(ssc_sys,Ts);
    
    % comparison between the real raw data and estimated models
    if isShowFig
        figure;
        subplot(3,1,1)
        compare(tmp1raw,mModel{i,1}) % first order model evaluation
        subplot(3,1,2)
        compare(tmp1raw,mModel{i,2}) % second order model evaluation
        subplot(3,1,3)
        compare(tmp1raw,mModel{i,3}) % state-space model evaluation
        figure;
        compare(tmp3raw,ssc_sys)
    end
end

%% Attempt to lumped all motors as coupled system
ylumped = [p(1).Data(:,2)*k p(1).Data(:,3)*k1 ...
    p(2).Data(:,2)*k p(2).Data(:,3)*k1 ...
    p(3).Data(:,2)*k p(3).Data(:,3)*k1 ...
    p(4).Data(:,2)*k p(4).Data(:,3)*k1];
ulumped = [p(1).Data(:,1)*k1 ...
    p(2).Data(:,1)*k1 ...
    p(3).Data(:,1)*k1 ...
    p(4).Data(:,1)*k1];
yname = {'Position 1','Speed 1', ...
    'Position 2','Speed 2', ...
    'Position 3','Speed 3', ...
    'Position 4','Speed 4'};
yunit = {'rad','rpm', ...
    'rad','rpm', ...
    'rad','rpm', ...
    'rad','rpm'};
uname = {'Speed 1','Speed 2','Speed 3','Speed 4'};
uunit = {'rad/s','rad/s','rad/s','rad/s'};
tmp = iddata(ylumped,ulumped,Ts,'Name', ...
        'System response', ...
        'InputName',uname,'InputUnit',uunit, ...
        'OutputName',yname,'OutputUnit',yunit);
ssc_sys = ssest(tmp,8, ...
        'InputDelay',Ts, ...
        'form','canonical', ...
        'Feedthrough',1, ...
        'DisturbanceModel','none',opt1);
disp(ssc_sys.Report.Fit.FitPercent)
%     mModel{i,3} = c2d(ssc_sys,Ts);

%%
close all
C = [50 50 50 50
    1 1 1 1];
ucirc = 0:0.001:2*pi;
xdim = cos(ucirc); ydim = sin(ucirc);
figure
for i=1:size(K_T)
    CLdyn = (eye(nx) - mModel{i,3}.B/(C(:,i)'*mModel{i,3}.B)*C(:,i)')...
        *mModel{i,3}.A;
    eigvals = eig(CLdyn);
%     C(:,i)'*mModel{i,3}.B*abs(derr(i))
    subplot(2,2,i)
    p = plot(real(eigvals),imag(eigvals),'ko',xdim,ydim);
    p(2).LineWidth = 2;
    title(strcat('Motor node ',num2str(i)))
    xlabel('Re'), ylabel('Im')
    xlim([-1.1 1.1]), ylim([-1.1 1.1])
    axis equal, grid on
end
% sgtitle('Digital System Stability via the z-Plane')

%% Remodel the motors
% For some reasons, the state space models of motor 3 and 4 don't match
% the real data. We have to convert second-order transfer function to 
% state-space

% for i=[3 4]
%     csys = canon(mModel{i,2},'companion');
%     mModel{i,4} = c2d(ss(csys.A',csys.C',csys.B',csys.D),Ts);
% end

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
load Data/Exoskeleton/DSMCparams svars
% svars = [svar1 svar2 svar3 svar4];
figure
for i=1:4
    subplot(2,2,i)
    hold on
    plot(svars(i).Data(1,1),svars(i).Data(1,2),'ko','LineWidth',2)
    plot(svars(i).Data(:,1),svars(i).Data(:,2),'k--')
    plot(svars(i).Data(end,1),svars(i).Data(end,2),'kx','LineWidth',2)
    grid on
    % xlabel('\ddot x')
    hold off
end

% save Data/Exoskeleton/DSMCparams svars
%% save the models, clear everything
save Data/Exoskeleton/motorModel mModel
% clear

% %% PID tuning
% sm_model = 'tf4M_CSVposRef_ctrlPIDDesign';
% load_system(sm_model)
% setActiveConfigSet(sm_model, 'systemIdentification');
% save_system(sm_model)
% open(sm_model)
