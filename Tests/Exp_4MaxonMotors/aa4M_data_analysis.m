close all
load motorRawdata
load motorParamEst

%%
mModel = struct([]);
nx = 2;
isShowFig = true;
p = [p1 p2 p3 p4];
k = 2*pi/4096; % PPI to rad
k1 = pi/30;
opt = ssestOptions('InitialState','zero','EnforceStability',true);
opt1 = ssestOptions('InitialState','estimate','EnforceStability',true);

for i=1:size(K_T)
    % create iddata
    tmpdata = iddata(p(i).Data(:,3)*k1,p(i).Data(:,1)*k1,Ts,'Name', ...
        strcat('Motor ',num2str(i),' response'), ...
        'InputName',{'Time'},'InputUnit',{'s'}, ...
        'OutputName',{'Velocity'},'OutputUnit',{'rpm'});
    % continuous transfer function estimation with 1 pole and no zero
    mModel{i,1} = tfest(tmpdata,1,0); % m11.Report.Fit
    % continuous transfer function estimation with 2 poles and no zero
    mModel{i,2} = tfest(tmpdata,2,0); % m12.Report.Fit
    % state-space estimation
    % the real model is continuous but receive digital IO. Thus, the state-
    % space model is estimated in continuous time domain and then digitized
    % with sample time Ts.
    ssc_sys = ssest(tmpdata,nx, ...
        'form','canonical','DisturbanceModel','none',opt);
    mModel{i,3} = c2d(ssc_sys,Ts);
    
    tmpdata2 = iddata([p(i).Data(:,2)*k p(i).Data(:,3)*k1 p(i).Data(:,4)/1e3], ...
        p(i).Data(:,1)*k1,Ts,'Name', ...
        strcat('Motor ',num2str(i),' response'), ...
        'InputName',{'Time'},'InputUnit',{'s'}, ...
        'OutputName',{'Position','Speed','Current'}, ...
        'OutputUnit',{'rad','rad/s','A'});
    ssc_sys = ssest(tmpdata2,3, ...
        'form','canonical','DisturbanceModel','estimate',opt1);
    mModel{i,4} = c2d(ssc_sys,Ts);
    
    % comparison between the real raw data and estimated models
    if isShowFig
        figure;
        subplot(3,1,1)
        compare(tmpdata,mModel{i,1}) % first order model evaluation
        subplot(3,1,2)
        compare(tmpdata,mModel{i,2}) % second order model evaluation
        subplot(3,1,3)
        compare(tmpdata,mModel{i,3}) % state-space model evaluation
        figure;
        compare(tmpdata2,mModel{i,4})
    end
end

%% Remodel the motors
% For some reasons, the state space models of motor 3 and 4 don't match
% the real data. We have to convert second-order transfer function to 
% state-space

% for i=[3 4]
%     csys = canon(mModel{i,2},'companion');
%     mModel{i,4} = c2d(ss(csys.A',csys.C',csys.B',csys.D),Ts);
% end

%% save the models, clear everything
save Data/Exoskeleton/motorModel mModel
clear

% %% PID tuning
% sm_model = 'tf4M_CSVposRef_ctrlPIDDesign';
% load_system(sm_model)
% setActiveConfigSet(sm_model, 'systemIdentification');
% save_system(sm_model)
% open(sm_model)
