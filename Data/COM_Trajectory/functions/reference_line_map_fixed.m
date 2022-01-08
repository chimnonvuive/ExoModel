%Line Following Robot Project New
function path = reference_line_map_fixed(vr, tsamp)

    %xr,yr;                 reference coordinate
    %phr;                   angle of reference section
    %wr;                    angular velocity of reference section

    global n;          %number of sampling times
    dt = tsamp;             %sampling time, (s)

%     global n1 n2 n3 n4 n5 n6
    %coordinate of section points
    %starting point
    x0 = 1      ; y0 = 0.5;
    x1 = -1     ; y1 = 0.5;
    x2 = -1.5   ; y2 = 0;
    x3 = -1     ; y3 = -0.5;
    x4 = 1      ; y4 = -0.5;
    x5 = 1.5      ; y5 = 0;
    Rr = 0.5; %Rr is line radius

    %----1st segment-----------------------------------
    xr1(1) = x0;
    yr1(1) = y0;
    phr1(1) = pi;
    wr1(1) = 0;
    n1 = round(2 / (vr * dt)) + 1; %sampling linspace
    for i = 2 : n1
       xr1(i)  =    xr1(i - 1) - vr*dt;
       yr1(i)  =    yr1(i - 1);
       phr1(i) =    phr1(i - 1);
       wr1(i)  =    wr1(i - 1); 
    end

    % %----2nd segment---------------------------------
    xr2(1)  = x1;                 
    yr2(1) = y1;
    n2 = round(0.5 * pi * Rr / (vr * dt)) + 1;
    phr2(1) = phr1(end);               
    wr2(1) = vr/Rr;
    for i = 2 : n2
       xr2(i)  =    xr2(1) -  Rr * (sin(vr * (i-2) * dt / Rr));
       yr2(i)  =    yr2(1) - Rr * (1 - cos(vr * (i-2) * dt / Rr));
       phr2(i) =    phr2(i - 1) +  vr * dt / Rr;  
       wr2(i)  =    wr2(i - 1);
    end

    %---3rd segment--------------------------------------------
    xr3(1)  = x2;                
    yr3(1) = y2;
    n3 = round(0.5 * pi * Rr / (vr * dt)) + 1;
    phr3(1) = phr2(end);     
    wr3(1) = vr/Rr;
    for i = 2 : n3
       xr3(i)  =    xr3(1) + Rr * (1 - cos(vr * (i-2) * dt / Rr));
       yr3(i)  =    yr3(1) - Rr * (sin(vr * (i-2) * dt / Rr));
       phr3(i) =    phr3(i - 1) + vr * dt / Rr;
       wr3(i)  =    wr3(i - 1);
    end

    %----4th segment----------------------------------
    xr4(1) = x3;
    yr4(1) = y3;
    n4 = round(2 / (vr * dt)) + 1; %sampling linspace
    phr4(1) = phr3(end);
    wr4(1) = 0;
    for i = 2 : n4
       xr4(i)  =    xr4(i - 1) + vr*dt;
       yr4(i)  =    yr4(i - 1);
       phr4(i) =    phr4(i - 1);
       wr4(i)  =    wr4(i - 1); 
    end

    %---5th segment--------------------------------------------
    xr5(1)  = x4;                
    yr5(1) = y4;
    n5 = round(0.5 * pi * Rr / (vr * dt)) + 1;
    phr5(1) = phr4(end);      
    wr5(1) = vr/Rr;
    for i = 2 : n5
       xr5(i)  =    xr5(1) + Rr * (sin(vr * (i-2) * dt / Rr));
       yr5(i)  =    yr5(1) + Rr * (1 - cos(vr * (i-2) * dt / Rr));
       phr5(i) =    phr5(i - 1) + vr * dt / Rr;
       wr5(i)  =    wr5(i - 1);
    end

    %---6th segment--------------------------------------------
    xr6(1)  = x5;                 
    yr6(1) = y5;
    n6 = round(0.5 * pi * Rr / (vr * dt)) + 1;
    phr6(1) = phr5(end);     
    wr6(1) = vr/Rr;

    for i = 2 : n6
         xr6(i)  =    xr6(1) - Rr * (1-cos(vr * (i-2) * dt / Rr));
         yr6(i)  =    yr6(1) + Rr * (sin(vr * (i-2) * dt / Rr));
         phr6(i) =    phr6(i - 1) + vr * dt / Rr;
         wr6(i)  =    wr6(i - 1); 
    end

    %-------------------------------------------------
    xr  = [xr1,xr2,xr3,xr4,xr5,xr6];
    yr  = [yr1,yr2,yr3,yr4,yr5,yr6];
    phr = [phr1,phr2,phr3,phr4,phr5,phr6];
    wr  = [wr1,wr2,wr3,wr4,wr5,wr6];
%     X0  = [x0,x1,x2,x3,x4,x5];
%     Y0  = [y0,y1,y2,y3,y4,y5];
    n   = n1 + n2 + n3 + n4 + n5 + n6;
    path = [xr; yr; phr; wr];
end