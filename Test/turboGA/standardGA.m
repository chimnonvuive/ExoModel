%%%%%%%%%%%%%%%Standard genetic algorithm for function extremum%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%Initialization parameters%%%%%%%%%%%%%%%%%%
clear all; %Clear all variables
close all; %Clear picture
clc; %Clear screen
NP = 50; %Population size
L = 20; %Length of binary bit string
Pc = 0.8; %Crossover rate
Pm = 0.1; %Variation rate
G = 100; %Maximal genetic algebra
Xs = 10; %upper limit
Xx = 0; %lower limit
f = rand(NP,L); %The initial population is obtained randomly
%%%%%%%%%%%%%%%%%%Genetic algorithm loop%%%%%%%%%%%%%%%%
for k = 1:G
    %%%%%%%%%%Decode binary to decimal within domain%%%%%%%%%%
    for i = 1:NP
        U = f(i,:);
        m = 0;
        for j = 1:L
            m = U(j)*2^(j-1)+m;
        end
        x(i) = Xx+m*(Xs-Xx)/(2^L-1);
        Fit(i) = func1(x(i));
    end
    maxFit = max(Fit); %Maximum
    minFit = min(Fit); %minimum value
    rr = find(Fit==maxFit);
    fBest = f(rr(1,1),:); %The best individual in history
    xBest = x(rr(1,1));
    Fit = (Fit-minFit)/(maxFit-minFit); %Normalized fitness value
    %%%%%%%%%%%%%%Copy operation based on Roulette%%%%%%%%%%%%%
    sum_Fit = sum(Fit);
    fitvalue = Fit./sum_Fit;
    fitvalue = cumsum(fitvalue);
    ms = sort(rand(NP,1));
    fiti = 1;
    newi = 1;
    while newi <= NP
        if ms(newi) < fitvalue(fiti)
            nf(newi,:) = f(fiti,:);
            newi = newi+1;
        else
            fiti = fiti+1;
        end
    end
    %%%%%%%%%%%%%%%Crossover operation based on probability%%%%%%%%%%%%%
    for i = 1:2:NP
        p = rand;
        if p < Pc
            q = rand(1,L);
            for j = 1:L
                if q(j)==1
                    temp = nf(i+1,j);
                    nf(i+1,j) = nf(i,j);
                    nf(i,j) = temp;
                end
            end
        end
    end
    %%%%%%%%%%%%%Mutation operation based on probability%%%%%%%%%%%%%%
    i = 1;
    while i <= round(NP*Pc)
        h = randi([1,NP],1,1); %Randomly select a chromosome to be mutated
        for j = 1:round(L*Pc)
            g = randi([1,L],1,1); %Randomly select the number of genes to be mutated
            nf(h,g) =~ nf(h,g);
        end
        i = i+1;
    end
    f = nf;
    f(1,:) = fBest; %Keep the best individual in the new species group
    trace(k) = maxFit; %Optimal fitness of past dynasties
end
xBest; %Optimal individual
figure
plot(trace)
xlabel('Iterations')
ylabel('Objective function value')
title('Fitness evolution curve')
%%%%%%%%%%%%%%%%%%Fitness function%%%%%%%%%%%%%%%%%
function result = func1(x)
fit = x+10*sin(5*x)+7*cos(4*x);
result = fit;
end