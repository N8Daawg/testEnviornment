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

class SuperClass 
{
public:
    void bar() 
    {
        foo();
    }
private:
    virtual void foo() // could be pure virtual, if you like
    {
        Brain.Screen.print("from superclass");
    }
};

class SubClass : public SuperClass // do not forget to inherit public
{
public:
    virtual void foo() { Brain.Screen.print("from subclass"); }
};

int main() {
    coordinate StakeCoords;
    StakeCoords.x=0;
    StakeCoords.y=0;

    wallStake stake1(blueAlliance, 0,0);
    wallStake stake2(blueAlliance, StakeCoords);

    double distance = 50;
    double velocity = 75;
    
    while(true){
        thisRobot.Spin(fwd, velocity, velocityUnits::pct);
    }
}
