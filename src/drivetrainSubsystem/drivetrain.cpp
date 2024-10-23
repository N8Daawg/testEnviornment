#include "vex.h"
using namespace vex;

driveTrain::driveTrain()
{
}

driveTrain::driveTrain(
    motor* FrontLeft,
    motor* BackLeft
    )   
{
    FL = FrontLeft;
    BL = BackLeft;
    leftSide = new twoWheelSide(FrontLeft, BackLeft);
}

driveTrain::~driveTrain()
{
}

void driveTrain::driveFor(double rotation, double velocity)
{
    leftSide->SpinTo(rotation, velocity);
}

void driveTrain::Spin(directionType dir, double velocity, velocityUnits units)
{
    leftSide->Spin(dir, velocity, units);
}
