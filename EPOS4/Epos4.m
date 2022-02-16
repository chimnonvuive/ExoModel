classdef Epos4 < handle
        
    % EPOS4 class, use this class for communication with Maxon EPOS4
    %   motor controller
    %   
    % This class has the methods
    %
    % EPOS4 (nodeID, portNameSuffix), Constructor
    %
    % use it as: Motor1 = Epos4(1,0);
    % for creating a new object Motor1 wich will deal with EPOS4 Node 1 and USB0.
    %
    % delete, Destructor: 
    %
    % use it as: delete(Motor1);
    % when you finish with EPOS4 node.
    %
    % ActualPosition
    % return actual encoder position. 
    % Example: 
    % qc = Motor1.ActualPosition;
    %
    % ActualVelocity
    % return actual motor velocity.
    % Example:
    % rpm = Motor1.ActualVelocity;
    %
    % ActualCurrent
    % return actual current throght motor 
    % Example:
    % i = Motor1.ActualCurrent;
    %
    % IsInErrorState
    % return 0 if not error, or 1 if error
    % Example:
    % errorstate = Motor1.IsInErrorState;
    %
    % ClearErrorState
    % clear actual error in EPOS4
    % Example:
    % if (Motor1.IsInErrorState)
    %     Motor1.ClearErrorState;
    % end
    %
    % EnableNode
    % power the motor
    % Example:
    % Motor1.EnableNode;
    %
    % DisableNode
    % Unpower the motor
    % Example:
    % Motor1.DisableNode;
    %
    % SetOperationMode
    % Change the operation mode for epos4
    % Example:
    % Motor1.SetOperationMode(OperationModes.CurrentMode);
    %  tip: use the tab key for the list of operation modes in class.
    %       >> OperationModes.<tab>
    % for further help type:
    %       >> help Epos4.SetOperationMode
    %
    % GetOperationModes
    % return the actual Operation Mode in Epos4
    % Example
    % OpMode = Motor1.GetOperationMode;
    %
    % SetHomingMethod
    % for changing the way as the motor home
    % Example
    % Motor1.SetHomingMethod( HomingMethods.ActualPosition )
    % for further help type:
    %       >> help Epos4.SetHomingMethod
    %
    % GetHomingMethod
    % for returning the actual home method
    % Example
    % Motor1.GetHomingMethod
    %
    % DoHoming
    % for performing the home procedure
    % Example
    % Motor1.DoHoming
    %    
    % MotionInPosition
    % for moving the motor in Position or Profile Position Mode
    % Example:
    % Motor1.MotionInPosition( 132000 )
    % for further help type:
    %       >> help Epos4.MotionInPosition
    %
    % MotionInVelocity
    % for moving the motor in Velocity or Profile Velocity Mode
    % Example:
    % Motor1.MotionInVelocity( 2000 )
    % for further help type:
    %       >> help Epos4.MotionInVelocity
    %
    % MotionWithCurrent
    % for moving the motor in Current Mode
    % Example:
    % Motor1.MotionWithCurrent( 2000 )
    %
    % Stop
    % for stopping the motor
    % Example:
    % Motor1.Stop
    %    
    % E. Yime, 2015
    %
    
    
    
    properties (SetAccess = immutable )
        NodeID = 0;
        Handle = 0;
    end
    
    properties (SetAccess = private )
        OpMode = 0;
        Enable = 0;
        HomeMethod = 0;
    end
    
    methods
        function res = Epos4(node, usbId)
            % constructor
            % use it as: Motor1 = Epos4(1, 0);
            %
            % E. Yime, 2015
            %
            
            res.NodeID = node;
            res.Handle = OpenCommunication(usbId);
            res.OpMode = res.GetOperationMode;
            res.Enable = res.IsEnable;
            res.GetHomingMethod;
        end
        
        function delete(obj)
            % destructor
            % use it as: delete(Motor1)
            %
            % E. Yime, 2015
            %
            
            obj.ClearErrorState;
            obj.DisableNode;
            CloseCommunication(obj.Handle);
            clear res
        end
        
        function res = GetHandle(obj)
            % This function is only for debugging purpose
            % use it as: Motor1.GetHandle
            %
            % E. Yime, 2015
            %
            
            res = obj.Handle;
        end
        
        function res = IsInErrorState(obj)
            % This function is for obtaining the error state in a Epos4
            % node
            %
            % use it as: 
            % if (Motor1.IsInErrorState) 
            %    Motor1.ClearErrorState
            %    .... 
            % end
            %
            % E. Yime, 2015
            %
            
            res = (bitand(obj.GetStatusWord, 8) == 8);
        end
        
        function res = ExplainErrors(obj)
            % This function is for listing the actual errors in a Epos4
            % node
            %
            % use it as: 
            % >> Motor1.ExplainErrors;
            %
            % E. Yime, 2015
            %
            
            Errors = {
                0, 'No Error'; ...
                4096, 'Generic Error'; ...
                8976, 'Overcurrent Error';
                12816, 'Overvoltage Error'; ...
                12832, 'Undervoltage Error'; ...
                16912, 'Overtemperature Error'; ...
                20755, 'Logic Supply Voltage Too Low Error'; ...
                20756, 'Supply Voltage Output Stage Too Low Error'; ...
                24832, 'Internal Software Error'; ...
                25376, 'Software Parameter Error'; ...
                29472, 'Position Sensor Error'; ...
                33040, 'CAN Overrun Error (Objects lost)'; ...
                33041, 'CAN Overrun Error'; ...
                33056, 'CAN Passive Mode Error'; ...
                33072, 'CAN Life Guarding Error or Heartbeat Error'; ...
                33104, 'CAN Transmit COB-ID Collision Error'; ...
                33277, 'CAN Bus Off Error'; ...
                33278, 'CAN Rx Queue Overflow Error'; ...
                33279, 'CAN Tx Queue Overflow Error'; ...
                33296, 'CAN PDO Length Error'; ...
                34321, 'Following Error'; ...
                65281, 'Hall Sensor Error'; ...
                65282, 'Index Processing Error'; ...
                68283, 'Encoder Resolution Error'; ...
                65284, 'Hall Sensor not found Error'; ...
                65285, 'Negative Limit Switch Error'; ...
                65287, 'Positive Limit Switch Error'; ...
                65288, 'Hall Angle Detection Error'; ...
                65289, 'Software Position Limit Error'; ...
                65290, 'Position Sensor Breach Error'; ...
                65291, 'System Overloaded Error'; ...
                65292, 'Interpolated Position Mode Error'; ...
                65293, 'Auto Tuning Identification Error'; ...
                65295, 'Gear Scaling Factor Error'; ...
                65296, 'Controller Gain Error'; ...
                65297, 'Main Sensor Direction Error'; ...
                65298, 'Auxiliary Sensor Direction Error' };
            
            Index = 4099;
            number = GetObject(obj.Handle, obj.NodeID, Index, 0, 1);

            for i = 1:number
                res = GetObject(obj.Handle, obj.NodeID, Index, number, 4);
                for j = 1:size( Errors, 1)
                    if ( res == cell2mat(Errors(j,1)) )
                        disp( Errors(j, 2) );
                    end
                end
            end
            
        end
        
        function res = ClearErrorState(obj)
            % This function is for clearing the error in a node
            %
            % use it as: 
            % if (Motor1.IsInErrorState) 
            %    Motor1.ClearErrorState
            %    .... 
            % end
            %
            % E. Yime, 2015
            %
            
            res = ClearErrorState(obj.Handle, obj.NodeID);
        end
        
        function res = ShowOperationMode(obj)
            % This function is for detecting actual Operation Mode in
            % Epos4 class
            %
            % use it as:
            % >> Motor1.ShowOperationMode
            %
            % E. Yime, 2015
            %
            
            res = obj.OpMode;
        end
        
        function res = GetOperationMode(obj)
            % This function is for receiving actual Operation Mode in a
            % physical Epos4 Motor controller
            %
            % use it as:
            % >> Motor1.GetOperationMode
            %
            % E. Yime, 2015
            %
            
            a = GetObject(obj.Handle, obj.NodeID, hex2dec('0x6060'), 0, 1);
            switch a
                case 1
                    res = OperationModes.PPM;
                case 3
                    res = OperationModes.PVM;
                case 6
                    res = OperationModes.HMM;
                case 8
                    res = OperationModes.CSP;
                case 9
                    res = OperationModes.CSV;
                case 10
                    res = OperationModes.CST;
                otherwise
                    res = OperationModes.Unimplemented;
            end
        end
            
        function res = SetOperationMode(obj, mode, varargin)
            % This function is for setting the actual Operation Mode in a Epos4 Motor controller
            % you can use it in the following ways,
            %
            % >> Motor1.SetOperationMode( OperationModes.HMM )
            %
            % >> Motor1.SetOperationMode( OperationModes.PVM )
            %
            % >> Motor1.SetOperationMode( OperationModes.PPM )
            %
            % >> Motor1.SetOperationMode( OperationModes.CSP )
            %
            % >> Motor1.SetOperationMode( OperationModes.CSV )
            %
            % >> Motor1.SetOperationMode( OperationModes.CST )
            %
            % E. Yime, 2015
            %
            
            % Object to write
            Index = hex2dec('0x6060');
            SubIndex = 0;
            bytes = 1;
            
            switch mode
                case OperationModes.PPM
                    Values = 1;
                case OperationModes.PVM
                    Values = 3;     
                case OperationModes.HMM
                    Values = 6;    
                case OperationModes.CSP
                    Values = 8;
                case OperationModes.CSV
                    Values = 9;
                case OperationModes.CST
                    Values = 10;
                otherwise
                    error('invalid mode');
            end
            res = SetObject(obj.Handle, obj.NodeID, Index, SubIndex, Values, bytes);
            obj.OpMode = mode;
            
        end
        
        function res = SetHomingMethod(obj, homing, varargin)
            % This function if for performing a homing in a EPOS4 node
            % you can use it in the following ways,
            %
            % >> Motor1.SetHomingMethod( HomingMethods.ActualPosition )
            % The EPOS4 will set the actual position as the default zero
            %
            % >> Motor1.SetHomingMethod( HomingMethods.HomeSwitchNegSpeed )
            % or
            % >> Motor1.SetHomingMethod( HomingMethods.HomeSwitchNegSpeed, SpeedForZeroSearch, AccelerationForZeroSearch )
            %
            % >> Motor1.SetHomingMethod( HomingMethods.HomeSwitchNegSpeedAndIndex )
            % or
            % >> Motor1.SetHomingMethod( HomingMethods.HomeSwitchNegSpeedAndIndex, SpeedForZeroSearch, SpeedForIndexSearch, AccelerationForZeroSearch )
            %
            % >> Motor1.SetHomingMethod( HomingMethods.HomeSwitchPosSpeed )
            % or
            % >> Motor1.SetHomingMethod( HomingMethods.HomeSwitchPosSpeed, SpeedForZeroSearch, AccelerationForZeroSearch )
            %
            % >> Motor1.SetHomingMethod( HomingMethods.HomeSwitchPosSpeedAndIndex )
            % or
            % >> Motor1.SetHomingMethod( HomingMethods.HomeSwitchPosSpeedAndIndex, SpeedForZeroSearch, SpeedForIndexSearch, AccelerationForZeroSearch )
            %
            % >> Motor1.SetHomingMethod( HomingMethods.CurrentNegSpeed )
            % or
            % >> Motor1.SetHomingMethod( HomingMethods.CurrentNegSpeed, CurrentToZeroSearch )
            %
            % >> Motor1.SetHomingMethod( HomingMethods.CurrentNegSpeedAndIndex )
            % or
            % >> Motor1.SetHomingMethod( HomingMethods.CurrentNegSpeedAndIndex, CurrentToZeroSearch, SpeedForIndexSearch )            
            %
            % >> Motor1.SetHomingMethod( HomingMethods.CurrentPosSpeed )
            % or
            % >> Motor1.SetHomingMethod( HomingMethods.CurrentPosSpeed, CurrentToZeroSearch )
            %
            % >> Motor1.SetHomingMethod( HomingMethods.CurrentPosSpeedAndIndex )
            % or
            % >> Motor1.SetHomingMethod( HomingMethods.CurrentPosSpeedAndIndex, CurrentToZeroSearch, SpeedForIndexSearch )                 
            
            % Initial values
            Index = zeros(4);
            SubIndex = zeros(4);
            Bytes = zeros(4);
            Values = zeros(4);
            
            % First object
            number = 1;
            Index(1) = HM.Index;
            SubIndex(1) = HM.SubIndex;
            Bytes(1) = 1;
            
            if (nargin > 5)
                error('No more of 4 arguments allowed')
            end

            switch (homing)
                case HomingMethods.ActualPosition
                    Values(1) = HM.Value.ActualPosition;
                    if (nargin > 2)
                        error('No additional arguments allowed when homing to actual Position')
                    end
                    obj.HomeMethod = 1;
                    
                case HomingMethods.HomeSwitchNegSpeed
                    Values(1) = HM.Value.HomeSwitchNegSpeed;
                    if (nargin > 4)
                        error('Only two aditional parameters allowed')
                    end
                    if (nargin > 2)
                        % Speed Zero
                        number = 2;
                        Index(2) = 24729;
                        SubIndex(2) = 1;
                        Values(2) = cell2mat(varargin(1));
                        Bytes(2) = 4;                        
                    end
                    if (nargin > 3)
                        % Accel
                        number = 3;
                        Index(3) = 24730;
                        SubIndex(3) = 0;
                        Values(3) = cell2mat(varargin(2));
                        Bytes(3) = 4;                        
                    end
                    obj.HomeMethod = 2;    
                
                case HomingMethods.HomeSwitchNegSpeedAndIndex
                    Values(1) = 11;
                    if (nargin > 2)
                        % Speed to Home
                        number = 2;
                        Index(2) = 24729;
                        SubIndex(2) = 1;
                        Values(2) = cell2mat(varargin(1));
                        Bytes(2) = 4;                        
                    end
                    if (nargin > 3)
                        % Speed to Index
                        number = 3;
                        Index(3) = 24729;
                        SubIndex(3) = 2;
                        Values(3) = cell2mat(varargin(2));
                        Bytes(3) = 4;                        
                    end
                    if (nargin > 4)
                        % Accel
                        number = 4;
                        Index(4) = 24730;
                        SubIndex(4) = 0;
                        Values(4) = cell2mat(varargin(3));
                        Bytes(4) = 4;                        
                    end
                    obj.HomeMethod = 3;    

                case HomingMethods.HomeSwitchPosSpeed
                    Values(1) = 23;
                    if (nargin > 4)
                        error('Only two aditional parameters allowed')
                    end
                    if (nargin > 2)
                        % Speed Zero
                        number = 2;
                        Index(2) = 24729;
                        SubIndex(2) = 1;
                        Values(2) = cell2mat(varargin(1));
                        Bytes(2) = 4;                        
                    end
                    if (nargin > 3)
                        % Accel
                        number = 3;
                        Index(3) = 24730;
                        SubIndex(3) = 0;
                        Values(3) = cell2mat(varargin(2));
                        Bytes(3) = 4;                        
                    end
                    obj.HomeMethod = 4; 
                    
                case HomingMethods.HomeSwitchPosSpeedAndIndex
                    Values(1) = 7;
                    if (nargin > 2)
                        % Speed to Home
                        number = 2;
                        Index(2) = 24729;
                        SubIndex(2) = 1;
                        Values(2) = cell2mat(varargin(1));
                        Bytes(2) = 4;                        
                    end
                    if (nargin > 3)
                        % Speed to Index
                        number = 3;
                        Index(3) = 24729;
                        SubIndex(3) = 2;
                        Values(3) = cell2mat(varargin(2));
                        Bytes(3) = 4;                        
                    end
                    if (nargin > 4)
                        % Accel
                        number = 4;
                        Index(4) = 24730;
                        SubIndex(4) = 0;
                        Values(4) = cell2mat(varargin(3));
                        Bytes(4) = 4;                        
                    end
                    obj.HomeMethod = 5;
                    
                case HomingMethods.CurrentNegSpeed
                    Values(1) = -4;
                    if (nargin > 3)
                        error('Only Current Threshold allowed in Current Negative Speed')
                    end
                    if (nargin > 2)
                        % current threshold 
                        number = 2;
                        Index(2) = 8320;
                        SubIndex(2) = 0;
                        Values(2) = cell2mat(varargin(1));
                        Bytes(2) = 2;
                    end                  
                    obj.HomeMethod = 6;
                    
                case HomingMethods.CurrentNegSpeedAndIndex
                    Values(1) = -2;
                    if (nargin > 4)
                        error('Only two additional values allowed')
                    end
                    if (nargin > 2)
                        % current threshold 
                        number = 2;
                        Index(2) = 8320;
                        SubIndex(2) = 0;
                        Values(2) = cell2mat(varargin(1));
                        Bytes(2) = 2;
                    end
                    if (nargin > 3)
                        % Speed to Index
                        number = 3;
                        Index(3) = 24729;
                        SubIndex(3) = 2;
                        Values(3) = cell2mat(varargin(2));
                        Bytes(3) = 4;                        
                    end                      
                    obj.HomeMethod = 7;
                    
                case HomingMethods.CurrentPosSpeed
                    Values(1) = -3;
                    if (nargin > 3)
                        error('Only Current Threshold allowed in Current Positive Speed')
                    end
                    if (nargin > 2)
                        % current threshold 
                        number = 2;
                        Index(2) = 8320;
                        SubIndex(2) = 0;
                        Values(2) = cell2mat(varargin(1));
                        Bytes(2) = 2;
                    end
                    obj.HomeMethod = 8; 
                    
                case HomingMethods.CurrentPosSpeedAndIndex
                    Values(1) = -1;
                    if (nargin > 4)
                        error('Only two additional values allowed')
                    end
                    if (nargin > 2)
                        % current threshold 
                        number = 2;
                        Index(2) = 8320;
                        SubIndex(2) = 0;
                        Values(2) = cell2mat(varargin(1));
                        Bytes(2) = 2;
                    end
                    if (nargin > 3)
                        % Speed to Index
                        number = 3;
                        Index(3) = 24729;
                        SubIndex(3) = 2;
                        Values(3) = cell2mat(varargin(2));
                        Bytes(3) = 4;                        
                    end                            
                    obj.HomeMethod = 9; 
                    
                otherwise
                    error('Not Implement Homing Method')
                    
            end
            
            for i = 1:number
                res = SetObject(obj.Handle, obj.NodeID, Index(i), SubIndex(i), Values(i), Bytes(i));
            end
        end
        
        function res = GetHomingMethod(obj)
            % This function is for getting the actual value of the homing method in a EPOS4
            % controller 
            %
            % use it as:
            %
            % >> Motor1.GetHomingMethod
            
            % Homing method in Object Dictionary
            Index = HM.Index;
            SubIndex = HM.SubIndex;
            Size = 1;
            a = GetObject(obj.Handle, obj.NodeID, Index, SubIndex, Size);
                        
            % Table 6-135 - Homing Methods
            switch (a)
                case HM.Value.ActualPosition
                    res = HomingMethods.ActualPosition;
                    obj.HomeMethod = 1;
                case HM.Value.HomeSwitchNegSpeed
                    res = HomingMethods.HomeSwitchNegSpeed;
                    obj.HomeMethod = 2;
                case HM.Value.HomeSwitchPosSpeed
                    res = HomingMethods.HomeSwitchPosSpeed;
                    obj.HomeMethod = 4;
                case HM.Value.HomeSwitchNegSpeedAndIndex
                    res = HomingMethods.HomeSwitchNegSpeedAndIndex;
                    obj.HomeMethod = 3;
                case HM.Value.HomeSwitchPosSpeedAndIndex
                    res = HomingMethods.HomeSwitchPosSpeedAndIndex;
                    obj.HomeMethod = 5;
                case HM.Value.CurrentPosSpeedAndIndex
                    res = HomingMethods.CurrentPosSpeedAndIndex;
                    obj.HomeMethod = 7;
                case HM.Value.CurrentNegSpeedAndIndex
                    res = HomingMethods.CurrentNegSpeedAndIndex;
                    obj.HomeMethod = 9;
                case HM.Value.CurrentPosSpeed
                    res = HomingMethods.CurrentPosSpeed;
                    obj.HomeMethod = 6;
                case HM.Value.CurrentNegSpeed
                    res = HomingMethods.CurrentNegSpeed;
                    obj.HomeMethod = 8;
                otherwise
                    res = HomingMethods.NotImplemented;
                    obj.HomeMethod = 0;                    
            end
        end
        
        function res = DoHoming(obj)
            % This function is for Homing a motor connected to a EPOS4
            % controller when the EPOS4 is in Homing
            %
            % use it as:
            %
            % >> Motor1.DoHoming
            %
            % E. Yime, 2015
            %
            
            if (obj.IsInErrorState)
                obj.Enable = 0;
                error('you can not do a Homing when the motors is in error state');
            end
            if ( obj.Enable == 0)
                error('you can not do a Homing with a disabled motor');
            end
            if ( obj.OpMode ~= OperationModes.HMM  )
                error('you can not do a Homing when the motor is not in Homing Mode');
            end
            if (obj.HomeMethod == 0)
                error('you must specify a valid Homing Method before performing a homing');
            end
            % change controlword to home the motor
            res = FindHome(obj.Handle, obj.NodeID, obj.HomeMethod);
        end
             
        function res = IsEnable(obj)
            % This function is for detecting if EPOS4 is enabled
            %
            % use it as:
            % >> Motor1.IsEnable
            %
            % E. Yime, 2015
            %
            
            res = (bitand(obj.GetStatusWord, 4) == 4);
        end
        
        function res = EnableNode(obj)
            % This function is for enabling a physical EPOS4 Motor Controller
            %
            % use it as:
            % >> Motor1.EnableNode
            %
            % E. Yime, 2015
            %
            
            if (obj.IsInErrorState)
                obj.Enable = 0;
                error('you can not Enable a Motore when it is in error state');
            end
            obj.Enable = 1;
            res = EnableNode(obj.Handle, obj.NodeID);
        end
        
        function res = DisableNode(obj)
            % This function is for disabling a physical EPOS4 Motor Controller
            %
            % use it as:
            % >> Motor1.DisableNode
            %
            % E. Yime, 2015
            %
            
            obj.Enable = 0;
            res = DisableNode(obj.Handle, obj.NodeID);
        end
        
        function res = GetStatusWord(obj)
            % This function is for getting the actual status word in a EPOS4
            % object dictionary  
            %
            % use it as:
            % >> Motor1.GetStatusWord
            %
            % E. Yime, 2015
            %
            
            res = GetObject(obj.Handle, obj.NodeID, 24641, 0, 2);
        end
        
        function res = ExplainStatusWord(obj)
            % This function is for obtaining an interpretation of the object
            % status word in the object dictionary
            %
            % use it as:
            % >> Motor1.ExplainStatusWord
            %
            % E. Yime, 2015
            %
            
            res = obj.GetStatusWord;
            if (bitand(res,1) == 1)
                disp('Node is Ready to Swith On');
            end
            if (bitand(res,2) == 2)
                disp('Node is Swithed On');
            end
            if (bitand(res,4) == 4)
                disp('Node is Operation Enable');
            end
            if (bitand(res,8) == 8)
                disp('Node is Fault State');
            end
            if (bitand(res,16) == 16)
                disp('Node is Voltage Enabled');
            end
            if (bitand(res,32) == 32)
                disp('Node is QuickStop');
            end
            if (bitand(res,64) == 64)
                disp('Node is Swtich On Disable');
            end
            if (bitand(res,128) == 128)
                disp('Node is Warning State');
            end
            if (bitand(res,1024) == 1024)
                disp('Node has reached target');
            end
        end
        
        function res = ActualPosition(obj)
            % This function is for obtaining the actual position of the EPOS4
            % node
            %
            % use it as:
            % >> Motor1.ActualPosition
            %
            % E. Yime, 2015
            %
            
            res = GetPosition(obj.Handle, obj.NodeID);
        end
        
        function res = WaitUntilDone( obj, TimeOut )
            % This function will wait until the motor reachs the target
            %
            % use it as:
            % >> Motor1.WaitUntilDone( TimeOutIn_ms );
            %
            % E. Yime, 2015
            %
            
            res = WaitForTargetReached( obj.Handle, obj.NodeID, TimeOut );
        end
        
        function res = MotionInPosition(obj, varargin)
            % This function is for moving a motor connected to a EPOS4 controller
            % when the motor is in Position or Profile Position Mode.
            %
            % use it as:
            %
            % In Position Mode or Profile Position mode 
            % >> Motor1.MotionInPosition( DesiredPosition ) 
            %
            % In Profile Position mode 
            % >> Motor1.MotionInPosition( DesiredPosition, ProfileVelocity, ProfileAcceleration, AbsoluteOrRelativePosition  ) 
            %
            % E. Yime, 2015
            %
            
            if (nargin < 2 || nargin > 5)
                error('you should call this function with four arguments');
            end
            if (obj.IsInErrorState)
                obj.Enable = 0;
                error('you can not move a motor when it is in error state');
            end
            if ( obj.Enable == 0)
                error('you can not move a disabled motor');
            end
            if ( (obj.OpMode ~= OperationModes.CSP) && (obj.OpMode ~= OperationModes.PPM) )
                error('you can not move a motor when it is not in position related mode');
            end
            
            Position = cell2mat(varargin(1));
            if (nargin > 2)
                velocity = cell2mat(varargin(2));
            else
                velocity = 8000;
            end
            if (nargin > 3)
                acceleration = cell2mat(varargin(3));
            else
                acceleration = velocity/2;
            end
            if (nargin > 4)
                Abs = cell2mat(varargin(4));
            else 
                Abs = 0;
            end
            
            if (obj.GetOperationMode == OperationModes.CSP)
                res = SetPosition(obj.Handle, obj.NodeID, Position);
            elseif (obj.GetOperationMode == OperationModes.PPM)
                if ( nargin > 2) 
                    SetProfilePositionData(obj.Handle, obj.NodeID, velocity, acceleration);
                end
                res = MoveToPosition(obj.Handle, obj.NodeID, Position, Abs);
            end
            
        end
        
        function res = ActualVelocity(obj)
            % This function is for obtaining the actual velocity of the EPOS4
            % node
            %
            % use it as:
            % >> Motor1.ActualVelocity
            %
            % E. Yime, 2015
            %
            
            res = GetVelocity(obj.Handle, obj.NodeID);
        end
        
        function res = MotionInVelocity(obj, varargin)
            % This function is for moving a motor connected to a EPOS4 controller
            % when the motor is in Velocity or Profile Velocity Mode.
            %
            % use it as:
            %
            % In Velocity Mode or Profile Velocity mode 
            % >> Motor1.MotionInVelocity( DesiredVelocity ) 
            %
            % In Profile Velocity mode 
            % >> Motor1.MotionInPosition( DesiredVelocity, ProfileAcceleration ) 
            %
            % E. Yime, 2015
            %
            
            if (nargin < 2 || nargin > 3)
                error('you should call this function with four arguments');
            end
            if (obj.IsInErrorState)
                obj.Enable = 0;
                error('you can not move a motor when it is in error state');
            end
            if ( obj.Enable == 0)
                error('you can not move a disabled motor');
            end
            if ( (obj.OpMode ~= OperationModes.CSV) && (obj.OpMode ~= OperationModes.PVM) )
                error('you can not move a motor when it is not in velocity related mode');
            end

            Velocity = cell2mat(varargin(1));
            if (nargin > 2)
                Acceleration = cell2mat(varargin(2));
            else
                Acceleration = 4000;
            end
            
            if (obj.GetOperationMode == OperationModes.CSV)
                res = SetVelocity(obj.Handle, obj.NodeID, Velocity);
            elseif (obj.GetOperationMode == OperationModes.PVM)
                if (nargin > 2) 
                    SetProfileVelocityData(obj.Handle, obj.NodeID, Acceleration);
                end
                res = MoveWithVelocity(obj.Handle, obj.NodeID, Velocity);
            end
            
        end
        
        function res = ActualCurrent(obj)
            % This function is for obtaining the actual current of the EPOS4
            % node
            %
            % use it as:
            % >> Motor1.ActualCurrent
            %
            % E. Yime, 2015
            %
            
            res = GetCurrent(obj.Handle, obj.NodeID);
        end
        
        function res = MotionWithCurrent(obj, current)
            % This function is for moving a motor connected to a EPOS4 controller
            % when the motor is in Current Mode
            %
            % use it as:
            %
            % >> Motor1.MotionWithCurrent( DesiredCurrent ) 
            %
            % E. Yime, 2015
            %
            
            if (obj.IsInErrorState)
                obj.Enable = 0;
                error('you can not move a motor when it is in error state');
            end
            if ( obj.Enable == 0)
                error('you can not move a disabled motor');
            end
            if ( obj.OpMode ~= OperationModes.CST) 
                error('you can not move the motor when it is not in current mode');
            end
            res = SetCurrent( obj.Handle, obj.NodeID, current);
        end
        
        function res = Stop(obj)
            % This function is for stopping a motor connected to a EPOS4 controller
            %
            % use it as:
            %
            % >> Motor1.Stop
            %
            % E. Yime, 2015
            %
            
            res = QuickStop(obj.Handle, obj.NodeID);
        end
               
    end
    
end
