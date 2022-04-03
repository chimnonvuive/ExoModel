function [Optimized_DesignVars, Info] = responseOptimization_DSMC_params(DesignVars)
%RESPONSEOPTIMIZATION_DSMC_PARAMS
%
% Solve a design optimization problem for the DSMC_params model.
%
% The function returns optimized parameter values, Optimized_DesignVars,
% and optimization termination information, Info.
%
% The input argument, DesignVars, defines the model parameters to optimize,
% if omitted the parameters specified in the function body are optimized.
%
% Modify the function to include or exclude new design requirements, or
% to change the optimization options.
%
% Auto-generated by SDOTOOL on 03-Apr-2022 21:06:58.
%

%% Open the model.
open_system('DSMC_params')

%% Specify Design Variables
%
% Specify model parameters as design variables to optimize.
if nargin < 1 || isempty(DesignVars)
    DesignVars = sdo.getParameterFromModel('DSMC_params',{'C','del','eta','gamm','qT','vphi','xiT'});
    DesignVars(1).Scale = [4;1];
    DesignVars(2).Minimum = 1e-05;
    DesignVars(2).Maximum = 0.99999;
    DesignVars(2).Scale = 0.25;
    DesignVars(3).Minimum = 1e-05;
    DesignVars(3).Maximum = 50;
    DesignVars(3).Scale = 0.001;
    DesignVars(4).Minimum = 1;
    DesignVars(4).Maximum = 100;
    DesignVars(4).Scale = 1;
    DesignVars(5).Minimum = 1e-05;
    DesignVars(5).Maximum = 0.99999;
    DesignVars(5).Scale = 0.5;
    DesignVars(6).Minimum = 1e-05;
    DesignVars(6).Maximum = 50;
    DesignVars(6).Scale = 0.5;
    DesignVars(7).Minimum = 1e-05;
    DesignVars(7).Maximum = 50;
    DesignVars(7).Scale = 0.5;
end

%% Specify Design Requirements
%
% Specify design requirements to satisfy during optimization.
Requirements = struct;
Requirements.posErrTracking = sdo.requirements.SignalTracking(...
    'ReferenceSignal', getData('posErrTracking_ReferenceSignal'), ...
    'RobustCost', 'on', ...
    'Weights', [1;1]);
Requirements.posUpperBound = sdo.requirements.SignalBound(...
    'BoundMagnitudes', [4.36332312998582 4.36332312998582], ...
    'BoundTimes', [0 30]);
Requirements.posLowerBound = sdo.requirements.SignalBound(...
    'BoundMagnitudes', [-4.36332312998582 -4.36332312998582], ...
    'BoundTimes', [0 30], ...
    'Type', '>=');

%% Simulation Definition
%
% Specify model signals to log during model simulation.
Simulator = sdo.SimulationTest('DSMC_params');

posErr_Info = Simulink.SimulationData.SignalLoggingInfo;
posErr_Info.BlockPath = 'DSMC_params/Visualization/Minus';
posErr_Info.LoggingInfo.LoggingName = 'posErr';
posErr_Info.LoggingInfo.NameMode = 1;

Simulator.LoggingInfo.Signals = posErr_Info;

%% Create Optimization Objective Function
%
% Create a function that is called at each optimization iteration
% to evaluate the design requirements.
%
% Use an anonymous function with one argument that calls DSMC_params_optFcn.
optimfcn = @(P) DSMC_params_optFcn(P,Simulator,Requirements);

%% Optimization Options
%
% Specify optimization options.
Options = sdo.OptimizeOptions;
Options.OptimizedModel = Simulator;

%% Optimize the Design
%
% Call sdo.optimize with the objective function handle, parameters to
% optimize, and options.
[Optimized_DesignVars,Info] = sdo.optimize(optimfcn,DesignVars,Options);

%% Update Model
%
% Update the model with the optimized parameter values.
sdo.setValueInModel('DSMC_params',Optimized_DesignVars);
end

function Vals = DSMC_params_optFcn(P,Simulator,Requirements)
%DSMC_PARAMS_OPTFCN
%
% Function called at each iteration of the optimization problem.
%
% The function is called with a set of parameter values, P, and returns
% the objective value and constraint violations, Vals, to the optimization
% solver.
%
% See the sdoExampleCostFunction function and sdo.optimize for a more
% detailed description of the function signature.
%

%% Model Evaluation

% Simulate the model.
Simulator.Parameters = P;
Simulator = sim(Simulator);

% Retrieve logged signal data.
SimLog = find(Simulator.LoggedData,get_param('DSMC_params','SignalLoggingName'));
posErr_Log = find(SimLog,'posErr');

% Evaluate the design requirements.
F_posErrTracking = evalRequirement(Requirements.posErrTracking,posErr_Log.Values);
Cleq_posUpperBound = evalRequirement(Requirements.posUpperBound,posErr_Log.Values);
Cleq_posLowerBound = evalRequirement(Requirements.posLowerBound,posErr_Log.Values);

%% Return Values.
%
% Collect the evaluated design requirement values in a structure to
% return to the optimization solver.
Vals.F = F_posErrTracking;
Vals.Cleq = [...
    Cleq_posUpperBound(:); ...
    Cleq_posLowerBound(:)];
end

function Data = getData(DataID)
%GETDATA
%
% Helper function to store data used by responseOptimization_DSMC_params.
%
% The input, DataID, specifies the name of the data to retrieve. The output,
% Data, contains the requested data.
%

switch DataID
    case 'posErrTracking_ReferenceSignal'
        t = [0;30];
        y = [0;0];
        Data = timeseries(y,t);
end
end
