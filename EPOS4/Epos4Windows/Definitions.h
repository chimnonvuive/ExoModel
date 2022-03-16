// *******************************************************************************************************************
//                  maxon motor ag, CH-6072 Sachseln
// *******************************************************************************************************************
//
// File:            Definitions.h
//
// Description:     Functions definitions for EposCmd.dll/EposCmd64.dll library for Developer Platform Microsoft Visual C++
//
// Date:            13.11.2003
//
// Dev. Platform:   Microsoft Visual C++
//
// Target:          Windows Operating Systems
//
// Written by:      maxon motor ag, CH-6072 Sachseln
//
// History:         See chapter History in the document EPOS Command Library
//
// Copyright © 2003 - 2021, maxon motor ag.
// All rights reserved.
// *******************************************************************************************************************

// --------------------------------------------------------------------------
//                  DIRECTIVES
// --------------------------------------------------------------------------

#ifndef _WINDOWS_
#include <windows.h>
#endif

#if !defined(EposCommandLibraryDefinitions)
#define EposCommandLibraryDefinitions

// --------------------------------------------------------------------------
//                  IMPORTED FUNCTIONS PROTOTYPE
// --------------------------------------------------------------------------

// INITIALISATION FUNCTIONS
    #define Initialisation_DllExport            __declspec(dllexport)
    #define HelpFunctions_DllExport             __declspec(dllexport)
// CONFIGURATION FUNCTIONS
    #define Configuration_DllExport             __declspec(dllexport)
// OPERATION FUNCTIONS
    #define Status_DllExport                    __declspec(dllexport)
    #define StateMachine_DllExport              __declspec(dllexport)
    #define ErrorHandling_DllExport             __declspec(dllexport)
    #define MotionInfo_DllExport                __declspec(dllexport)
    #define ProfilePositionMode_DllExport       __declspec(dllexport)
    #define ProfileVelocityMode_DllExport       __declspec(dllexport)
    #define HomingMode_DllExport                __declspec(dllexport)
    #define InterpolatedPositionMode_DllExport  __declspec(dllexport)
    #define PositionMode_DllExport              __declspec(dllexport)
    #define VelocityMode_DllExport              __declspec(dllexport)
    #define CurrentMode_DllExport               __declspec(dllexport)
    #define MasterEncoderMode_DllExport         __declspec(dllexport)
    #define StepDirectionMode_DllExport         __declspec(dllexport)
    #define InputsOutputs_DllExport             __declspec(dllexport)
// DATA RECORDING FUNCTIONS
    #define DataRecording_DllExport             __declspec(dllexport)
// LOW LAYER FUNCTIONS
    #define CanLayer_DllExport                  __declspec(dllexport)

//*******************************************************************************************************************
// INITIALISATION FUNCTIONS
//*******************************************************************************************************************

//Communication
    Initialisation_DllExport HANDLE __stdcall VCS_OpenDevice(char* DeviceName, char* ProtocolStackName, char* InterfaceName, char* PortName, DWORD* pErrorCode);
    Initialisation_DllExport HANDLE __stdcall VCS_OpenDeviceDlg(DWORD* pErrorCode);
    Initialisation_DllExport BOOL __stdcall VCS_SetProtocolStackSettings(HANDLE KeyHandle, DWORD Baudrate, DWORD Timeout, DWORD* pErrorCode);
    Initialisation_DllExport BOOL __stdcall VCS_GetProtocolStackSettings(HANDLE KeyHandle, DWORD* pBaudrate, DWORD* pTimeout, DWORD* pErrorCode);
    Initialisation_DllExport BOOL __stdcall VCS_FindDeviceCommunicationSettings(HANDLE* pKeyHandle, char* pDeviceName, char* pProtocolStackName, char* pInterfaceName, char* pPortName, WORD SizeName, DWORD* pBaudrate, DWORD* pTimeout, WORD* pNodeId, int DialogMode, DWORD* pErrorCode);
    Initialisation_DllExport BOOL __stdcall VCS_CloseDevice(HANDLE KeyHandle, DWORD* pErrorCode);
    Initialisation_DllExport BOOL __stdcall VCS_CloseAllDevices(DWORD* pErrorCode);

    //Gateway
    Initialisation_DllExport BOOL __stdcall VCS_SetGatewaySettings(HANDLE KeyHandle, DWORD Baudrate, DWORD* pErrorCode);
    Initialisation_DllExport BOOL __stdcall VCS_GetGatewaySettings(HANDLE KeyHandle, DWORD* pBaudrate, DWORD* pErrorCode);

    //Subdevice
    Initialisation_DllExport HANDLE __stdcall VCS_OpenSubDevice(HANDLE DeviceHandle, char* DeviceName, char* ProtocolStackName, DWORD* pErrorCode);
    Initialisation_DllExport HANDLE __stdcall VCS_OpenSubDeviceDlg(HANDLE DeviceHandle, DWORD* pErrorCode);
    Initialisation_DllExport BOOL __stdcall VCS_FindSubDeviceCommunicationSettings(HANDLE DeviceHandle, HANDLE* pKeyHandle, char* pDeviceName, char* pProtocolStackName, WORD SizeName, DWORD* pBaudrate, WORD* pNodeId, int DialogMode, DWORD* pErrorCode);
    Initialisation_DllExport BOOL __stdcall VCS_CloseSubDevice(HANDLE KeyHandle, DWORD* pErrorCode);
    Initialisation_DllExport BOOL __stdcall VCS_CloseAllSubDevices(HANDLE DeviceHandle, DWORD* pErrorCode);

//Info
    HelpFunctions_DllExport BOOL __stdcall VCS_GetDriverInfo(char* pLibraryName, WORD MaxNameSize, char* pLibraryVersion, WORD MaxVersionSize, DWORD* pErrorCode);
    HelpFunctions_DllExport BOOL __stdcall VCS_GetVersion(HANDLE KeyHandle, WORD NodeId, WORD* pHardwareVersion, WORD* pSoftwareVersion, WORD* pApplicationNumber, WORD* pApplicationVersion, DWORD* pErrorCode);
    HelpFunctions_DllExport BOOL __stdcall VCS_GetErrorInfo(DWORD ErrorCodeValue, char* pErrorInfo, WORD MaxStrSize);

//Advanced Functions
    HelpFunctions_DllExport BOOL __stdcall VCS_GetDeviceNameSelection(BOOL StartOfSelection, char* pDeviceNameSel, WORD MaxStrSize, BOOL* pEndOfSelection, DWORD* pErrorCode);
    HelpFunctions_DllExport BOOL __stdcall VCS_GetProtocolStackNameSelection(char* DeviceName, BOOL StartOfSelection, char* pProtocolStackNameSel, WORD MaxStrSize, BOOL* pEndOfSelection, DWORD* pErrorCode);
    HelpFunctions_DllExport BOOL __stdcall VCS_GetInterfaceNameSelection(char* DeviceName, char* ProtocolStackName, BOOL StartOfSelection, char* pInterfaceNameSel, WORD MaxStrSize, BOOL* pEndOfSelection, DWORD* pErrorCode);
    HelpFunctions_DllExport BOOL __stdcall VCS_GetPortNameSelection(char* DeviceName, char* ProtocolStackName, char* InterfaceName, BOOL StartOfSelection, char* pPortSel, WORD MaxStrSize, BOOL* pEndOfSelection, DWORD* pErrorCode);
    HelpFunctions_DllExport BOOL __stdcall VCS_ResetPortNameSelection(char* DeviceName, char* ProtocolStackName, char* InterfaceName, DWORD* pErrorCode);
    HelpFunctions_DllExport BOOL __stdcall VCS_GetBaudrateSelection(char* DeviceName, char* ProtocolStackName, char* InterfaceName, char* PortName, BOOL StartOfSelection, DWORD* pBaudrateSel, BOOL* pEndOfSelection, DWORD* pErrorCode);
    HelpFunctions_DllExport BOOL __stdcall VCS_GetKeyHandle(char* DeviceName, char* ProtocolStackName, char* InterfaceName, char* PortName, HANDLE* pKeyHandle, DWORD* pErrorCode);
    HelpFunctions_DllExport BOOL __stdcall VCS_GetDeviceName(HANDLE KeyHandle, char* pDeviceName, WORD MaxStrSize, DWORD* pErrorCode);
    HelpFunctions_DllExport BOOL __stdcall VCS_GetProtocolStackName(HANDLE KeyHandle, char* pProtocolStackName, WORD MaxStrSize, DWORD* pErrorCode);
    HelpFunctions_DllExport BOOL __stdcall VCS_GetInterfaceName(HANDLE KeyHandle, char* pInterfaceName, WORD MaxStrSize, DWORD* pErrorCode);
    HelpFunctions_DllExport BOOL __stdcall VCS_GetPortName(HANDLE KeyHandle, char* pPortName, WORD MaxStrSize, DWORD* pErrorCode);

//*******************************************************************************************************************
// CONFIGURATION FUNCTIONS
//*******************************************************************************************************************

//General
    Configuration_DllExport BOOL __stdcall VCS_ImportParameter(HANDLE KeyHandle, WORD NodeId, char* pParameterFileName, BOOL ShowDlg, BOOL ShowMsg, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_ExportParameter(HANDLE KeyHandle, WORD NodeId, char* pParameterFileName, char* pFirmwareFileName, char* pUserID, char* pComment, BOOL ShowDlg, BOOL ShowMsg, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_SetObject(HANDLE KeyHandle, WORD NodeId, WORD ObjectIndex, BYTE ObjectSubIndex, void* pData, DWORD NbOfBytesToWrite, DWORD* pNbOfBytesWritten, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_GetObject(HANDLE KeyHandle, WORD NodeId, WORD ObjectIndex, BYTE ObjectSubIndex, void* pData, DWORD NbOfBytesToRead, DWORD* pNbOfBytesRead, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_Restore(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_Store(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);

    //Firmware update
    Configuration_DllExport BOOL __stdcall VCS_UpdateFirmware(HANDLE KeyHandle, WORD NodeId, char* pBinaryFile, BOOL ShowDlg, BOOL ShowHistory, BOOL ShowMsg, DWORD* pErrorCode);

//Advanced Functions
    //Motor
    Configuration_DllExport BOOL __stdcall VCS_SetMotorType(HANDLE KeyHandle, WORD NodeId, WORD MotorType, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_SetDcMotorParameter(HANDLE KeyHandle, WORD NodeId, WORD NominalCurrent, WORD MaxOutputCurrent, WORD ThermalTimeConstant, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_SetDcMotorParameterEx(HANDLE KeyHandle, WORD NodeId, DWORD NominalCurrent, DWORD MaxOutputCurrent, WORD ThermalTimeConstant, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_SetEcMotorParameter(HANDLE KeyHandle, WORD NodeId, WORD NominalCurrent, WORD MaxOutputCurrent, WORD ThermalTimeConstant, BYTE NbOfPolePairs, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_SetEcMotorParameterEx(HANDLE KeyHandle, WORD NodeId, DWORD NominalCurrent, DWORD MaxOutputCurrent, WORD ThermalTimeConstant, BYTE NbOfPolePairs, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_GetMotorType(HANDLE KeyHandle, WORD NodeId, WORD* pMotorType, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_GetDcMotorParameter(HANDLE KeyHandle, WORD NodeId, WORD* pNominalCurrent, WORD* pMaxOutputCurrent, WORD* pThermalTimeConstant, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_GetDcMotorParameterEx(HANDLE KeyHandle, WORD NodeId, DWORD* pNominalCurrent, DWORD* pMaxOutputCurrent, WORD* pThermalTimeConstant, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_GetEcMotorParameter(HANDLE KeyHandle, WORD NodeId, WORD* pNominalCurrent, WORD* pMaxOutputCurrent, WORD* pThermalTimeConstant, BYTE* pNbOfPolePairs, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_GetEcMotorParameterEx(HANDLE KeyHandle, WORD NodeId, DWORD* pNominalCurrent, DWORD* pMaxOutputCurrent, WORD* pThermalTimeConstant, BYTE* pNbOfPolePairs, DWORD* pErrorCode);

    //Sensor
    Configuration_DllExport BOOL __stdcall VCS_SetSensorType(HANDLE KeyHandle, WORD NodeId, WORD SensorType, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_SetIncEncoderParameter(HANDLE KeyHandle, WORD NodeId, DWORD EncoderResolution, BOOL InvertedPolarity, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_SetHallSensorParameter(HANDLE KeyHandle, WORD NodeId, BOOL InvertedPolarity, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_SetSsiAbsEncoderParameter(HANDLE KeyHandle, WORD NodeId, WORD DataRate, WORD NbOfMultiTurnDataBits, WORD NbOfSingleTurnDataBits, BOOL InvertedPolarity, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_SetSsiAbsEncoderParameterEx(HANDLE KeyHandle, WORD NodeId, WORD DataRate, WORD NbOfMultiTurnDataBits, WORD NbOfSingleTurnDataBits, WORD NbOfSpecialDataBits, BOOL InvertedPolarity, WORD Timeout, WORD PowerupTime, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_GetSensorType(HANDLE KeyHandle, WORD NodeId, WORD* pSensorType, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_GetIncEncoderParameter(HANDLE KeyHandle, WORD NodeId, DWORD* pEncoderResolution, BOOL* pInvertedPolarity, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_GetHallSensorParameter(HANDLE KeyHandle, WORD NodeId, BOOL* pInvertedPolarity, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_GetSsiAbsEncoderParameter(HANDLE KeyHandle, WORD NodeId, WORD* pDataRate, WORD* pNbOfMultiTurnDataBits, WORD* pNbOfSingleTurnDataBits, BOOL* pInvertedPolarity, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_GetSsiAbsEncoderParameterEx(HANDLE KeyHandle, WORD NodeId, WORD* pDataRate, WORD* pNbOfMultiTurnDataBits, WORD* pNbOfSingleTurnDataBits, WORD* pNbOfSpecialDataBits, BOOL* pInvertedPolarity, WORD* pTimeout, WORD* pPowerupTime, DWORD* pErrorCode);

    //Safety
    Configuration_DllExport BOOL __stdcall VCS_SetMaxFollowingError(HANDLE KeyHandle, WORD NodeId, DWORD MaxFollowingError, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_GetMaxFollowingError(HANDLE KeyHandle, WORD NodeId, DWORD* pMaxFollowingError, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_SetMaxProfileVelocity(HANDLE KeyHandle, WORD NodeId, DWORD MaxProfileVelocity, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_GetMaxProfileVelocity(HANDLE KeyHandle, WORD NodeId, DWORD* pMaxProfileVelocity, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_SetMaxAcceleration(HANDLE KeyHandle, WORD NodeId, DWORD MaxAcceleration, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_GetMaxAcceleration(HANDLE KeyHandle, WORD NodeId, DWORD* pMaxAcceleration, DWORD* pErrorCode);

    //Controller Gains
    Configuration_DllExport BOOL __stdcall VCS_SetControllerGain(HANDLE KeyHandle, WORD NodeId, WORD EController, WORD EGain, DWORD64 Value, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_GetControllerGain(HANDLE KeyHandle, WORD NodeId, WORD EController, WORD EGain, DWORD64* pValue, DWORD* pErrorCode);

    //Inputs/Outputs
    Configuration_DllExport BOOL __stdcall VCS_DigitalInputConfiguration(HANDLE KeyHandle, WORD NodeId, WORD DigitalInputNb, WORD Configuration, BOOL Mask, BOOL Polarity, BOOL ExecutionMask, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_DigitalOutputConfiguration(HANDLE KeyHandle, WORD NodeId, WORD DigitalOutputNb, WORD Configuration, BOOL State, BOOL Mask, BOOL Polarity, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_AnalogInputConfiguration(HANDLE KeyHandle, WORD NodeId, WORD AnalogInputNb, WORD Configuration, BOOL ExecutionMask, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_AnalogOutputConfiguration(HANDLE KeyHandle, WORD NodeId, WORD AnalogOutputNb, WORD Configuration, DWORD* pErrorCode);

    //Units
    Configuration_DllExport BOOL __stdcall VCS_SetVelocityUnits(HANDLE KeyHandle, WORD NodeId, BYTE VelDimension, char VelNotation, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_GetVelocityUnits(HANDLE KeyHandle, WORD NodeId, BYTE* pVelDimension, char* pVelNotation, DWORD* pErrorCode);

    //Compatibility Functions (do not use)
    Configuration_DllExport BOOL __stdcall VCS_SetMotorParameter(HANDLE KeyHandle, WORD NodeId, WORD MotorType, WORD ContinuousCurrent, WORD PeakCurrent, BYTE PolePair, WORD ThermalTimeConstant, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_SetEncoderParameter(HANDLE KeyHandle, WORD NodeId, WORD Counts, WORD PositionSensorType, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_GetMotorParameter(HANDLE KeyHandle, WORD NodeId, WORD* pMotorType, WORD* pContinuousCurrent, WORD* pPeakCurrent, BYTE* pPolePair, WORD* pThermalTimeConstant, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_GetEncoderParameter(HANDLE KeyHandle, WORD NodeId, WORD* pCounts, WORD* pPositionSensorType, DWORD* pErrorCode);

    Configuration_DllExport BOOL __stdcall VCS_SetPositionRegulatorGain(HANDLE KeyHandle, WORD NodeId, WORD P, WORD I, WORD D, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_SetPositionRegulatorFeedForward(HANDLE KeyHandle, WORD NodeId, WORD VelocityFeedForward, WORD AccelerationFeedForward, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_GetPositionRegulatorGain(HANDLE KeyHandle, WORD NodeId, WORD* pP, WORD* pI, WORD* pD, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_GetPositionRegulatorFeedForward(HANDLE KeyHandle, WORD NodeId, WORD* pVelocityFeedForward, WORD* pAccelerationFeedForward, DWORD* pErrorCode);

    Configuration_DllExport BOOL __stdcall VCS_SetVelocityRegulatorGain(HANDLE KeyHandle, WORD NodeId, WORD P, WORD I, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_SetVelocityRegulatorFeedForward(HANDLE KeyHandle, WORD NodeId, WORD VelocityFeedForward, WORD AccelerationFeedForward, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_GetVelocityRegulatorGain(HANDLE KeyHandle, WORD NodeId, WORD* pP, WORD* pI, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_GetVelocityRegulatorFeedForward(HANDLE KeyHandle, WORD NodeId, WORD* pVelocityFeedForward, WORD* pAccelerationFeedForward, DWORD* pErrorCode);

    Configuration_DllExport BOOL __stdcall VCS_SetCurrentRegulatorGain(HANDLE KeyHandle, WORD NodeId, WORD P, WORD I, DWORD* pErrorCode);
    Configuration_DllExport BOOL __stdcall VCS_GetCurrentRegulatorGain(HANDLE KeyHandle, WORD NodeId, WORD* pP, WORD* pI, DWORD* pErrorCode);

//*******************************************************************************************************************
// OPERATION FUNCTIONS
//*******************************************************************************************************************

//OperationMode
    Status_DllExport BOOL __stdcall VCS_SetOperationMode(HANDLE KeyHandle, WORD NodeId, __int8 OperationMode, DWORD* pErrorCode);
    Status_DllExport BOOL __stdcall VCS_GetOperationMode(HANDLE KeyHandle, WORD NodeId, __int8* pOperationMode, DWORD* pErrorCode);

//StateMachine
    StateMachine_DllExport BOOL __stdcall VCS_ResetDevice(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    StateMachine_DllExport BOOL __stdcall VCS_SetState(HANDLE KeyHandle, WORD NodeId, WORD State, DWORD* pErrorCode);
    StateMachine_DllExport BOOL __stdcall VCS_SetEnableState(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    StateMachine_DllExport BOOL __stdcall VCS_SetDisableState(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    StateMachine_DllExport BOOL __stdcall VCS_SetQuickStopState(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    StateMachine_DllExport BOOL __stdcall VCS_ClearFault(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    StateMachine_DllExport BOOL __stdcall VCS_GetState(HANDLE KeyHandle, WORD NodeId, WORD* pState, DWORD* pErrorCode);
    StateMachine_DllExport BOOL __stdcall VCS_GetEnableState(HANDLE KeyHandle, WORD NodeId, BOOL* pIsEnabled, DWORD* pErrorCode);
    StateMachine_DllExport BOOL __stdcall VCS_GetDisableState(HANDLE KeyHandle, WORD NodeId, BOOL* pIsDisabled, DWORD* pErrorCode);
    StateMachine_DllExport BOOL __stdcall VCS_GetQuickStopState(HANDLE KeyHandle, WORD NodeId, BOOL* pIsQuickStopped, DWORD* pErrorCode);
    StateMachine_DllExport BOOL __stdcall VCS_GetFaultState(HANDLE KeyHandle, WORD NodeId, BOOL* pIsInFault, DWORD* pErrorCode);

//ErrorHandling
    ErrorHandling_DllExport BOOL __stdcall VCS_GetNbOfDeviceError(HANDLE KeyHandle, WORD NodeId, BYTE* pNbDeviceError, DWORD* pErrorCode);
    ErrorHandling_DllExport BOOL __stdcall VCS_GetDeviceErrorCode(HANDLE KeyHandle, WORD NodeId, BYTE ErrorNumber, DWORD* pDeviceErrorCode, DWORD* pErrorCode);

//Motion Info
    MotionInfo_DllExport BOOL __stdcall VCS_GetMovementState(HANDLE KeyHandle, WORD NodeId, BOOL* pTargetReached, DWORD* pErrorCode);
    MotionInfo_DllExport BOOL __stdcall VCS_GetPositionIs(HANDLE KeyHandle, WORD NodeId, long* pPositionIs, DWORD* pErrorCode);
    MotionInfo_DllExport BOOL __stdcall VCS_GetVelocityIs(HANDLE KeyHandle, WORD NodeId, long* pVelocityIs, DWORD* pErrorCode);
    MotionInfo_DllExport BOOL __stdcall VCS_GetVelocityIsAveraged(HANDLE KeyHandle, WORD NodeId, long* pVelocityIsAveraged, DWORD* pErrorCode);
    MotionInfo_DllExport BOOL __stdcall VCS_GetCurrentIs(HANDLE KeyHandle, WORD NodeId, short* pCurrentIs, DWORD* pErrorCode);
    MotionInfo_DllExport BOOL __stdcall VCS_GetCurrentIsEx(HANDLE KeyHandle, WORD NodeId, long* pCurrentIs, DWORD* pErrorCode);
    MotionInfo_DllExport BOOL __stdcall VCS_GetCurrentIsAveraged(HANDLE KeyHandle, WORD NodeId, short* pCurrentIsAveraged, DWORD* pErrorCode);
    MotionInfo_DllExport BOOL __stdcall VCS_GetCurrentIsAveragedEx(HANDLE KeyHandle, WORD NodeId, long* pCurrentIsAveraged, DWORD* pErrorCode);
    MotionInfo_DllExport BOOL __stdcall VCS_WaitForTargetReached(HANDLE KeyHandle, WORD NodeId, DWORD Timeout, DWORD* pErrorCode);

//Profile Position Mode
    ProfilePositionMode_DllExport BOOL __stdcall VCS_ActivateProfilePositionMode(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    ProfilePositionMode_DllExport BOOL __stdcall VCS_SetPositionProfile(HANDLE KeyHandle, WORD NodeId, DWORD ProfileVelocity, DWORD ProfileAcceleration, DWORD ProfileDeceleration, DWORD* pErrorCode);
    ProfilePositionMode_DllExport BOOL __stdcall VCS_GetPositionProfile(HANDLE KeyHandle, WORD NodeId, DWORD* pProfileVelocity, DWORD* pProfileAcceleration, DWORD* pProfileDeceleration, DWORD* pErrorCode);
    ProfilePositionMode_DllExport BOOL __stdcall VCS_MoveToPosition(HANDLE KeyHandle, WORD NodeId, long TargetPosition, BOOL Absolute, BOOL Immediately, DWORD* pErrorCode);
    ProfilePositionMode_DllExport BOOL __stdcall VCS_GetTargetPosition(HANDLE KeyHandle, WORD NodeId, long* pTargetPosition, DWORD* pErrorCode);
    ProfilePositionMode_DllExport BOOL __stdcall VCS_HaltPositionMovement(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);

    //Advanced Functions
    ProfilePositionMode_DllExport BOOL __stdcall VCS_EnablePositionWindow(HANDLE KeyHandle, WORD NodeId, DWORD PositionWindow, WORD PositionWindowTime, DWORD* pErrorCode);
    ProfilePositionMode_DllExport BOOL __stdcall VCS_DisablePositionWindow(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);

//Profile Velocity Mode
    ProfileVelocityMode_DllExport BOOL __stdcall VCS_ActivateProfileVelocityMode(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    ProfileVelocityMode_DllExport BOOL __stdcall VCS_SetVelocityProfile(HANDLE KeyHandle, WORD NodeId, DWORD ProfileAcceleration, DWORD ProfileDeceleration, DWORD* pErrorCode);
    ProfileVelocityMode_DllExport BOOL __stdcall VCS_GetVelocityProfile(HANDLE KeyHandle, WORD NodeId, DWORD* pProfileAcceleration, DWORD* pProfileDeceleration, DWORD* pErrorCode);
    ProfileVelocityMode_DllExport BOOL __stdcall VCS_MoveWithVelocity(HANDLE KeyHandle, WORD NodeId, long TargetVelocity, DWORD* pErrorCode);
    ProfileVelocityMode_DllExport BOOL __stdcall VCS_GetTargetVelocity(HANDLE KeyHandle, WORD NodeId, long* pTargetVelocity, DWORD* pErrorCode);
    ProfileVelocityMode_DllExport BOOL __stdcall VCS_HaltVelocityMovement(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);

    //Advanced Functions
    ProfileVelocityMode_DllExport BOOL __stdcall VCS_EnableVelocityWindow(HANDLE KeyHandle, WORD NodeId, DWORD VelocityWindow, WORD VelocityWindowTime, DWORD* pErrorCode);
    ProfileVelocityMode_DllExport BOOL __stdcall VCS_DisableVelocityWindow(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);

//Homing Mode
    HomingMode_DllExport BOOL __stdcall VCS_ActivateHomingMode(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    HomingMode_DllExport BOOL __stdcall VCS_SetHomingParameter(HANDLE KeyHandle, WORD NodeId, DWORD HomingAcceleration, DWORD SpeedSwitch, DWORD SpeedIndex, long HomeOffset, WORD CurrentThreshold, long HomePosition, DWORD* pErrorCode);
    HomingMode_DllExport BOOL __stdcall VCS_GetHomingParameter(HANDLE KeyHandle, WORD NodeId, DWORD* pHomingAcceleration, DWORD* pSpeedSwitch, DWORD* pSpeedIndex, long* pHomeOffset, WORD* pCurrentThreshold, long* pHomePosition, DWORD* pErrorCode);
    HomingMode_DllExport BOOL __stdcall VCS_FindHome(HANDLE KeyHandle, WORD NodeId, __int8 HomingMethod, DWORD* pErrorCode);
    HomingMode_DllExport BOOL __stdcall VCS_StopHoming(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    HomingMode_DllExport BOOL __stdcall VCS_DefinePosition(HANDLE KeyHandle, WORD NodeId, long HomePosition, DWORD* pErrorCode);
    HomingMode_DllExport BOOL __stdcall VCS_WaitForHomingAttained(HANDLE KeyHandle, WORD NodeId, DWORD Timeout, DWORD* pErrorCode);
    HomingMode_DllExport BOOL __stdcall VCS_GetHomingState(HANDLE KeyHandle, WORD NodeId, BOOL* pHomingAttained, BOOL* pHomingError, DWORD* pErrorCode);

//Interpolated Position Mode
    InterpolatedPositionMode_DllExport BOOL __stdcall VCS_ActivateInterpolatedPositionMode(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    InterpolatedPositionMode_DllExport BOOL __stdcall VCS_SetIpmBufferParameter(HANDLE KeyHandle, WORD NodeId, WORD UnderflowWarningLimit, WORD OverflowWarningLimit, DWORD* pErrorCode);
    InterpolatedPositionMode_DllExport BOOL __stdcall VCS_GetIpmBufferParameter(HANDLE KeyHandle, WORD NodeId, WORD* pUnderflowWarningLimit, WORD* pOverflowWarningLimit, DWORD* pMaxBufferSize, DWORD* pErrorCode);
    InterpolatedPositionMode_DllExport BOOL __stdcall VCS_ClearIpmBuffer(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    InterpolatedPositionMode_DllExport BOOL __stdcall VCS_GetFreeIpmBufferSize(HANDLE KeyHandle, WORD NodeId, DWORD* pBufferSize, DWORD* pErrorCode);
    InterpolatedPositionMode_DllExport BOOL __stdcall VCS_AddPvtValueToIpmBuffer(HANDLE KeyHandle, WORD NodeId, long Position, long Velocity, BYTE Time, DWORD* pErrorCode);
    InterpolatedPositionMode_DllExport BOOL __stdcall VCS_StartIpmTrajectory(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    InterpolatedPositionMode_DllExport BOOL __stdcall VCS_StopIpmTrajectory(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    InterpolatedPositionMode_DllExport BOOL __stdcall VCS_GetIpmStatus(HANDLE KeyHandle, WORD NodeId, BOOL* pTrajectoryRunning, BOOL* pIsUnderflowWarning, BOOL* pIsOverflowWarning, BOOL* pIsVelocityWarning, BOOL* pIsAccelerationWarning, BOOL* pIsUnderflowError, BOOL* pIsOverflowError, BOOL* pIsVelocityError, BOOL* pIsAccelerationError, DWORD* pErrorCode);

//Position Mode
    PositionMode_DllExport BOOL __stdcall VCS_ActivatePositionMode(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    PositionMode_DllExport BOOL __stdcall VCS_SetPositionMust(HANDLE KeyHandle, WORD NodeId, long PositionMust, DWORD* pErrorCode);
    PositionMode_DllExport BOOL __stdcall VCS_GetPositionMust(HANDLE KeyHandle, WORD NodeId, long* pPositionMust, DWORD* pErrorCode);

    //Advanced Functions
    PositionMode_DllExport BOOL __stdcall VCS_ActivateAnalogPositionSetpoint(HANDLE KeyHandle, WORD NodeId, WORD AnalogInputNumber, float Scaling, long Offset, DWORD* pErrorCode);
    PositionMode_DllExport BOOL __stdcall VCS_DeactivateAnalogPositionSetpoint(HANDLE KeyHandle, WORD NodeId, WORD AnalogInputNumber, DWORD* pErrorCode);
    PositionMode_DllExport BOOL __stdcall VCS_EnableAnalogPositionSetpoint(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    PositionMode_DllExport BOOL __stdcall VCS_DisableAnalogPositionSetpoint(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);

//Velocity Mode
    VelocityMode_DllExport BOOL __stdcall VCS_ActivateVelocityMode(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    VelocityMode_DllExport BOOL __stdcall VCS_SetVelocityMust(HANDLE KeyHandle, WORD NodeId, long VelocityMust, DWORD* pErrorCode);
    VelocityMode_DllExport BOOL __stdcall VCS_GetVelocityMust(HANDLE KeyHandle, WORD NodeId, long* pVelocityMust, DWORD* pErrorCode);

    //Advanced Functions
    VelocityMode_DllExport BOOL __stdcall VCS_ActivateAnalogVelocitySetpoint(HANDLE KeyHandle, WORD NodeId, WORD AnalogInputNumber, float Scaling, long Offset, DWORD* pErrorCode);
    VelocityMode_DllExport BOOL __stdcall VCS_DeactivateAnalogVelocitySetpoint(HANDLE KeyHandle, WORD NodeId, WORD AnalogInputNumber, DWORD* pErrorCode);
    VelocityMode_DllExport BOOL __stdcall VCS_EnableAnalogVelocitySetpoint(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    VelocityMode_DllExport BOOL __stdcall VCS_DisableAnalogVelocitySetpoint(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);

//Current Mode
    CurrentMode_DllExport BOOL __stdcall VCS_ActivateCurrentMode(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    CurrentMode_DllExport BOOL __stdcall VCS_SetCurrentMust(HANDLE KeyHandle, WORD NodeId, short CurrentMust, DWORD* pErrorCode);
    CurrentMode_DllExport BOOL __stdcall VCS_SetCurrentMustEx(HANDLE KeyHandle, WORD NodeId, long CurrentMust, DWORD* pErrorCode);
    CurrentMode_DllExport BOOL __stdcall VCS_GetCurrentMust(HANDLE KeyHandle, WORD NodeId, short* pCurrentMust, DWORD* pErrorCode);
    CurrentMode_DllExport BOOL __stdcall VCS_GetCurrentMustEx(HANDLE KeyHandle, WORD NodeId, long* pCurrentMust, DWORD* pErrorCode);

    //Advanced Functions
    CurrentMode_DllExport BOOL __stdcall VCS_ActivateAnalogCurrentSetpoint(HANDLE KeyHandle, WORD NodeId, WORD AnalogInputNumber, float Scaling, short Offset, DWORD* pErrorCode);
    CurrentMode_DllExport BOOL __stdcall VCS_DeactivateAnalogCurrentSetpoint(HANDLE KeyHandle, WORD NodeId, WORD AnalogInputNumber, DWORD* pErrorCode);
    CurrentMode_DllExport BOOL __stdcall VCS_EnableAnalogCurrentSetpoint(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    CurrentMode_DllExport BOOL __stdcall VCS_DisableAnalogCurrentSetpoint(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);

//MasterEncoder Mode
    MasterEncoderMode_DllExport BOOL __stdcall VCS_ActivateMasterEncoderMode(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    MasterEncoderMode_DllExport BOOL __stdcall VCS_SetMasterEncoderParameter(HANDLE KeyHandle, WORD NodeId, WORD ScalingNumerator, WORD ScalingDenominator, BYTE Polarity, DWORD MaxVelocity, DWORD MaxAcceleration, DWORD* pErrorCode);
    MasterEncoderMode_DllExport BOOL __stdcall VCS_GetMasterEncoderParameter(HANDLE KeyHandle, WORD NodeId, WORD* pScalingNumerator, WORD* pScalingDenominator, BYTE* pPolarity, DWORD* pMaxVelocity, DWORD* pMaxAcceleration, DWORD* pErrorCode);

//StepDirection Mode
    StepDirectionMode_DllExport BOOL __stdcall VCS_ActivateStepDirectionMode(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    StepDirectionMode_DllExport BOOL __stdcall VCS_SetStepDirectionParameter(HANDLE KeyHandle, WORD NodeId, WORD ScalingNumerator, WORD ScalingDenominator, BYTE Polarity, DWORD MaxVelocity, DWORD MaxAcceleration, DWORD* pErrorCode);
    StepDirectionMode_DllExport BOOL __stdcall VCS_GetStepDirectionParameter(HANDLE KeyHandle, WORD NodeId, WORD* pScalingNumerator, WORD* pScalingDenominator, BYTE* pPolarity, DWORD* pMaxVelocity, DWORD* pMaxAcceleration, DWORD* pErrorCode);

//Inputs Outputs
    //General
    InputsOutputs_DllExport BOOL __stdcall VCS_GetAllDigitalInputs(HANDLE KeyHandle, WORD NodeId, WORD* pInputs, DWORD* pErrorCode);
    InputsOutputs_DllExport BOOL __stdcall VCS_GetAllDigitalOutputs(HANDLE KeyHandle, WORD NodeId, WORD* pOutputs, DWORD* pErrorCode);
    InputsOutputs_DllExport BOOL __stdcall VCS_SetAllDigitalOutputs(HANDLE KeyHandle, WORD NodeId, WORD Outputs, DWORD* pErrorCode);
    InputsOutputs_DllExport BOOL __stdcall VCS_GetAnalogInput(HANDLE KeyHandle, WORD NodeId, WORD InputNumber, WORD* pAnalogValue, DWORD* pErrorCode);
    InputsOutputs_DllExport BOOL __stdcall VCS_GetAnalogInputVoltage(HANDLE KeyHandle, WORD NodeId, WORD InputNumber, long* pVoltageValue, DWORD* pErrorCode);
    InputsOutputs_DllExport BOOL __stdcall VCS_GetAnalogInputState(HANDLE KeyHandle, WORD NodeId, WORD Configuration, long* pStateValue, DWORD* pErrorCode);
    InputsOutputs_DllExport BOOL __stdcall VCS_SetAnalogOutput(HANDLE KeyHandle, WORD NodeId, WORD OutputNumber, WORD AnalogValue, DWORD* pErrorCode);
    InputsOutputs_DllExport BOOL __stdcall VCS_SetAnalogOutputVoltage(HANDLE KeyHandle, WORD NodeId, WORD OutputNumber, long VoltageValue, DWORD* pErrorCode);
    InputsOutputs_DllExport BOOL __stdcall VCS_SetAnalogOutputState(HANDLE KeyHandle, WORD NodeId, WORD Configuration, long StateValue, DWORD* pErrorCode);

    //Position Compare
    InputsOutputs_DllExport BOOL __stdcall VCS_SetPositionCompareParameter(HANDLE KeyHandle, WORD NodeId, BYTE OperationalMode, BYTE IntervalMode, BYTE DirectionDependency, WORD IntervalWidth, WORD IntervalRepetitions, WORD PulseWidth, DWORD* pErrorCode);
    InputsOutputs_DllExport BOOL __stdcall VCS_GetPositionCompareParameter(HANDLE KeyHandle, WORD NodeId, BYTE* pOperationalMode, BYTE* pIntervalMode, BYTE* pDirectionDependency, WORD* pIntervalWidth, WORD* pIntervalRepetitions, WORD* pPulseWidth, DWORD* pErrorCode);
    InputsOutputs_DllExport BOOL __stdcall VCS_ActivatePositionCompare(HANDLE KeyHandle, WORD NodeId, WORD DigitalOutputNumber, BOOL Polarity, DWORD* pErrorCode);
    InputsOutputs_DllExport BOOL __stdcall VCS_DeactivatePositionCompare(HANDLE KeyHandle, WORD NodeId, WORD DigitalOutputNumber, DWORD* pErrorCode);
    InputsOutputs_DllExport BOOL __stdcall VCS_EnablePositionCompare(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    InputsOutputs_DllExport BOOL __stdcall VCS_DisablePositionCompare(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    InputsOutputs_DllExport BOOL __stdcall VCS_SetPositionCompareReferencePosition(HANDLE KeyHandle, WORD NodeId, long ReferencePosition, DWORD* pErrorCode);

    //Position Marker
    InputsOutputs_DllExport BOOL __stdcall VCS_SetPositionMarkerParameter(HANDLE KeyHandle, WORD NodeId, BYTE PositionMarkerEdgeType, BYTE PositionMarkerMode, DWORD* pErrorCode);
    InputsOutputs_DllExport BOOL __stdcall VCS_GetPositionMarkerParameter(HANDLE KeyHandle, WORD NodeId, BYTE* pPositionMarkerEdgeType, BYTE* pPositionMarkerMode, DWORD* pErrorCode);
    InputsOutputs_DllExport BOOL __stdcall VCS_ActivatePositionMarker(HANDLE KeyHandle, WORD NodeId, WORD DigitalInputNumber, BOOL Polarity, DWORD* pErrorCode);
    InputsOutputs_DllExport BOOL __stdcall VCS_DeactivatePositionMarker(HANDLE KeyHandle, WORD NodeId, WORD DigitalInputNumber, DWORD* pErrorCode);
    InputsOutputs_DllExport BOOL __stdcall VCS_ReadPositionMarkerCounter(HANDLE KeyHandle, WORD NodeId, WORD* pCount, DWORD* pErrorCode);
    InputsOutputs_DllExport BOOL __stdcall VCS_ReadPositionMarkerCapturedPosition(HANDLE KeyHandle, WORD NodeId, WORD CounterIndex, long* pCapturedPosition, DWORD* pErrorCode);
    InputsOutputs_DllExport BOOL __stdcall VCS_ResetPositionMarkerCounter(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);

//*******************************************************************************************************************
// DATA RECORDING FUNCTIONS
//*******************************************************************************************************************

//DataRecorder Setup
    DataRecording_DllExport BOOL __stdcall VCS_SetRecorderParameter(HANDLE KeyHandle, WORD NodeId, WORD SamplingPeriod, WORD NbOfPrecedingSamples, DWORD* pErrorCode);
    DataRecording_DllExport BOOL __stdcall VCS_GetRecorderParameter(HANDLE KeyHandle, WORD NodeId, WORD* pSamplingPeriod, WORD* pNbOfPrecedingSamples, DWORD* pErrorCode);
    DataRecording_DllExport BOOL __stdcall VCS_EnableTrigger(HANDLE KeyHandle, WORD NodeId, BYTE TriggerType, DWORD* pErrorCode);
    DataRecording_DllExport BOOL __stdcall VCS_DisableAllTriggers(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    DataRecording_DllExport BOOL __stdcall VCS_ActivateChannel(HANDLE KeyHandle, WORD NodeId, BYTE ChannelNumber, WORD ObjectIndex, BYTE ObjectSubIndex, BYTE ObjectSize, DWORD* pErrorCode);
    DataRecording_DllExport BOOL __stdcall VCS_DeactivateAllChannels(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);

//DataRecorder Status
    DataRecording_DllExport BOOL __stdcall VCS_StartRecorder(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    DataRecording_DllExport BOOL __stdcall VCS_StopRecorder(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    DataRecording_DllExport BOOL __stdcall VCS_ForceTrigger(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    DataRecording_DllExport BOOL __stdcall VCS_IsRecorderRunning(HANDLE KeyHandle, WORD NodeId, BOOL* pRunning, DWORD* pErrorCode);
    DataRecording_DllExport BOOL __stdcall VCS_IsRecorderTriggered(HANDLE KeyHandle, WORD NodeId, BOOL* pTriggered, DWORD* pErrorCode);

//DataRecorder Data
    DataRecording_DllExport BOOL __stdcall VCS_ReadChannelVectorSize(HANDLE KeyHandle, WORD NodeId, DWORD* pVectorSize, DWORD* pErrorCode);
    DataRecording_DllExport BOOL __stdcall VCS_ReadChannelDataVector(HANDLE KeyHandle, WORD NodeId, BYTE ChannelNumber, BYTE* pDataVectorBuffer, DWORD VectorBufferSize, DWORD* pErrorCode);
    DataRecording_DllExport BOOL __stdcall VCS_ShowChannelDataDlg(HANDLE KeyHandle, WORD NodeId, DWORD* pErrorCode);
    DataRecording_DllExport BOOL __stdcall VCS_ExportChannelDataToFile(HANDLE KeyHandle, WORD NodeId, char* FileName, DWORD* pErrorCode);

//Advanced Functions
    DataRecording_DllExport BOOL __stdcall VCS_ReadDataBuffer(HANDLE KeyHandle, WORD NodeId, BYTE* pDataBuffer, DWORD BufferSizeToRead, DWORD* pBufferSizeRead, WORD* pVectorStartOffset, WORD* pMaxNbOfSamples, WORD* pNbOfRecordedSamples, DWORD* pErrorCode);
    DataRecording_DllExport BOOL __stdcall VCS_ExtractChannelDataVector(HANDLE KeyHandle, WORD NodeId, BYTE ChannelNumber, BYTE* pDataBuffer, DWORD BufferSize, BYTE* pDataVectorBuffer, DWORD VectorBufferSize, WORD VectorStartOffset, WORD MaxNbOfSamples, WORD NbOfRecordedSamples, DWORD* pErrorCode);

//*******************************************************************************************************************
// LOW LAYER FUNCTIONS
//*******************************************************************************************************************

//CanLayer Functions
    CanLayer_DllExport BOOL __stdcall VCS_SendCANFrame(HANDLE KeyHandle, WORD CobID, WORD Length, void* pData, DWORD* pErrorCode);
    CanLayer_DllExport BOOL __stdcall VCS_ReadCANFrame(HANDLE KeyHandle, WORD CobID, WORD Length, void* pData, DWORD Timeout, DWORD* pErrorCode);
    CanLayer_DllExport BOOL __stdcall VCS_RequestCANFrame(HANDLE KeyHandle, WORD CobID, WORD Length, void* pData, DWORD* pErrorCode);
    CanLayer_DllExport BOOL __stdcall VCS_SendNMTService(HANDLE KeyHandle, WORD NodeId, WORD CommandSpecifier, DWORD* pErrorCode);

//*******************************************************************************************************************
// TYPE DEFINITIONS
//*******************************************************************************************************************

//Communication
    //Dialog Mode
    const int DM_PROGRESS_DLG                                       = 0;
    const int DM_PROGRESS_AND_CONFIRM_DLG                           = 1;
    const int DM_CONFIRM_DLG                                        = 2;
    const int DM_NO_DLG                                             = 3;

//Configuration
    //MotorType
    const WORD MT_DC_MOTOR                                          = 1;
    const WORD MT_EC_SINUS_COMMUTATED_MOTOR                         = 10;
    const WORD MT_EC_BLOCK_COMMUTATED_MOTOR                         = 11;

    //SensorType
    const WORD ST_UNKNOWN                                           = 0;
    const WORD ST_INC_ENCODER_3CHANNEL                              = 1;
    const WORD ST_INC_ENCODER_2CHANNEL                              = 2;
    const WORD ST_HALL_SENSORS                                      = 3;
    const WORD ST_SSI_ABS_ENCODER_BINARY                            = 4;
    const WORD ST_SSI_ABS_ENCODER_GREY                              = 5;
    const WORD ST_INC_ENCODER2_3CHANNEL                             = 6;
    const WORD ST_INC_ENCODER2_2CHANNEL                             = 7;
    const WORD ST_ANALOG_INC_ENCODER_3CHANNEL                       = 8;
    const WORD ST_ANALOG_INC_ENCODER_2CHANNEL                       = 9;

//In- and outputs
    //Digital input configuration
    const WORD DIC_NEGATIVE_LIMIT_SWITCH                            = 0;
    const WORD DIC_POSITIVE_LIMIT_SWITCH                            = 1;
    const WORD DIC_HOME_SWITCH                                      = 2;
    const WORD DIC_POSITION_MARKER                                  = 3;
    const WORD DIC_DRIVE_ENABLE                                     = 4;
    const WORD DIC_QUICK_STOP                                       = 5;
    const WORD DIC_GENERAL_PURPOSE_J                                = 6;
    const WORD DIC_GENERAL_PURPOSE_I                                = 7;
    const WORD DIC_GENERAL_PURPOSE_H                                = 8;
    const WORD DIC_GENERAL_PURPOSE_G                                = 9;
    const WORD DIC_GENERAL_PURPOSE_F                                = 10;
    const WORD DIC_GENERAL_PURPOSE_E                                = 11;
    const WORD DIC_GENERAL_PURPOSE_D                                = 12;
    const WORD DIC_GENERAL_PURPOSE_C                                = 13;
    const WORD DIC_GENERAL_PURPOSE_B                                = 14;
    const WORD DIC_GENERAL_PURPOSE_A                                = 15;

    //Digital output configuration
    const WORD DOC_READY_FAULT                                      = 0;
    const WORD DOC_POSITION_COMPARE                                 = 1;
    const WORD DOC_GENERAL_PURPOSE_H                                = 8;
    const WORD DOC_GENERAL_PURPOSE_G                                = 9;
    const WORD DOC_GENERAL_PURPOSE_F                                = 10;
    const WORD DOC_GENERAL_PURPOSE_E                                = 11;
    const WORD DOC_GENERAL_PURPOSE_D                                = 12;
    const WORD DOC_GENERAL_PURPOSE_C                                = 13;
    const WORD DOC_GENERAL_PURPOSE_B                                = 14;
    const WORD DOC_GENERAL_PURPOSE_A                                = 15;

    //Analog input configuration
    const WORD AIC_ANALOG_CURRENT_SETPOINT                          = 0;
    const WORD AIC_ANALOG_VELOCITY_SETPOINT                         = 1;
    const WORD AIC_ANALOG_POSITION_SETPOINT                         = 2;
    const WORD AIC_GENERAL_PURPOSE_H                                = 8;
    const WORD AIC_GENERAL_PURPOSE_G                                = 9;
    const WORD AIC_GENERAL_PURPOSE_F                                = 10;
    const WORD AIC_GENERAL_PURPOSE_E                                = 11;
    const WORD AIC_GENERAL_PURPOSE_D                                = 12;
    const WORD AIC_GENERAL_PURPOSE_C                                = 13;
    const WORD AIC_GENERAL_PURPOSE_B                                = 14;
    const WORD AIC_GENERAL_PURPOSE_A                                = 15;

    //Analog output configuration
    const WORD AOC_GENERAL_PURPOSE_A                                = 0;
    const WORD AOC_GENERAL_PURPOSE_B                                = 1;

//Units
    //VelocityDimension
    const BYTE VD_RPM                                               = 0xA4;

    //VelocityNotation
    const char VN_STANDARD                                          = 0;
    const char VN_DECI                                              = -1;
    const char VN_CENTI                                             = -2;
    const char VN_MILLI                                             = -3;

//Operational mode
    const __int8 OMD_PROFILE_POSITION_MODE                          = 1;
    const __int8 OMD_PROFILE_VELOCITY_MODE                          = 3;
    const __int8 OMD_HOMING_MODE                                    = 6;
    const __int8 OMD_INTERPOLATED_POSITION_MODE                     = 7;
    const __int8 OMD_POSITION_MODE                                  = -1;
    const __int8 OMD_VELOCITY_MODE                                  = -2;
    const __int8 OMD_CURRENT_MODE                                   = -3;
    const __int8 OMD_MASTER_ENCODER_MODE                            = -5;
    const __int8 OMD_STEP_DIRECTION_MODE                            = -6;

//States
    const WORD ST_DISABLED                                          = 0;
    const WORD ST_ENABLED                                           = 1;
    const WORD ST_QUICKSTOP                                         = 2;
    const WORD ST_FAULT                                             = 3;

//Homing mode
    //Homing method
    const __int8 HM_ACTUAL_POSITION                                 = 35;
    const __int8 HM_NEGATIVE_LIMIT_SWITCH                           = 17;
    const __int8 HM_NEGATIVE_LIMIT_SWITCH_AND_INDEX                 = 1;
    const __int8 HM_POSITIVE_LIMIT_SWITCH                           = 18;
    const __int8 HM_POSITIVE_LIMIT_SWITCH_AND_INDEX                 = 2;
    const __int8 HM_HOME_SWITCH_POSITIVE_SPEED                      = 23;
    const __int8 HM_HOME_SWITCH_POSITIVE_SPEED_AND_INDEX            = 7;
    const __int8 HM_HOME_SWITCH_NEGATIVE_SPEED                      = 27;
    const __int8 HM_HOME_SWITCH_NEGATIVE_SPEED_AND_INDEX            = 11;
    const __int8 HM_CURRENT_THRESHOLD_POSITIVE_SPEED                = -3;
    const __int8 HM_CURRENT_THRESHOLD_POSITIVE_SPEED_AND_INDEX      = -1;
    const __int8 HM_CURRENT_THRESHOLD_NEGATIVE_SPEED                = -4;
    const __int8 HM_CURRENT_THRESHOLD_NEGATIVE_SPEED_AND_INDEX      = -2;
    const __int8 HM_INDEX_POSITIVE_SPEED                            = 34;
    const __int8 HM_INDEX_NEGATIVE_SPEED                            = 33;

//Input Output PositionMarker
    //PositionMarkerEdgeType
    const BYTE PET_BOTH_EDGES                                       = 0;
    const BYTE PET_RISING_EDGE                                      = 1;
    const BYTE PET_FALLING_EDGE                                     = 2;

    //PositionMarkerMode
    const BYTE PM_CONTINUOUS                                        = 0;
    const BYTE PM_SINGLE                                            = 1;
    const BYTE PM_MULTIPLE                                          = 2;

//Input Output PositionCompare
    //PositionCompareOperationalMode
    const BYTE PCO_SINGLE_POSITION_MODE                             = 0;
    const BYTE PCO_POSITION_SEQUENCE_MODE                           = 1;

    //PositionCompareIntervalMode
    const BYTE PCI_NEGATIVE_DIR_TO_REFPOS                           = 0;
    const BYTE PCI_POSITIVE_DIR_TO_REFPOS                           = 1;
    const BYTE PCI_BOTH_DIR_TO_REFPOS                               = 2;

    //PositionCompareDirectionDependency
    const BYTE PCD_MOTOR_DIRECTION_NEGATIVE                         = 0;
    const BYTE PCD_MOTOR_DIRECTION_POSITIVE                         = 1;
    const BYTE PCD_MOTOR_DIRECTION_BOTH                             = 2;

//Data recorder
    //Trigger type
    const WORD DR_MOVEMENT_START_TRIGGER                            = 1;    //bit 1
    const WORD DR_ERROR_TRIGGER                                     = 2;    //bit 2
    const WORD DR_DIGITAL_INPUT_TRIGGER                             = 4;    //bit 3
    const WORD DR_MOVEMENT_END_TRIGGER                              = 8;    //bit 4

//CanLayer Functions
    const WORD NCS_START_REMOTE_NODE                                = 1;
    const WORD NCS_STOP_REMOTE_NODE                                 = 2;
    const WORD NCS_ENTER_PRE_OPERATIONAL                            = 128;
    const WORD NCS_RESET_NODE                                       = 129;
    const WORD NCS_RESET_COMMUNICATION                              = 130;

// Controller Gains
    // EController
    const WORD EC_PI_CURRENT_CONTROLLER                             = 1;
    const WORD EC_PI_VELOCITY_CONTROLLER                            = 10;
    const WORD EC_PI_VELOCITY_CONTROLLER_WITH_OBSERVER              = 11;
    const WORD EC_PID_POSITION_CONTROLLER                           = 20;
    const WORD EC_DUAL_LOOP_POSITION_CONTROLLER                     = 21;

    // EGain (EC_PI_CURRENT_CONTROLLER)
    const WORD EG_PICC_P_GAIN                                       = 1;
    const WORD EG_PICC_I_GAIN                                       = 2;

    // EGain (EC_PI_VELOCITY_CONTROLLER)
    const WORD EG_PIVC_P_GAIN                                       = 1;
    const WORD EG_PIVC_I_GAIN                                       = 2;
    const WORD EG_PIVC_FEED_FORWARD_VELOCITY_GAIN                   = 10;
    const WORD EG_PIVC_FEED_FORWARD_ACCELERATION_GAIN               = 11;

    // EGain (EC_PI_VELOCITY_CONTROLLER_WITH_OBSERVER)
    const WORD EG_PIVCWO_P_GAIN                                     = 1;
    const WORD EG_PIVCWO_I_GAIN                                     = 2;
    const WORD EG_PIVCWO_FEED_FORWARD_VELOCITY_GAIN                 = 10;
    const WORD EG_PIVCWO_FEED_FORWARD_ACCELERATION_GAIN             = 11;
    const WORD EG_PIVCWO_OBSERVER_THETA_GAIN                        = 20;
    const WORD EG_PIVCWO_OBSERVER_OMEGA_GAIN                        = 21;
    const WORD EG_PIVCWO_OBSERVER_TAU_GAIN                          = 22;

    // EGain (EC_PID_POSITION_CONTROLLER)
    const WORD EG_PIDPC_P_GAIN                                      = 1;
    const WORD EG_PIDPC_I_GAIN                                      = 2;
    const WORD EG_PIDPC_D_GAIN                                      = 3;
    const WORD EG_PIDPC_FEED_FORWARD_VELOCITY_GAIN                  = 10;
    const WORD EG_PIDPC_FEED_FORWARD_ACCELERATION_GAIN              = 11;

    // EGain (EC_DUAL_LOOP_POSITION_CONTROLLER)
    const WORD EG_DLPC_AUXILIARY_LOOP_P_GAIN                            = 1;
    const WORD EG_DLPC_AUXILIARY_LOOP_I_GAIN                            = 2;
    const WORD EG_DLPC_AUXILIARY_LOOP_FEED_FORWARD_VELOCITY_GAIN        = 10;
    const WORD EG_DLPC_AUXILIARY_LOOP_FEED_FORWARD_ACCELERATION_GAIN    = 11;
    const WORD EG_DLPC_AUXILIARY_LOOP_OBSERVER_THETA_GAIN               = 20;
    const WORD EG_DLPC_AUXILIARY_LOOP_OBSERVER_OMEGA_GAIN               = 21;
    const WORD EG_DLPC_AUXILIARY_LOOP_OBSERVER_TAU_GAIN                 = 22;
    const WORD EG_DLPC_MAIN_LOOP_P_GAIN_LOW                             = 101;
    const WORD EG_DLPC_MAIN_LOOP_P_GAIN_HIGH                            = 102;
    const WORD EG_DLPC_MAIN_LOOP_GAIN_SCHEDULING_WEIGHT                 = 110;
    const WORD EG_DLPC_MAIN_LOOP_FILTER_COEFFICIENT_A                   = 120;
    const WORD EG_DLPC_MAIN_LOOP_FILTER_COEFFICIENT_B                   = 121;
    const WORD EG_DLPC_MAIN_LOOP_FILTER_COEFFICIENT_C                   = 122;
    const WORD EG_DLPC_MAIN_LOOP_FILTER_COEFFICIENT_D                   = 123;
    const WORD EG_DLPC_MAIN_LOOP_FILTER_COEFFICIENT_E                   = 124;

#endif  //EposCommandLibraryDefinitions

