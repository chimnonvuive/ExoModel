function decPop = GADecoding(binPop,decPop,n,numVars,lb,ub,cl,cu)
    % encode the binary values into real values
    for i=1:numVars
        %     gene encoding, with lb = lower bound, ub = upper bound
        %     X = X_lb + bin2dec(Xbin)*(X_ub-X_lb)/(2^bitlength-1)
        decPop(:,i) = lb(i) + bi2de(binPop(:,cl(i):cu(i)),2,'left-msb') ...
            *(ub(i)-lb(i))/(2^(n(i))-1);
    end
end