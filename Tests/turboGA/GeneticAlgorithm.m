% TurboGA is an experimental genetic algorithm based on SpeedyGA 
%
% Copyright (C) 2007, 2008, 2009  Keki Burjorjee
% Created and tested under Matlab 7 (R14). 

% TurboGA contains all the features of speedyGA v1.3. In addition it
% contains an implementation of a special mechanism called clamping which,
% according to a new theory about the workings of genetic algorithms (see
% http://www.cs.brandeis.edu/~kekib/dissertation.html ), should
% significantly improve the quality of the solutions returned.
% 
% One of the most effective ways to test this new theory is by studying the
% efficacy of clamping on a range of problems. That's where you come in. I
% propose a quid pro quo. In return for easy access to TurboGA, I ask that
% you report on the efficacy of clamping on the problem(s) that you apply
% this script to. Please email your comments to kekib@alum.vassar.edu 
%%

function GeneticAlgorithm(popSize,maxGens,probCrossover,probMutation,... % standard GA params
    useClamping,useSigmaScaling,useSUS,crossoverType,useMaskRepositories,... % set additional functions 
    flagFreq,unflagFreq,flagPeriod,... % clamping parameters
    sigmaScalingCoeff,... % sigma scaling parameters
    maskReposFactor,... % mask repositories parameters
    lb,ub,ndec,... % additional parameters
    Len1, Len2, Len3, h1, l1, l2, l3, l4, m1, m2, m3, m4, ... % exoskeleton parameters
    COMRef, thetas... % input parameters
    )
    
    % initialization
    numTotal = (ub-lb)/10^(-ndec) + 1;
    n = floor(log2(numTotal)) + 1;
    numVars = length(n);
    len = sum(n);
    
    % generate random decimal population
    realPop = zeros(popSize,numVars);
    for i=1:numVars
        realPop(:,i) = lb(i) + rand(:,1)*(ub(i)-lb(i));
    end
    
    %
    
    
    

    % clamping parameters
    flaggedGens=-ones(1,len);

    % crossover masks to use if crossoverType==0.
    mutationOnlycrossmasks=false(popSize,len);

    % pre-generate two “repositories” of random binary digits from which the  
    % the masks used in mutation and uniform crossover will be picked. 
    % maskReposFactor determines the size of these repositories.

    uniformCrossmaskRepos=rand(popSize/2,(len+1)*maskReposFactor)<0.5;
    mutmaskRepos=rand(popSize,(len+1)*maskReposFactor)<probMutation;

    % the population is a popSize by len matrix of randomly generated boolean
    % values
    pop=rand(popSize,len)<.5;
    binNum = zeros(popSize,len);
    
    for gen=0:maxGens
        
        % evaluate fitness function
        COM_est = COMTrajectory(Len1,Len2,Len3,h1,...
                           l1,l2,l3,l4,...
                           m1,m2,m3,m4,...
                           thetas(:,1), thetas(:,2), thetas(:,3), thetas(:,4));
        COMRefMat = repmat(COMRef',size(COM_est,1),1);
        fitnessVals = 1./(2*sqrt(dot(COM_est-COMRefMat,COM_est-COMRefMat,2)) + 1);
        
        % encode the real values into binary code
        for i=1:length(n)
            %     gene encoding, with lb = lower bound, ub = upper bound
            %     X_bin = dec2bin( (X-X_lb)*(2^bitlength-1)/(X_ub-X_lb) )
            binNum(:,cl(i):cu(i)) = de2bi(round((fitnessVals(:,i)-lb(i))*(2^(n(i))-1)/(ub(i)-lb(i))),'left-msb');
        end
        
        bitFreqs=sum(pop)/popSize;
        if useClamping
            lociToFlag=abs(0.5-bitFreqs)>(0.5-flagFreq) & flaggedGens<0;
            flaggedGens(lociToFlag)=0;
            lociToUnflag=abs(0.5-bitFreqs)<0.5-unflagFreq ;
            flaggedGens(lociToUnflag)=-1;
            flaggedLoci=flaggedGens>=0;
            flaggedGens(flaggedLoci)=flaggedGens(flaggedLoci)+1;
            mutateLocus=flaggedGens<=flagPeriod;        
        end


        % evaluate the fitness of the population. The vector of fitness values 
        % returned  must be of dimensions 1 x popSize.
        fitnessVals=oneMax(pop);

        % Conditionally perform sigma scaling 
        if useSigmaScaling
            sigma=std(fitnessVals);
            if sigma~=0
                fitnessVals=1+(fitnessVals-mean(fitnessVals))/...
                (sigmaScalingCoeff*sigma);
                fitnessVals(fitnessVals<=0)=0;
            else
                fitnessVals=ones(1,popSize);
            end
        end        

        % Normalize the fitness values and then create an array with the 
        % cumulative normalized fitness values (the last value in this array
        % will be 1)
        cumNormFitnessVals=cumsum(fitnessVals/sum(fitnessVals));

        % Use fitness proportional selection with Stochastic Universal or Roulette
        % Wheel Sampling to determine the indices of the parents 
        % of all crossover operations
        if useSUS
            markers=rand(1,1)+[1:popSize]/popSize;
            markers(markers>1)=markers(markers>1)-1;
        else
            markers=rand(1,popSize);
        end
        [~, parentIndices]=histc(markers,[0 cumNormFitnessVals]);
        parentIndices=parentIndices(randperm(popSize));    

        % deterimine the first parents of each mating pair
        firstParents=pop(parentIndices(1:popSize/2),:);
        % determine the second parents of each mating pair
        secondParents=pop(parentIndices(popSize/2+1:end),:);

        % create crossover masks
        if crossoverType==0
            masks=mutationOnlycrossmasks;
        elseif crossoverType==1
            masks=false(popSize/2, len);
            temp=ceil(rand(popSize/2,1)*(len-1));
            for i=1:popSize/2
                masks(i,1:temp(i))=true;
            end
        elseif crossoverType==2
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
        pop=[firstKids; secondKids];

        % implement mutation
        if useMaskRepositories
            temp=floor(rand*len*(maskReposFactor-1));
            masks=mutmaskRepos(:,temp+1:temp+len);
        else
            masks=rand(popSize, len)<probMutation;
        end
        if useClamping
            masks(:,~mutateLocus)=false;
        end
        pop=xor(pop,masks);    
    end
end 




% 
%     %%
% %     len=640;                    % The length of the genomes
% %     popSize=50;               % The size of the population
% %     maxGens=1000;                 % The maximum number of generations allowed in a run
% %     probCrossover=1;           % The probability of crossing over. 
% %     probMutation=0.003;        % The mutation probability (per bit). 
%                                % If clampingFlag=1, probMutation should not be
%                                % dependent on len, the length of the genomes.
%                                %
%     useSigmaScaling=1;        % Sigma Scaling is described on pg 168 of M. Mitchell's
%                                % GA book. It often improves GA performance.
%     sigmaScalingCoeff=1;       % Higher values => less fitness pressure 
% 
%     % SUSFlag = 1;
%     % clampingFlag = 1;
%     % crossoverType = 2;
%     % useMaskRepositoriesFlag = 1;
% 
%     % clamping parameters   
%     flagFreq=0.01;
%     unflagFreq=0.1;
%     flagPeriod=200;
% 
%     flaggedGens=-ones(1,len);
% 
% 
%     % crossover masks to use if crossoverType==0.
%     mutationOnlycrossmasks=false(popSize,len);
% 
%     % pre-generate two “repositories” of random binary digits from which the  
%     % the masks used in mutation and uniform crossover will be picked. 
%     % maskReposFactor determines the size of these repositories.
% 
%     maskReposFactor=5;
%     uniformCrossmaskRepos=rand(popSize/2,(len+1)*maskReposFactor)<0.5;
%     mutmaskRepos=rand(popSize,(len+1)*maskReposFactor)<probMutation;
% 
%     % % preallocate vectors for recording the average and maximum fitness in each
%     % % generation
%     % avgFitnessHist=zeros(1,maxGens+1);
%     % maxFitnessHist=zeros(1,maxGens+1);
%     % 
%     %     
%     % eliteIndiv = [10 3 1];
%     % eliteFitness = -realmax;
% 
% 
%     % the population is a popSize by len matrix of randomly generated boolean
%     % values
%     pop = rand(popSize,len) < .5;
% 
%     for gen=0:maxGens
% 
%         % evaluate the fitness of the population. The vector of fitness values 
%         % returned  must be of dimensions 1 x popSize.
%         fitnessVals=oneMax(pop);
% 
%     %     [maxFitnessHist(1,gen+1),maxIndex]=max(fitnessVals);    
%     %     avgFitnessHist(1,gen+1)=mean(fitnessVals);
%     %     if eliteFitness<maxFitnessHist(gen+1)
%     %         eliteFitness=maxFitnessHist(gen+1);
%     %         eliteIndiv=pop(maxIndex,:);
%     %     end    
% 
%         % Conditionally perform sigma scaling 
%         if useSigmaScaling
%             sigma=std(fitnessVals);
%             if sigma~=0
%                 fitnessVals=1+(fitnessVals-mean(fitnessVals))/...
%                 (sigmaScalingCoeff*sigma);
%                 fitnessVals(fitnessVals<=0)=0;
%             else
%                 fitnessVals=ones(1,popSize);
%             end
%         end        
% 
% 
%         % Normalize the fitness values and then create an array with the 
%         % cumulative normalized fitness values (the last value in this array
%         % will be 1)
%         cumNormFitnessVals=cumsum(fitnessVals/sum(fitnessVals))
% 
%         % Use fitness proportional selection with Stochastic Universal or Roulette
%         % Wheel Sampling to determine the indices of the parents 
%         % of all crossover operations
% 
%         markers=rand+[1:popSize]/popSize;
%         markers(markers>1)=markers(markers>1)-1;
% 
%         [~, parentIndices]=histc(markers,[0 cumNormFitnessVals]);
%         parentIndices=parentIndices(randperm(popSize));    
% 
%         % deterimine the first parents of each mating pair
%         firstParents=pop(parentIndices(1:popSize/2),:);
%         % determine the second parents of each mating pair
%         secondParents=pop(parentIndices(popSize/2+1:end),:);
% 
%         % create crossover masks
%         temp=floor(rand*len*(maskReposFactor-1));
%         masks=uniformCrossmaskRepos(:,temp+1:temp+len);
% 
%         % determine which parent pairs to leave uncrossed
%         reprodIndices=rand(popSize/2,1)<1-probCrossover;
%         masks(reprodIndices,:)=false;
% 
%         % implement crossover
%         firstKids=firstParents;
%         firstKids(masks)=secondParents(masks);
%         secondKids=secondParents;
%         secondKids(masks)=firstParents(masks);
%         pop=[firstKids; secondKids];
% 
%         % implement mutation
%         bitFreqs=sum(pop)/popSize;
%         lociToFlag=abs(0.5-bitFreqs)>(0.5-flagFreq) & flaggedGens<0;
%         flaggedGens(lociToFlag)=0;
%         lociToUnflag=abs(0.5-bitFreqs)<0.5-unflagFreq ;
%         flaggedGens(lociToUnflag)=-1;
%         flaggedLoci=flaggedGens>=0;
%         flaggedGens(flaggedLoci)=flaggedGens(flaggedLoci)+1;
%         mutateLocus=flaggedGens<=flagPeriod; 
% 
%         temp=floor(rand*len*(maskReposFactor-1));
%         masks=mutmaskRepos(:,temp+1:temp+len);
% 
%         masks(:,~mutateLocus)=false;
%         pop=xor(pop,masks);    
%     end
