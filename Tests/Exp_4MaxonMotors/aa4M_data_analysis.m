close all
load motorRawdata
load motorParamEst

%%
mModel = struct([]);
nx = 2;
isShowFig = false;
p = [p1 p2 p3 p4];
k = 2*pi/4096; % PPI to rad
k1 = pi/30;
opt = ssestOptions('InitialState','zero','EnforceStability',true);
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

for i=1:size(K_T)
    % create iddata
    tmp1 = iddata(p(i).Data(:,3)*k1,p(i).Data(:,1)*k1,Ts,'Name', ...
        strcat('Motor ',num2str(i),' response'), ...
        'InputName',{'Time'},'InputUnit',{'s'}, ...
        'OutputName',{'Velocity'},'OutputUnit',{'rpm'});
    % continuous transfer function estimation with 1 pole and no zero
    mModel{i,1} = tfest(tmp1,1,0); % m11.Report.Fit
    % continuous transfer function estimation with 2 poles and no zero
    mModel{i,2} = tfest(tmp1,2,0); % m12.Report.Fit
    % state-space estimation
    % the real model is continuous but receive digital IO. Thus, the state-
    % space model is estimated in continuous time domain and then digitized
    % with sample time Ts.
    ssc_sys = ssest(tmp1,nx, ...
        'form','canonical','DisturbanceModel','none',opt);
    mModel{i,3} = c2d(ssc_sys,Ts);
    
    % dynamic model
    cur_data = smoothdata(p(i).Data(:,4)/1e3,'gaussian','SmoothingFactor',0.1);
    
    tmp2raw = iddata([p(i).Data(:,2)*k p(i).Data(:,3)*k1 p(i).Data(:,4)/1e3], ...
        p(i).Data(:,1)*k1,Ts,'Name', ...
        strcat('Motor ',num2str(i),' response'), ...
        'InputName',{'Time'},'InputUnit',{'s'}, ...
        'OutputName',{'Position','Speed','Current'}, ...
        'OutputUnit',{'rad','rad/s','A'});
    
    tmp2fil = iddata([p(i).Data(:,2)*k p(i).Data(:,3)*k1 cur_data], ...
        p(i).Data(:,1)*k1,Ts,'Name', ...
        strcat('Motor ',num2str(i),' response'), ...
        'InputName',{'Time'},'InputUnit',{'s'}, ...
        'OutputName',{'Position','Speed','Current'}, ...
        'OutputUnit',{'rad','rad/s','A'});
    ssc_sys = ssest(tmp2fil,3, ...
        'InputDelay',Ts, ...
        'form','canonical', ...
        'Feedthrough',1, ...
        'DisturbanceModel','none',opt1);
    disp('Fit percent to filtered data (SI units):')
    disp(['Position   ', 'Velocity   ', 'Current'])
    disp(ssc_sys.Report.Fit.FitPercent')
    mModel{i,4} = c2d(ssc_sys,Ts);
    
    % comparison between the real raw data and estimated models
    if isShowFig
        figure;
        subplot(3,1,1)
        compare(tmp1,mModel{i,1}) % first order model evaluation
        subplot(3,1,2)
        compare(tmp1,mModel{i,2}) % second order model evaluation
        subplot(3,1,3)
        compare(tmp1,mModel{i,3}) % state-space model evaluation
        figure;
        compare(tmp2raw,ssc_sys)
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
ssc_sys = ssest(tmp,1:20, ...
        'InputDelay',Ts, ...
        'form','canonical', ...
        'Feedthrough',1, ...
        'DisturbanceModel','none',opt1);
disp(ssc_sys.Report.Fit.FitPercent)
%     mModel{i,3} = c2d(ssc_sys,Ts);

%%
C = [20; 1];
ucirc = 0:0.001:2*pi;
xdim = cos(ucirc); ydim = sin(ucirc);
figure
for i=1:size(K_T)
    CLdyn = (eye(nx) - mModel{i,3}.B/(C'*mModel{i,3}.B)*C')*mModel{i,3}.A;
    eigvals = eig(CLdyn)
    subplot(2,2,i)
    p = plot(real(eigvals),imag(eigvals),'ko',xdim,ydim);
    p(2).LineWidth = 2;
    title(strcat('Motor node ',num2str(i)))
    xlabel('Re'), ylabel('Im')
    xlim([-1.1 1.1]), ylim([-1.1 1.1])
    axis equal, grid on
end
sgtitle('Digital System Stability via the z-Plane')

%% Remodel the motors
% For some reasons, the state space models of motor 3 and 4 don't match
% the real data. We have to convert second-order transfer function to 
% state-space

% for i=[3 4]
%     csys = canon(mModel{i,2},'companion');
%     mModel{i,4} = c2d(ss(csys.A',csys.C',csys.B',csys.D),Ts);
% end

%% save the models, clear everything
save Data/Exoskeleton/motorModel mModel mModelLumped
% clear

% %% PID tuning
% sm_model = 'tf4M_CSVposRef_ctrlPIDDesign';
% load_system(sm_model)
% setActiveConfigSet(sm_model, 'systemIdentification');
% save_system(sm_model)
% open(sm_model)
