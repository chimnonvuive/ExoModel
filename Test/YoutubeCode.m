clear all
close all
clc
%------------
p = 100; % population size
c = 30; % number of pairs of chromosomes to be crossovered
m = 30; % number chromosomes to be mutated
tg = 250; % total number of generations
%------------
figure
hold on
P = population(p);
K = 0;
[x1, y1] = size(P);
P1 = 0;
for i=1:tg

function Y = population(n)
    % n = population size
    
%     It is noted that the number of bits to represent the variables
%     in binary numbers depends on tghe required accuracy (the number
%     of digits after comma)

%     General formula: 2^(m-1) < (upper bound - lower bound)*10^p < 2^m - 1
%     In this case: p = 5, m = 20.

%     We have 2 variables (x and y), so we need 40 bits in total for 
%     binary encoding
    Y = round(rand(n,40));

end

function Y=crossover(P,n)
%     P = population
%     n = number of pairs of chromosomes to be crossovered
    [x1, y1] = size(P);
    Z = zeros(2*n,y1);
    for i = 1:n
        r1 = randi(x1,1,2);
        while r1(1) == r1(2)
            r1 = randi(x1,1,2);
        end
        A1 = P(r1(1),:); % parent 1
        A2 = P(r1(2),:); % parent 2
        r2 = 1+randi(y1-1); % random cutting point
        B1 = A1(1,r2:y1);
        A1(1,r2:y1) = A2(1,r2:40);
        A2(1,r2:40) = B1;
        Z(2*i-1,:) = A1; % offspring 1
        Z(2*i,:) = A2; % offspring 2
    end
    Y = Z;
end

function Y=mutation(P,n)
%     P = population
%     n = chromosomes to be mutated
    [x1, y1] = size(P);
    Z = zeros(n,y1);
    for i = 1:n
        r1 = randi(x1);
        A1 = P(r1,:); % random parent
        r2 = randi(y1);
        if A1(1,r2) == 1
            A1(1,r2) = 0; % flick the bit
        else
            A1(1,r2) = 1;
        end
        Z(i,:) = A1; 
    end
    Y = Z;
end

function Y=evaluation(P)
    [x1, y1] = size(P);
    H = zeros(1, x1);
    for i=1:x1
        A = bi2de(P(i,1:y1/2));
        x = -3+A*(3-(-3))/(2^(y1/2)-1);
        B = bi2de(P(i,y1/2+1:y1));
        y = -3+B*(3-(-3))/(2^(y1/2)-1);
        H(1,i) = 3*(1-x)^2*exp(-x^2 - (y+1)^2)...
            - 10*(x/5 - x^3 - y^5)*exp(-x^2 - y^2) ...
            - 1/3*exp(-(x+1)^2 - y^2);
    end
    Y = H;
end

function [YY1, YY2] = selection(P,F,p)

%     P = population
%     F = fitness value
%     p = population size
    [x, y] = size(P);
    Y1 = zeros(p,y);
    % adding 10 to ensure no chromosome has negative fitness
    F = F + 10;
    % elite selection
    e = 3;
    for i = 1:e
        [r1, c1] = find(F==max(F));
        Y1(i,:) = P(max(c1),:);
        P(max(c1),:) = [];
        Fn(i) = F(max(c1));
        F(:,max(c1)) = [];
    end
    D = F/sum(F);
    E = cumsum(D);
    N = rand(1);
    d1 = 1;
    d2 = e;
    while d2 <= p-e
        if N <= E(dl)
            Y1(d2+1,:) = P(d1,:);
            Fn(d2+1) = F(d1);
            N = rand(1);
            d2 = d2+1;
            d1 = 1;
        else
            d1 = d1+1;
        end
    end
    YY1 = Y1;
    YY2 = Fn-10;
end