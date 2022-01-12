function [firstParents,secondParents] = GASelection(binPop, fitnessVals, popSize, ...
    useSigmaScaling, sigmaScalingCoeff, useSUS)

    %% Conditionally perform sigma scaling 
    if useSigmaScaling
        fitnessVals = GAUseSigmaScaling(fitnessVals, sigmaScalingCoeff, popSize);
    end        

    % Normalize the fitness values and then create an array with the 
    % cumulative normalized fitness values (the last value in this array
    % will be 1)
    cumNormFitnessVals=cumsum(fitnessVals/sum(fitnessVals));

    %% Use fitness proportional selection with Stochastic Universal or Roulette
    % Wheel Sampling to determine the indices of the parents 
    % of all crossover operations
    if useSUS
        markers = rand+(1:popSize)/popSize;
        markers(markers>1) = markers(markers>1)-1;
    else
        markers = rand(1,popSize);
    end
    [~, parentIndices]=histc(markers,[0 cumNormFitnessVals]);
    parentIndices=parentIndices(randperm(popSize));    

    % deterimine the first parents of each mating pair
    firstParents=binPop(parentIndices(1:popSize/2),:);
    % determine the second parents of each mating pair
    secondParents=binPop(parentIndices(popSize/2+1:end),:);
end