function [sys,x0,str,ts] = control_strategy(t,x,u,flag)
    switch flag
        case 0     
            [sys,x0,str,ts]=mdlInitializeSizes; 
        case 3     
            sys=mdlOutputs(t,x,u); 
        case {2,4,9}     
            sys=[]; 
        otherwise
            error(['Unhandled flag = ',num2str(flag)]); 
    end
end

function [sys,x0,str,ts]=mdlInitializeSizes
sizes = simsizes; 
sizes.NumOutputs     = 2; 
sizes.NumInputs      = 10; 
sizes.DirFeedthrough = 1; 
sizes.NumSampleTimes = 0; 
sys = simsizes(sizes); 
x0  = []; 
str = []; 
ts  = []; 
end

function sys=mdlOutputs(t,x,u) 
q1_d=u(1);dq1_d=u(2);ddq1_d=u(3); 
q2_d=u(4);dq2_d=u(5);ddq2_d=u(6); 
q1=u(7);dq1=u(8); 
q2=u(9);dq2=u(10); 
dq=[dq1;dq2]; 

p=[6.7 3.4 3.0 0];  %Practical p 
ep=0.9*p;          %Estimated p 
alfa_p=ep(1); 
beta_p=ep(2); 
epc_p=ep(3); 
eta_p=ep(4); 

m1=1;l1=1; 
lc1=1/2;I1=1/12; 
g=-9.8; 
e1=m1*l1*lc1-I1-m1*l1^2; 
e2=g/l1; 

dq_d=[dq1_d,dq2_d]'; 
ddq_d=[ddq1_d,ddq2_d]';

e=[q1_d-q1,q2_d-q2]'; 
de=[dq1_d-dq1,dq2_d-dq2]';

H_p=[alfa_p+2*epc_p*cos(q2)+2*eta_p*sin(q2),beta_p+epc_p*cos(q2)+eta_p*sin(q2);      
    beta_p+epc_p*cos(q2)+eta_p*sin(q2),beta_p]; 
C_p=[(-2*epc_p*sin(q2)+2*eta_p*cos(q2))*dq2,(-epc_p*sin(q2)+eta_p*cos(q2))*dq2;      
    (epc_p*sin(q2)-eta_p*cos(q2))*dq1,0];
G_p=[epc_p*e2*cos(q1+q2)+eta_p*e2*sin(q1+q2)+(alfa_p-beta_p+e1)*e2*cos(q1);      
    epc_p*e2*cos(q1+q2)+eta_p*e2*sin(q1+q2)]; 

Fai=5*eye(2); 
s=de+Fai*e; 

delta=0.5; 
kk=1/delta; 
if abs(s)>delta     
    sats=sign(s); 
else
    sats=kk*s;   
end

dqr=dq_d+Fai*e; 
ddqr=ddq_d+Fai*de; 

Y=[ ddqr(1)+e2*cos(q1)   ddqr(2)-e2*cos(q1)    ...
    2*cos(q2)*ddqr(1)+cos(q2)*ddqr(2)-2*sin(q2)*dq2*dqr(1)-sin(q2)*dq2*dqr(2)+e2*cos(q1+q2) ...
    2*sin(q2)*ddqr(1)+sin(q2)*ddqr(2)+2*cos(q2)*dq2*dqr(1)+cos(q2)*dq2*dqr(2)+e2*sin(q1+q2);
    
    0                   ddqr(1)+ddqr(2) ...
    cos(q2)*ddqr(1)+sin(q2)*dq1*dqr(1)+e2*cos(q1+q2) ...
    sin(q2)*ddqr(1)-cos(q2)*dq1*dqr(1)+e2*sin(q1+q2)];
Y_max=abs(Y)+0.010; 

M=1; 
if M==1     
    ep_up=abs(p-ep)+0.50;      %Upper p-ep     
    k=Y_max*ep_up'; 
    %   tols=[sign(s(1)) 0;0 sign(s(2))]*k+s;     
    tols=[sats(1) 0;0 sats(2)]*k+s;     
    tol=H_p*ddqr+C_p*dqr+G_p+tols; 
elseif M==2     
    p_up=abs(p)+0.50;      %Upper p value     
    k_up=Y_max*p_up'; 
    %    tol=[sign(s(1)) 0;0 sign(s(2))]*k_up+s;     
    tol=[sats(1) 0;0 sats(2)]*k_up+s; 
end

sys(1)=tol(1); 
sys(2)=tol(2);
end