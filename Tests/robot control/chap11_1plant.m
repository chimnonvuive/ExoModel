function [sys,x0,str,ts]=s_function(t,x,u,flag) 
    switch flag
        case 0
            [sys,x0,str,ts]=mdlInitializeSizes;
        case 1
            sys=mdlDerivatives(t,x,u);
        case 3
            sys=mdlOutputs(t,x,u);
        case {2, 4, 9 }     
            sys = []; 
        otherwise
            error(['Unhandled flag = ',num2str(flag)]); 
    end
end

function [sys,x0,str,ts]=mdlInitializeSizes 
    sizes = simsizes;
    sizes.NumContStates  = 4;
    sizes.NumDiscStates  = 0;
    sizes.NumOutputs     = 4;
    sizes.NumInputs      = 2;
    sizes.DirFeedthrough = 0; 
    sizes.NumSampleTimes = 0; 
    sys=simsizes(sizes); 
    x0=[0,0,0,0]; 
    str=[]; 
    ts=[];
end

function sys=mdlDerivatives(t,x,u)
    tol=[u(1);u(2)]; 
    q1=x(1); 
    dq1=x(2); 
    q2=x(3); 
    dq2=x(4); 

    p=[6.7 3.4 3.0 0]; 

    alfa=p(1); 
    beta=p(2); 
    epc=p(3); 
    eta=p(4); 

    m1=1;l1=1; 
    lc1=1/2;I1=1/12; 
    g=-9.8; 
    e1=m1*l1*lc1-I1-m1*l1^2; 
    e2=g/l1; 

    H=[alfa+2*epc*cos(q2)+2*eta*sin(q2)     beta+epc*cos(q2)+eta*sin(q2);
        beta+epc*cos(q2)+eta*sin(q2)        beta];
    C=[(-2*epc*sin(q2)+2*eta*cos(q2))*dq2   (-epc*sin(q2)+eta*cos(q2))*dq2;
        (epc*sin(q2)-eta*cos(q2))*dq1       0];
    G=[epc*e2*cos(q1+q2)+eta*e2*sin(q1+q2)+(alfa-beta+e1)*e2*cos(q1);
        epc*e2*cos(q1+q2)+eta*e2*sin(q1+q2)]; 
    %robot dynamic equation as 
    S=H\(tol-C*[dq1;dq2]-G);       

    sys(1)=x(2); 
    sys(2)=S(1); 
    sys(3)=x(4); 
    sys(4)=S(2); 
end

function sys=mdlOutputs(t,x,u) 
    sys(1)=x(1); 
    sys(2)=x(2); 
    sys(3)=x(3); 
    sys(4)=x(4);
end