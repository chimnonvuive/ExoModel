classdef HM
    % Homing Method from Firmware specification
    properties (Constant)
        Index = hex2dec('0x6098')
        SubIndex = hex2dec('0x00')
        Value = struct(...
        'ActualPosition',               37, ...
        'HomeSwitchNegSpeed',           27, ...
        'HomeSwitchPosSpeed',           23, ...
        'HomeSwitchNegSpeedAndIndex',   11, ...
        'HomeSwitchPosSpeedAndIndex',   7, ...
        'CurrentPosSpeedAndIndex',      255, ...
        'CurrentNegSpeedAndIndex',      254, ...
        'CurrentNegSpeed',              253, ...
        'CurrentPosSpeed',              252 ...
        );
    end
end