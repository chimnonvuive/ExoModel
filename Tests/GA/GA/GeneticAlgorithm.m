% Written by Dr. Seyedali Mirjalili
% To watch videos on this algorithm, enrol to my courses with 95% discount using the following links: 

% ************************************************************************************************************************************************* 
%  A course on "Optimization Problems and Algorithms: how to understand, formulation, and solve optimization problems": 
%  https://www.udemy.com/optimisation/?couponCode=MATHWORKSREF
% ************************************************************************************************************************************************* 
%  "Introduction to Genetic Algorithms: Theory and Applications" 
%  https://www.udemy.com/geneticalgorithm/?couponCode=MATHWORKSREF
% ************************************************************************************************************************************************* 

function [BestChrom]  = GeneticAlgorithm (M , N, MaxGen , Pc, Pm , Er , obj, visuailzation)

cgcurve = zeros(1 , MaxGen);

%%  Initialization
[ population ] = initialization(M, N);
for i = 1 : M
    population.Chromosomes(i).fitness = obj( population.Chromosomes(i).Gene(:) );
end

g = 1;
disp(['Generation #' , num2str(g)]);
[max_val , indx] = sort([ population.Chromosomes(:).fitness ] , 'descend');
cgcurve(g) = population.Chromosomes(indx(1)).fitness;

%% Main loop
for g = 2 : MaxGen
    disp(['Generation #' , num2str(g)]);
    % Calcualte the fitness values
    for i = 1 : M
        population.Chromosomes(i).fitness = Sphere( population.Chromosomes(i).Gene(:) );
    end
    
    for k = 1: 2: M
        % Selection
        [ parent1, parent2] = selection(population);
        
        % Crossover
        [child1 , child2] = crossover(parent1 , parent2, Pc, 'single');
        
        % Mutation
        [child1] = mutation(child1, Pm);
        [child2] = mutation(child2, Pm);
        
        newPopulation.Chromosomes(k).Gene = child1.Gene;
        newPopulation.Chromosomes(k+1).Gene = child2.Gene;
    end
    
    for i = 1 : M
        newPopulation.Chromosomes(i).fitness = obj( newPopulation.Chromosomes(i).Gene(:) );
    end
    % Elitism
    [ newPopulation ] = elitism(population, newPopulation, Er);
    
    cgcurve(g) = newPopulation.Chromosomes(1).fitness;
    
    population = newPopulation; % replace the previous population with the newly made
end

   
BestChrom.Gene    = population.Chromosomes(1).Gene;
BestChrom.Fitness = population.Chromosomes(1).fitness;


if visuailzation == 1
    plot( 1 : MaxGen , cgcurve);
    xlabel('Generation');
    ylabel('Fitness of the best elite')
end


end