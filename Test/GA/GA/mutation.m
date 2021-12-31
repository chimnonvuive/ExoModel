% Written by Dr. Seyedali Mirjalili
% To watch videos on this algorithm, enrol to my courses with 95% discount using the following links: 

% ************************************************************************************************************************************************* 
%  A course on "Optimization Problems and Algorithms: how to understand, formulation, and solve optimization problems": 
%  https://www.udemy.com/optimisation/?couponCode=MATHWORKSREF
% ************************************************************************************************************************************************* 
%  "Introduction to Genetic Algorithms: Theory and Applications" 
%  https://www.udemy.com/geneticalgorithm/?couponCode=MATHWORKSREF
% ************************************************************************************************************************************************* 

function [child] = mutation(child, Pm)

Gene_no = length(child.Gene);

for k = 1: Gene_no
    R = rand();
    if R < Pm
        child.Gene(k) = ~ child.Gene(k);
    end
end

end