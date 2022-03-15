load homePos

N = 1;
qcs = zeros(N,1);
mNodes = struct([]);

% enable motor nodes
for i=1:N
    mNodes{i} = Epos4(i,0);
    mNodes{i}.ClearErrorState;
    mNodes{i}.EnableNode;
    mNodes{i}.SetOperationMode(OperationModes.PPM);
    
end

% run the motors to home position
T = timer('TimerFcn',@(~,~)disp('Fired.'),'StartDelay',5);
start(T)
for i=1:N
    mNodes{i}.MotionInPosition(0,200,1000,true);
end
wait(T)

% disable motor nodes
for i=1:N
    mNodes{i}.DisableNode;
    qcs(i) = mNodes{i}.ActualPosition;
    delete(mNodes{i})
end
 
for i=262130:262200
    try 
        CloseCommunication(dec2hex(i));
    catch
        continue
    end
end

save Tests/mHomePos qcs
clear mNodes qcs i T