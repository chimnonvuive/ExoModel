function fitnessVals = GAUseSigmaScaling(fitnessVals, sigmaScalingCoeff, popSize)
    sigma=std(fitnessVals);
    if sigma~=0
        fitnessVals=1+(fitnessVals-mean(fitnessVals))/...
        (sigmaScalingCoeff*sigma);
        fitnessVals(fitnessVals<=0)=0;
    else
        fitnessVals=ones(1,popSize);
    end
end