function [avgFitnessHist, maxFitnessHist, eliteFitness, eliteIndiv] = ...
    GAEliteCandidate(decPop, fitnessVals, gen, ...
                avgFitnessHist, maxFitnessHist, eliteFitness, eliteIndiv)
[maxFitnessHist(1,gen+1),maxIndex]=max(fitnessVals);    
    avgFitnessHist(1,gen+1)=mean(fitnessVals);
    if eliteFitness<maxFitnessHist(gen+1)
        eliteFitness=maxFitnessHist(gen+1);
        eliteIndiv=decPop(maxIndex,:);
    end
end