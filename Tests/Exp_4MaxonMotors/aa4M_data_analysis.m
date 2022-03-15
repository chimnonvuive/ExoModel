close all
load motorRawdata
load motorParamEst


%%
model = struct([]);
nx = 2;
isShowFig = false;
p = [p1 p2 p3 p4];

for i=1:size(K_T)
    tmpdata = iddata(p(i).Data(:,2),p(i).Data(:,1),Ts,'Name', ...
        strcat('Motor ',num2str(i),' response'), ...
        'InputName',{'Time'},'InputUnit',{'s'}, ...
        'OutputName',{'Position'},'OutputUnit',{'rad'});
    % transfer function estimation with 1 pole and no zero
    model{i,1} = tfest(tmpdata,1,0); % m11.Report.Fit
    % transfer function estimation with 2 poles and no zero
    model{i,2} = tfest(tmpdata,2,0); % m12.Report.Fit
    % state-space estimation
    opt = ssestOptions('InitialState','zero','EnforceStability',true);
    model{i,3} = ssest(tmpdata,nx,'Ts',tmpdata.Ts, ...
        'form','canonical','DisturbanceModel','none',opt);
    
    % plot the differences
    if isShowFig
        figure;
        subplot(3,1,1)
        compare(tmpdata,model{i,1}) % first order model evaluation
        subplot(3,1,2)
        compare(tmpdata,model{i,2}) % second order model evaluation
        subplot(3,1,3)
        compare(tmpdata,model{i,3}) % state-space model evaluation
    end
end

%%

save Data/Exoskeleton/motorModel model
clear

sm_model = 'tf4M_CSVposRef_ctrlPIDDesign';
load_system(sm_model)
setActiveConfigSet(sm_model, 'systemIdentification');
save_system(sm_model)
open(sm_model)
