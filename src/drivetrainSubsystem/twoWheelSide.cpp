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
/*-----------------------Drivetrain Utility Functions------------------------*/
/*---------------------------------------------------------------------------*/

double twoWheelSide::getMotorAveWrap(){
    double ave = 0;
    if(front->position(degrees)>0){ave += front->position(degrees);
    } else {ave -= front->position(degrees);}
    if(back->position(degrees)>0){ave += back->position(degrees);
    } else {ave -= back->position(degrees);}
    return ave/getNumOfWheels();
}

void twoWheelSide::stopDriveSideWrap(brakeType Brake){
    front->stop(brake);
    back->stop(brake);
}

void twoWheelSide::setVelocitiesWrap(double velocity){
    front->setVelocity(velocity, pct);
    back->setVelocity(velocity, pct);
}

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
