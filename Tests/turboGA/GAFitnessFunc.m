% onemax
function fitnessVals = GAFitnessFunc(Len1,Len2,Len3,h1,...
                           l1,l2,l3,l4,...
                           m1,m2,m3,m4,...
                           lb,ub,lbJ,ubJ,... % constraints
                           fitnessVals,COMRef,thetas,as,t_f,nt,popSize,len,...
                           ti,dti,ddti,tf,dtf)
       
       %% evaluate the fitness of the population
        % The vector of fitness values returned  must be of dimensions
        % 1 x popSize.
        
    for i = 1:popSize
        
        ts = linspace(lb(end),t_f(i),nt);

        for j=1:4
            thetas(:,j) = JointTrajFit(ts,as(j),t_f(i),...
                tf(j),ti(j),dtf(j),dti(j),ddti(j));
        end

        COM_est = JointCOMTraj(Len1,Len2,Len3,h1,...
                                   l1,l2,l3,l4,...
                                   m1,m2,m3,m4,...
                                   thetas(:,1), thetas(:,2), thetas(:,3), thetas(:,4));

        COMerr = COM_est-COMRef;
        maxdist = sqrt(dot(COMerr,COMerr,2));
        SSE = sum(maxdist)/1e5;
        %         fitnessVals = 1./(2*COMerr(:,1) + 1);

        if all(repmat(lbJ(1,:),nt,1)<thetas,'all') ...
                && all(thetas<repmat(ubJ(1,:),nt,1),'all')...
                && lb(end)<t_f(i) && t_f(i)<ub(end)
        %                 && COM_est(1)<=COMxmax
        %         if all(repmat(lb(1:4),popSize,1)<thetas,'all') ... 
        %                 && all(thetas<repmat(ub(1:4),popSize,1),'all') ...                  
            fitnessVals(i) = len/(2*SSE + 1);
        else
            fitnessVals(i) = len/(2*SSE + 100);
        end
    end
end