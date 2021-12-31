#include <stdio.h>
#include <iostream>
#include "cmaxonmotor.h"

using namespace std;

int main(int argc, char *argv[])
{
	int p[2];
    CMaxonMotor motor;

    motor.CloseAllDevice();
    motor.ActiviateAllDevice();

    long targetPos[2];
    targetPos[0]=0;
	targetPos[1]=0;
//    for (int i=0;i<100;i++){
//    	targetPos[0]=i*400;
//		targetPos[1]=i*400;
//	    motor.MoveAllDevice(targetPos);
//	    if (i%5 == 1 ) {
//		    motor.GetCurrentPositionAllDevice(p);
//	    	cout << "Current Position: " << p[0] << "\t" << p[1] << "\t";;
//	    	cout << "e: " << p[0] - targetPos[0] << "\t" << p[1] - targetPos[1] << endl;
//	    }
//    }
//
//    for (int i=0;i<100;i++){
//        	targetPos[0]=40000-i*800;
//    		targetPos[1]=40000-i*800;
//    	    motor.MoveAllDevice(targetPos);
//    	    if (i%5 == 1 ) {
//    	    	motor.GetCurrentPositionAllDevice(p);
//    	    	cout << "Current Position: " << p[0] << "\t" << p[1] << "\t";;
//    	    	cout << "e: " << p[0] - targetPos[0] << "\t" << p[1] - targetPos[1] << endl;
//    	    }
//	}
//

//    for (int i=0;i<1000;i++){
//    	motor.MoveAllDevice(targetPos);
//    	if (i%1000 == 1 ) {
//    		cout << i << endl;
//    	}
//    }

    cout << "Press <Enter> to stop and quit..." << endl;
    getchar();


    motor.DisableAllDevice();

    return 0;
}
