/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       nbeal                                                     */
/*    Created:      10/17/2024, 1:44:52 AM                                    */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"
using namespace vex;

// define your global instances of motors and other devices here
motor* FLPtr = &FrontLeft;
motor* BLPtr = &BackLeft;

robot thisRobot(FLPtr, BLPtr);

int main() {

    Brain.Screen.printAt( 10, 50, "Hello V5" );

    coordinate StakeCoords;
    StakeCoords.x=0;
    StakeCoords.y=0;

    wallStake stake1(blueAlliance, 0,0);
    wallStake stake2(blueAlliance, StakeCoords);

    Brain.Screen.print(stake1.getX());
    Brain.Screen.print(stake2.getX());
   
    while(1) {
        
        // Allow other tasks to run
        this_thread::sleep_for(10);
    }
}
