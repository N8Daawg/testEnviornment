#include "vex.h"
using namespace vex;

robot::robot(double x, double y)
{
    coords.x = x;
    coords.y = y;
    drive = driveTrain();
}
robot::robot(
    motor* &FL,
    motor* &BL
    )
{
    coords.x=0;
    coords.y=0;
    drive = driveTrain(FL, BL);
}

robot::~robot()
{
}

