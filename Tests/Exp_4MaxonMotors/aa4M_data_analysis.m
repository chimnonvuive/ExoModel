close all
load motorRawdata
load motorParamEst

%%
mModel = struct([]);
nx = 2;
isShowFig = false;
p = [p1 p2 p3 p4];

for i=1:size(K_T)
    % create iddata
    tmpdata = iddata(p(i).Data(:,2),p(i).Data(:,1),Ts,'Name', ...
        strcat('Motor ',num2str(i),' response'), ...
        'InputName',{'Time'},'InputUnit',{'s'}, ...
        'OutputName',{'Position'},'OutputUnit',{'rad'});
    % continuous transfer function estimation with 1 pole and no zero
    mModel{i,1} = tfest(tmpdata,1,0); % m11.Report.Fit
    % continuous transfer function estimation with 2 poles and no zero
    mModel{i,2} = tfest(tmpdata,2,0); % m12.Report.Fit
    % state-space estimation
    % the real model is continuous but receive digital IO. Thus, the state-
    % space model is estimated in continuous time domain and then digitized
    % with sample time Ts.
    opt = ssestOptions('InitialState','backcast','EnforceStability',true);
    ssc_sys = ssest(tmpdata,nx, ...
        'form','canonical','DisturbanceModel','none',opt);
    mModel{i,3} = c2d(ssc_sys,Ts);
    
    % comparison between the real raw data and estimated models
    if isShowFig
        figure;
        subplot(3,1,1)
        compare(tmpdata,mModel{i,1}) % first order model evaluation
        subplot(3,1,2)
        compare(tmpdata,mModel{i,2}) % second order model evaluation
        subplot(3,1,3)
        compare(tmpdata,mModel{i,3}) % state-space model evaluation
    end
end

%% save the models, clear everything and tune PID parameters
save Data/Exoskeleton/motorModel mModel
clear

sm_model = 'tf4M_CSVposRef_ctrlPIDDesign';
load_system(sm_model)
setActiveConfigSet(sm_model, 'systemIdentification');
save_system(sm_model)
open(sm_model)
