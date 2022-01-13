function [decPop,binPop,n,numVars,cl,cu,len] = GAInitPop(popSize,lb,ub,ndec)
    
    % generate initial parameters
    numTotal = (ub'-lb')/10^(-ndec) + 1;
    n = floor(log2(numTotal)) + 1;
    numVars = length(n);
    len = sum(n);
    cl = [1; cumsum(n(1:end-1))+1];
    cu = cumsum(n);
    
    % the population is a popSize by len matrix of randomly generated real
    % decimal values. The values are bounded according to conditions.
    decPop = zeros(popSize,numVars);
    binPop = zeros(popSize,len);
    for i=1:numVars
        decPop(:,i) = lb(i) + rand(popSize,1)*(ub(i)-lb(i));
    end
end
