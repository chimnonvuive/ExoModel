load DSMC_params_sdosession
v = struct([]);

%% Initialize control parameters
%
Cs = zeros(4,2);
qTs = zeros(1,4);
dels = zeros(1,4);
xiTs = zeros(1,4);
gamms = zeros(1,4);
etas = zeros(1,4);
vphis = zeros(1,4);

model = 'DZ_DSMC';
load_system(model)
activeConfigSet = getActiveConfigSet(model);
if strcmp(get_param(activeConfigSet,'Name'),'ModelReferencing')
    setActiveConfigSet(model,'ModelReferencing');
end

%% Optimize control parameters
%
warning('off')
for nodeID=1:4
    
    % initial values of control parameters. These values are guessed at
    % first based on research paper. After guessing, the parameters are
    % fine-tuned using real motors.
    C = [10 1];
    qT = 0.8;
    del = 0.9;
    xiT = 1;
    gamm = 5;
    N = 10;
    eta = 30;
    vphi = 1e-10;
    
    % Optimize control parameters
    % variable v stores optimized control parameters. The standard model
    % for optimization is DSMC_params. The conditions for optimzations are:
    % (1) angle boundary conditions between ± deg2rad(5)*100 or ± 8.73 rad
    % (2) if possible, minimize the angle error
    v{nodeID} = responseOptimization_DSMC_params(...
        SDOSessionData.Data.Workspace.LocalWorkspace.DesignVars);
    save_system('DSMC_params')
    
    % store optimized control parameters in array variables. These
    % variables are saved for implementing in real control algorithm
    Cs(nodeID,:) =   v{nodeID}(1,1).Value;
    dels(nodeID) =   v{nodeID}(2,1).Value;
    etas(nodeID) =   v{nodeID}(3,1).Value;
    gamms(nodeID)=   v{nodeID}(4,1).Value;
    qTs(nodeID)  =   v{nodeID}(5,1).Value;
    vphis(nodeID)=   v{nodeID}(6,1).Value;
    xiTs(nodeID) =   v{nodeID}(7,1).Value;
end
warning('on')

% struct variable for storing error values. The errors are later analyzed
% and plotted in many ways, such as: sliding variable (through time),
% phase plot, spectral analysis for chattering evaluation, etc. 
% xs = struct([]);

%% Recording
% Store error variables in xs for analysis purpose. The parameters were
% commented because this phase was finished
% xs{nodeID} = out.logsout;

%% Save parameters
% save Data\Exoskeleton\DSMC_svars1M.mat xs
save Data\Exoskeleton\DSMC_params Cs dels etas gamms qTs vphis xiTs
