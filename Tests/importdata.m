line_KT = 2537;
line_KpI = 2970;
line_KiI = 2980;
% line_

N = 4;
K_T = zeros(N,1); % muN.m/A

for i=1:N
    strcmd = strcat(num2str(i),'.dcf');
    filetext = readline(strcmd);
    a = textscan(filetext, '%[^\n]%*[^\n]', 1, 'HeaderLines', line_KT-1);
    K_T(i) = str2double(regexp(string(a{1}),'\d*','Match'));
end

save Data\Exoskeleton\motorParamEst.mat K_T

%%
x3001_5 = 69523; % torque constant, uNm/A
x30A0_1 = 369404; % current controller P gain, uV/A
x30A0_2 = 466187; % current controller I gain, uV/(A.ms)

% velocity controller
x30A2_1 = 775467; % P gain, uA.s/rad
x30A2_2 = 23963356; % I gain, uA/rad
x30A2_3 = 20858 /1e3; % FF velocity gain, uA.s/rad
x30A2_4 = 6274 /1e3; % FF acceleration gain, uA.s^2/rad
x30A2_5 = 600 /1e3; % filter cutoff freq, Hz

% velocity observer
x30A3_1 = 523; % position correction gain, o/oo
x30A3_2 = 331789; % velocity correction gain, mHz
x30A3_3 = 2875397; % load correction gain, uNm/rad
x30A3_4 = 152443; % friction, 0.001*uNm/rpm
x30A3_5 = 4378489; % inertia, 0.001*g.cm^2

J_SI = 1e-7*x30A3_5;
r_SI = 3e-5/pi*x30A3_4;
tfObs = tf(1,[J_SI r_SI]);
dtfObs = c2d(tfObs,0.4e-3);
tfObs1 = tf(1e-3*x3001_5,[J_SI r_SI]);
dtfObs1 = c2d(tfObs1,0.4e-3);