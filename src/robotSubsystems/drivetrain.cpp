#include "vex.h"
#include "robotsubsystems/drivetrain.hpp"
using namespace vex;

driveTrain::driveTrain()
{
}

driveTrain::driveTrain(
    motor* &FrontLeft,
    motor* &BackLeft
    )   
{
    FL = FrontLeft;
}

driveTrain::~driveTrain()
{
}
