

line_KT = 2537;
line_KpI = 2970;
line_KiI = 2980;
line_

N = 4;
K_T = zeros(N,1); % muN.m/A

for i=1:N
    strcmd = strcat(num2str(i),'.dcf');
    filetext = readline(strcmd);
    a = textscan(filetext, '%[^\n]%*[^\n]', 1, 'HeaderLines', line_KT-1);
    K_T(i) = str2double(regexp(string(a{1}),'\d*','Match'));
end

save Data\Exoskeleton\motorParamEst.mat K_T