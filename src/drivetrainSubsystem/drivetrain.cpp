#include "vex.h"
using namespace vex;

driveTrain::driveTrain(){}

driveTrain::driveTrain(
    motor* FL,
    motor* FR,
    motor* BL,
    motor* BR,
    inertial* Gyro,
    double robotlength,
    double gearratio,
    double wheelDiameter
) {
    MotorOffset = robotlength/2;
    gearRatio = gearratio;
    wheelCircumference = wheelDiameter*M_PI;

    motorConversion = gearRatio*wheelCircumference*360;

    leftSide = new twoWheelSide(FL, BL);
}

driveTrain::~driveTrain(){}

/*---------------------------------------------------------------------------*/
/*-----------------------Drivetrain Utility Functions------------------------*/
/*---------------------------------------------------------------------------*/


double driveTrain::getMotorAve(){
    return (leftSide->getMotorAve()
            //+ rightSide->getMotorAve()
            )/2;
}

void driveTrain::resetDrivePositions(){
    leftSide->resetDrivePositions();
}

void driveTrain::stopDriveTrain(brakeType Brake){
    leftSide->stopDriveSide(Brake);
}

void driveTrain::setVelocities(double velocity){
    leftSide->setVelocities(velocity);
}

double driveTrain::getHeading(int dir){
    switch (dir){
    case 1: // looking left
        return 360 - gyro->heading();
        break;
    case 2: // looking right
        return gyro->heading();
        break;
    default:
        return 0;
        break;
    }
}

/*---------------------------------------------------------------------------*/
/*----------------------------Drivetrain Movements---------------------------*/
/*---------------------------------------------------------------------------*/


/*-------------------------------------------------------------------------------*/
/*----------------------------Driver Control Movements---------------------------*/
/*-------------------------------------------------------------------------------*/


bool driveTrain::withinDeadzone(int x){
    return ((x<deadzone) && (x> -deadzone));
}

int driveTrain::drive(double leftNS, double leftEW, double rightNS, double rightEW){
    if(withinDeadzone(leftNS)  && withinDeadzone(leftEW) && 
       withinDeadzone(rightNS) && withinDeadzone(rightEW))
    { //no joystick is telling the robot to move
        stopDriveTrain(hold);

    } else{ //if all joystick values are within the deadzone
        double leftPower = leftNS + leftEW;
        double rightPower = rightNS - rightEW;
        
        leftSide->spin(fwd, leftPower, velocityUnits::pct);

    }
    return 1;
}