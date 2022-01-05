#include "cmaxonmotor.h"
#include <string.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

CMaxonMotor::CMaxonMotor()
{
    PortName_MCP = "USB0";
    PortName_PIP = "USB1";

    nodeId_MCP = 1;
    nodeId_PIP = 1;

    ErrorCode = 0x00;
}


void CMaxonMotor::closeDevice(void *keyHandle_)
{
    unsigned int ErrorCode = 0;

    cout<<"Closing Device!"<<endl;

    if(keyHandle_ != 0)
        VCS_CloseDevice(keyHandle_, &ErrorCode);


    VCS_CloseAllDevices(&ErrorCode);
}


void CMaxonMotor::EnableDevice(void *keyHandle_, unsigned short nodeId)
{
    unsigned int ErrorCode = 0;
    int IsInFault = FALSE;


//    // Configuring Analog Input Model
//    if( VCS_AnalogInputConfiguration(keyHandle_, nodeId, 1, AIC_ANALOG_POSITION_SETPOINT, 1, &ErrorCode))
//    {
//        cout<<"Configured position analog input mode!"<<endl;
//    }
//    else
//    {
//        cout<<"Failed to configure position analog input mode!, error code="<<ErrorCode<<endl;
//    }

    if( VCS_GetFaultState(keyHandle_, nodeId, &IsInFault, &ErrorCode) )
    {
        if( IsInFault && !VCS_ClearFault(keyHandle_, nodeId, &ErrorCode) )
        {
            cout<<"Clear fault failed!, error code="<<ErrorCode<<endl;
            return;
        }

        int IsEnabled = FALSE;
        if( VCS_GetEnableState(keyHandle_, nodeId, &IsEnabled, &ErrorCode) )
        {
            if( !IsEnabled && !VCS_SetEnableState(keyHandle_, nodeId, &ErrorCode) )
            {
                cout<<"Set enable state failed!, error code="<<ErrorCode<<endl;
            }
            else
            {
                cout<<"Set enable state succeeded!"<<endl;
            }
        }
    }
    else
    {
        cout<<"Get fault state failed!, error code="<<ErrorCode<<endl;
    }

    if( !VCS_ActivateProfilePositionMode(keyHandle_, nodeId, &ErrorCode) )    {
        cout << "Activate profile position mode failed!" << endl;
    }


    unsigned int ProfileVelocity = 4000;
    unsigned int ProfileAcceleration = 61626;
    unsigned int ProfileDeceleration = 61626;

    if( !VCS_SetPositionProfile(keyHandle_, nodeId, ProfileVelocity, ProfileAcceleration, ProfileDeceleration, &ErrorCode) ) {
        cout << "VCS_SetPositionProfile failed!, error code="<<ErrorCode<<endl;
    }

//    // Enabling Position Analog Input Mode
//    if( VCS_EnableAnalogPositionSetpoint(keyHandle_, nodeId, &ErrorCode))
//    {
//        cout<<"Enabled position analog input mode!"<<endl;
//    }
//    else
//    {
//        cout<<"Failed to enable position analog input mode!, error code="<<ErrorCode<<endl;
//    }


//    float Scaling = 30000;
//    long Offset = 0;
//    if( VCS_ActivateAnalogPositionSetpoint(keyHandle_, nodeId, 1, Scaling, Offset, &ErrorCode))
//    {
//        cout<<"Activated position analog input mode!"<<endl;
//    }
//    else
//    {
//        cout<<"Failed to activate position analog input mode!, error code="<<ErrorCode<<endl;
//    }
}

void CMaxonMotor::DisableDevice(void *keyHandle_, unsigned short nodeId)
{
    unsigned int ErrorCode = 0;
    int IsInFault = FALSE;

//    // Disabling Position Analog Input Mode
//    if( VCS_DisableAnalogPositionSetpoint(keyHandle_, nodeId, &ErrorCode))
//    {
//        cout<<"Disabled position analog input mode!"<<endl;
//    }
//    else
//    {
//        cout<<"Failed to disable position analog input mode!, error code="<<ErrorCode<<endl;
//    }
//

//    // Deactivating Position Analog Input Mode
//    if( VCS_DeactivateAnalogPositionSetpoint(keyHandle_, nodeId, 1, &ErrorCode))
//    {
//        cout<<"Deactivated position analog input mode!"<<endl;
//    }
//    else
//    {
//        cout<<"Failed to deactivate position analog input mode!, error code="<<ErrorCode<<endl;
//    }

    if( VCS_GetFaultState(keyHandle_, nodeId, &IsInFault, &ErrorCode) )
    {
        if( IsInFault && !VCS_ClearFault(keyHandle_, nodeId, &ErrorCode) )
        {
            cout<<"Clear fault failed!, error code="<<ErrorCode<<endl;
            return;
        }

        int IsEnabled = FALSE;
        if( VCS_GetEnableState(keyHandle_, nodeId, &IsEnabled, &ErrorCode) )
        {
            if( IsEnabled && !VCS_SetDisableState(keyHandle_, nodeId, &ErrorCode) )
            {
                cout<<"Set disable state failed!, error code="<<ErrorCode<<endl;
            }
            else
            {
                cout<<"Set disable state succeeded!"<<endl;
            }
        }
    }
    else
    {
        cout<<"Get fault state failed!, error code="<<ErrorCode<<endl;
    }
}



void CMaxonMotor::Move(void *keyHandle_, long TargetPosition, unsigned short nodeId)
{

    unsigned int errorCode = 0;

    int Absolute = TRUE; // FALSE;
    int Immediately = TRUE;


    if( !VCS_MoveToPosition(keyHandle_, nodeId, TargetPosition, Absolute, Immediately, &errorCode) ) {
        cout << "Move to position failed!, error code="<<errorCode<<endl;
    }

//    unsigned int ErrorCode = 0;
//
//    unsigned int ProfileVelocity = 10000;
//    unsigned int ProfileAcceleration = 8000;
//    unsigned int ProfileDeceleration = 8000;
//
//
//    if( VCS_ActivatePositionMode(keyHandle_, nodeId, &ErrorCode) )
//    {
//        int Absolute = TRUE;
//        int Immediately = TRUE;
//
//        if( !Absolute )
//        {
//            int PositionIs = 0;
//
//            if( VCS_GetPositionIs(keyHandle_, nodeId, &PositionIs, &ErrorCode) );
//        }
//
//        if( !VCS_MoveToPosition(keyHandle_, nodeId, TargetPosition, Absolute, Immediately, &ErrorCode) )
//        {
//            cout<<"Move to position failed!, Error code="<<ErrorCode<<endl;
//        }
//
//    }
//    else
//    {
//        cout<<"Activate profile position mode failed!, Error code="<<ErrorCode<<endl;
//    }
}

//
//void CMaxonMotor::GetCurrentPosition(int& CurrentPosition)
//{
//
//    unsigned int errorCode = 0;
//
//    if( !VCS_GetPositionIs(keyHandle, nodeID, &CurrentPosition, &errorCode) ){
//        cout << " error while getting current position , error code="<<errorCode<<endl;
//    }
//
////    unsigned int MA;
////    if( !VCS_GetMaxAcceleration(keyHandle, nodeID, &MA, &errorCode) ){
////        cout << " error while getting Max Acc, error code="<<errorCode<<endl;
////    }
//
////    unsigned int SMA=5000000;
////    if( !VCS_SetMaxAcceleration(keyHandle, nodeID, SMA, &errorCode) ){
////        cout << " error while Setting Max Acc, error code="<<errorCode<<endl;
////    }
//
////    unsigned int SMV=2000;
////    if( !VCS_SetMaxProfileVelocity(keyHandle, nodeID, SMV, &errorCode) ){
////        cout << " error while Setting Max Vel, error code="<<errorCode<<endl;
////    }
//
////    unsigned int MV;
////    if( !VCS_GetMaxProfileVelocity(keyHandle, nodeID, &MV, &errorCode) ){
////        cout << " error while getting Max Vel, error code="<<errorCode<<endl;
////    }
//
////    cout << "MA :" << MA << endl;
////    cout << "MV :" << MV << endl;
//
//
//}

void CMaxonMotor::Halt(void *keyHandle_, unsigned short nodeId)
{
        unsigned int ErrorCode = 0;

        if( !VCS_HaltPositionMovement(keyHandle_, nodeId, &ErrorCode) )
        {
                cout<<"Halt position movement failed!, error code="<<ErrorCode<<endl;
        }
}

void* CMaxonMotor::activate_device(char *PortName, unsigned short nodeId)
{
    // Configuring EPOS for analog motor control
    char DeviceName[]="EPOS2";
    char ProtocolStackName[] = "MAXON SERIAL V2";
    char InterfaceName[] = "USB";
    unsigned int ErrorCode = 0x00;
    unsigned long timeout_ = 500;
    unsigned long baudrate_ = 1000000;
    void *keyHandle_;

    keyHandle_ = VCS_OpenDevice(DeviceName,ProtocolStackName,InterfaceName,PortName,&ErrorCode);

    if( keyHandle_ == 0 )
    {
        cout<<"Open device failure, error code="<<ErrorCode<<endl;
        exit(0);
    }
    else
    {
        cout<<"Open device success!"<<endl;
    }


    if( !VCS_SetProtocolStackSettings(keyHandle_, baudrate_, timeout_, &ErrorCode) )
    {
        cout<<"Set protocol stack settings failed!, error code="<<ErrorCode<<endl;
        closeDevice(keyHandle_);
        exit(0);
    }

    EnableDevice(keyHandle_, nodeId);
    return keyHandle_;
}



//void CMaxonMotor::GetPositionProfile(){
//
//    unsigned int errorCode = 0;
//    unsigned int pProfileVelocity,pProfileAcceleration, pProfileDeceleration;
//
//    if( !VCS_GetPositionProfile(keyHandle, nodeID, &pProfileVelocity, &pProfileAcceleration, &pProfileDeceleration, &errorCode) ) {
//        cout << "VCS_GetPositionProfile failed!, error code="<<errorCode<<endl;
//    }
//    cout << "profile: " << pProfileVelocity << "\t" << pProfileAcceleration << "\t" << pProfileDeceleration << endl;
//
//}
//
//void CMaxonMotor::SetPositionProfile(unsigned int ProfileVelocity, unsigned int ProfileAcc, unsigned int ProfileDec){
//    unsigned int errorCode = 0;
//    if( !VCS_SetPositionProfile(keyHandle, nodeID, ProfileVelocity, ProfileAcc, ProfileDec, &errorCode) ) {
//        cout << "VCS_SetPositionProfile failed!, error code="<<errorCode<<endl;
//    }
//
//}


//void CMaxonMotor::initializeDevice(){
//    closeDevice(); // To close if opend
//    activate_device();
//}



void CMaxonMotor::CloseAllDevice(){
	closeDevice(keyHandle_MCP);
	closeDevice(keyHandle_PIP);
}

void CMaxonMotor::ActiviateAllDevice(){
    keyHandle_MCP = activate_device(PortName_MCP, nodeId_MCP);
    keyHandle_PIP = activate_device(PortName_PIP, nodeId_PIP);
}

void CMaxonMotor::DisableAllDevice(){
    DisableDevice(keyHandle_MCP, nodeId_MCP);
    DisableDevice(keyHandle_PIP, nodeId_PIP);
}


void CMaxonMotor::GetCurrentPosition(void *keyHandle_, int& CurrentPosition, unsigned short nodeId){
    unsigned int errorCode = 0;

    if( !VCS_GetPositionIs(keyHandle_, nodeId, &CurrentPosition, &errorCode) ){
        cout << " error while getting current position , error code="<<errorCode<<endl;
    }
}

void CMaxonMotor::GetCurrentPositionAllDevice(int* CurrentPosition){
	int Pos;
	GetCurrentPosition(keyHandle_MCP, Pos,nodeId_MCP);
	CurrentPosition[0]=Pos;
	GetCurrentPosition(keyHandle_PIP, Pos,nodeId_PIP);
	CurrentPosition[1]=Pos;
}


void CMaxonMotor::MoveAllDevice(const long* TargetPosition){
	Move(keyHandle_MCP, TargetPosition[0], nodeId_MCP);
	Move(keyHandle_PIP, TargetPosition[0], nodeId_PIP);
}
