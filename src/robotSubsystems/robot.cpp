#include "vex.h"
using namespace vex;

robot::robot(double x, double y)
{
    coords.x = x;
    coords.y = y;
    drive = new driveTrain();
}
robot::robot(
    motor* FL,
    motor* BL
    )
{
    coords.x=0;
    coords.y=0;
    drive = new driveTrain(FL, BL);
}

robot::~robot()
{
}

void robot::driveFor(double rotaion, double velocity)
{
    drive->driveFor(rotaion, velocity);
}

void robot::Spin(directionType dir, double velocity, velocityUnits units)
{
    drive->Spin(dir, velocity, units);
}
