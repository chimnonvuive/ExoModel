%fitplot
% plots fit for muscle m and speed v
% red: measured
% blue: from F0, F1, F2
% green: from f0 and f1
%load the following *.mat files first:
%load allmeas
%load fdata
legl = 0.985; % average leg length for subject population
p = [1:100,1:50];
[ num2str((1:14)'),allmusc ]
m = input('Which muscle? Input number 1:14  ');
vs = [ 0.75 , 1 , 1.25 , 1.5 , 1.75];
vi = input('Which of these speeds? (1..5)  ');
disp([num2str(vs(vi)),'  m/s']);
v = vs(vi)/sqrt(9.81*legl);
disp(['normalized speed:  ',num2str(v)]);
estf = f0(:,m) + (v-0.16)*f1(:,m);
estm = F0*D0(m,:)' + (F1*D1(m,:)').*(v-0.16) + (F2*D2(m)').*(v-0.16).^2;
measm = eval([allmu(m,:),'(:,',num2str(vi),')']);
plot(1:150,measm(p),'r',1:150,estm(p),'b',1:150,estf(p),'g')
%line([0 150],[0 0]);
legend('measured','from F_0,F_1,F_2','from f_0, f_1');
xlabel('% of stride')
ylabel('EMG (µV)');
title([allmusc(m,:),'  norm. speed ',num2str(v)]);
disp(['r.m.s. error meas - F0F1:  ',num2str(sqrt(sum((measm-estm).^2)/100)),'  µV']);
disp(['r.m.s. error meas - f0f1:  ',num2str(sqrt(sum((measm-estf).^2)/100)),'  µV']);