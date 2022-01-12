function binPop = GACrossover(firstParents,secondParents,popSize,len,probCrossover,...
                            crossoverType,useMaskRepositories,mutationOnlycrossmasks,maskReposFactor,uniformCrossmaskRepos)
    % create crossover masks
    switch crossoverType
        case 1
            masks=mutationOnlycrossmasks;
        case 2
            masks=false(popSize/2, len);
            temp=ceil(rand(popSize/2,1)*(len-1));
            for i=1:popSize/2
                masks(i,1:temp(i))=true;
            end
        otherwise
            if useMaskRepositories
                temp=floor(rand*len*(maskReposFactor-1));
                masks=uniformCrossmaskRepos(:,temp+1:temp+len);
            else
                masks=rand(popSize/2, len)<.5;
            end
    end

    % determine which parent pairs to leave uncrossed
    reprodIndices=rand(popSize/2,1)<1-probCrossover;
    masks(reprodIndices,:)=false;
    
    % implement crossover
    firstKids=firstParents;
    firstKids(masks)=secondParents(masks);
    secondKids=secondParents;
    secondKids(masks)=firstParents(masks);
    binPop=[firstKids; secondKids];
end

