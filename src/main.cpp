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
controller Controller;

double robotlength = 0;
double gearratio = 1;
double wheelDiameter = 1;

Robot robot(&FrontLeft, &FrontRight, &BackLeft, &BackRight, &Gyro, 
            robotlength, gearratio, wheelDiameter);

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
    
    double LNS; double LEW;
    double RNS; double REW;
    while(true){

        LNS = Controller.Axis4.position();
        LEW = Controller.Axis3.position();
        RNS = Controller.Axis2.position();
        REW = Controller.Axis1.position();

        robot.drive(LNS,LEW,RNS,REW);

        wait(20, msec); // Sleep the task for a short amount of time to
                // prevent wasted resources.

    }
}
