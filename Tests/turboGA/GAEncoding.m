function binPop = GAEncoding(binPop,decPop,n,numVars,lb,ub,cl,cu)
    % encode the real values into binary values
    for i=1:numVars
        %     gene encoding, with lb = lower bound, ub = upper bound
        %     X_bin = dec2bin( (X-X_lb)*(2^bitlength-1)/(X_ub-X_lb) )
        binPop(:,cl(i):cu(i)) = de2bi(round((decPop(:,i)-lb(i))*(2^(n(i))-1)...
            / (ub(i)-lb(i))),n(i),'left-msb');
    end
end