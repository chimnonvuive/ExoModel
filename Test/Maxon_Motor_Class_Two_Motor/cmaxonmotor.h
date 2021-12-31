#ifndef CMAXONMOTOR_H
#define CMAXONMOTOR_H

#include "Definitions.h" // Maxon Motor Header file

#define TRUE 1
#define FALSE 0


class CMaxonMotor
{
private:
    char* PortName_MCP;
    char* PortName_PIP;
    unsigned int ErrorCode;
    unsigned short nodeId_MCP;
    unsigned short nodeId_PIP;

    void *keyHandle_MCP, *keyHandle_PIP;

    void EnableDevice(void *keyHandle_, unsigned short nodeId);
    void DisableDevice(void *keyHandle_, unsigned short nodeId);
    void* activate_device(char *PortName, unsigned short nodeId);

    void closeDevice(void *keyHandle_);
    void Move(void *keyHandle_, long TargetPosition, unsigned short nodeId);
    void GetCurrentPosition(void *keyHandle_, int& CurrentPosition, unsigned short nodeId);

    void Halt(void *keyHandle_, unsigned short nodeId);

public:
    CMaxonMotor();

    void CloseAllDevice();
    void ActiviateAllDevice();
    void DisableAllDevice();
    void GetCurrentPositionAllDevice(int* CurrentPosition);
    void MoveAllDevice(const long* TargetPosition);
//    CMaxonMotor(char[], unsigned int );

//    void initializeDevice();


//    void GetCurrentPosition(int& CurrentPosition); // need change

//    void GetPositionProfile();
//    void SetPositionProfile(unsigned int ProfileVelocity, unsigned int ProfileAcc, unsigned int ProfileDec);
};

#endif // CMAXONMOTOR_H

