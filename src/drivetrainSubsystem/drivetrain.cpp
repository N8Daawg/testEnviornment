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
    leftSide = twoWheelSide(FrontLeft, BackLeft);
}

driveTrain::~driveTrain()
{
}

void driveTrain::driveFor(double distance)
{
    leftSide.spinTo(distance);
    //FL->spinTo(distance, degrees, false);
    //BL->spinTo(distance, degrees, true);
}
