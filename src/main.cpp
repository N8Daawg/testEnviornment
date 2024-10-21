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

twoWheelSide leftSide(FLPtr, BLPtr);


int main() {
    coordinate StakeCoords;
    StakeCoords.x=0;
    StakeCoords.y=0;

    wallStake stake1(blueAlliance, 0,0);
    wallStake stake2(blueAlliance, StakeCoords);

    double distance = 50;

    thisRobot.driveFor(distance);

}
