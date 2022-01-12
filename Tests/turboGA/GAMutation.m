function binPop = GAMutation(binPop, popSize, len, probMutation, ...
    useMaskRepositories, maskReposFactor, mutmaskRepos, ...
    useClamping, flagFreq, unflagFreq, flagPeriod, flaggedGens)
    
    if useMaskRepositories
        temp=floor(rand*len*(maskReposFactor-1));
        masks=mutmaskRepos(:,temp+1:temp+len);
    else
        masks=rand(popSize, len)<probMutation;
    end
    
    if useClamping
        
        bitFreqs=sum(binPop)/popSize;
        lociToFlag=abs(0.5-bitFreqs)>(0.5-flagFreq) & flaggedGens<0;
        flaggedGens(lociToFlag)=0;
        lociToUnflag=abs(0.5-bitFreqs)<0.5-unflagFreq ;
        flaggedGens(lociToUnflag)=-1;
        flaggedLoci=flaggedGens>=0;
        flaggedGens(flaggedLoci)=flaggedGens(flaggedLoci)+1;
        mutateLocus=flaggedGens<=flagPeriod;
        
        % change mask value
        masks(:,~mutateLocus)=false;
    end
    binPop=xor(binPop,masks);
end