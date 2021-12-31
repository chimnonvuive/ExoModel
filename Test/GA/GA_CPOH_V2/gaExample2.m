%% Defining other parameters MAXGEN, NIND and indini

gaDat2.Objfun='objfun_schwefel';
lb=[-500 -500];
ub=[500 500];
gaDat2.FieldD=[lb; ub];
gaDat2.MAXGEN=50;
gaDat2.NIND=400; % increasing number individuals produce better solution 
                 % but higher computational cost

                 
gaDat2.indini= [0,0;
                10,10;
                -10,-10];  % insert 3 individuals in the first population           
% Execute GA
gaDat2=ga(gaDat2);
% Result are in
gaDat2.xmin
gaDat2.fxmin