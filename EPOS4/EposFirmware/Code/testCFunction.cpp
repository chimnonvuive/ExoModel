#pragma once
#include "Definitions.h"
#include <stdio.h>
//#include "StdAfx.h"

HANDLE keyHandle = 0;
char* deviceName = "EPOS4";
char* protocolStackName = "MAXON SERIAL V2";
char* interfaceName = "USB";
char* portName = "USB0";

DWORD errorCode = 0;
DWORD baudrate = 0;
DWORD timeout = 0;

// knee
HANDLE subkeyHandle1 = 0;
char* subdeviceName1 = "EPOS4";
char* subProtocolStackName1 = "CANopen";

int main()
{
	keyHandle = VCS_OpenDevice(deviceName, protocolStackName, interfaceName, portName, &errorCode);
	if (keyHandle)
	{
		if (VCS_GetProtocolStackSettings(keyHandle, &baudrate, &timeout, &errorCode))
		{
			timeout += 100;
			VCS_SetProtocolStackSettings(keyHandle, baudrate, timeout, &errorCode);
		}

		subkeyHandle1 = VCS_OpenSubDevice(keyHandle, subdeviceName1, subProtocolStackName1, &errorCode);

		if (subkeyHandle1)
		{
			if (VCS_GetGatewaySettings(keyHandle, &baudrate, &errorCode))
			{
				printf("Gateway baudrate = %u\r\n", baudrate);
			}
			// close application
			VCS_CloseSubDevice(subkeyHandle1, &errorCode);
		}

		VCS_CloseDevice(keyHandle, &errorCode);
	}
	return 0;
}