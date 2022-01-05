%% Passing parameters to the objective function

gaDat3.Objfun='objfun_schwefel_p';
lb=[-500 -500];
ub=[500 500];
gaDat3.FieldD=[lb; ub];
% objective function parameters (in this example only used for wasting
% time), see objfun_schwefel_p.m for details.
p.n=1000000;
p.p=50000;
gaDat3.ObjfunPar=p;
% Execute GA
gaDat3=ga(gaDat3);
% Result are in
gaDat3.xmin
gaDat3.fxmin