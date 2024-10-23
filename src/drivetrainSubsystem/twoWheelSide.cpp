#include "vex.h"
using namespace vex;

twoWheelSide::twoWheelSide(
    motor* frontm,
    motor* backm
):wheelSide(2){
    front = frontm;
    back = backm;
}
twoWheelSide::~twoWheelSide(){}

/*---------------------------------------------------------------------------*/
/*----------------------------DriveSide Movements----------------------------*/
/*---------------------------------------------------------------------------*/

void twoWheelSide::spinWrap(vex::directionType dir, double velocity, vex::velocityUnits units){
    front->spin(dir, velocity, units);
    back->spin(dir, velocity, units);
}

void twoWheelSide::spinToWrap(double rotation, double velocity){
    front->spinTo(rotation, degrees, velocity, velocityUnits::pct);
    back->spinTo(rotation, degrees, velocity, velocityUnits::pct);
}
