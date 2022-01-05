% onemax
function fitness=oneMax(pop)
popSize = size(pop,1);
t = linspace(0,10,popSize);
% fitness = 2*sin(2*t) - cos(5*t);
fitness = sum(pop,2)'/2;
