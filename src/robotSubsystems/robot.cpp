#include "vex.h"
using namespace vex;

Robot::Robot(
    driveTrain *dt

) {
    coords.x=0;
    coords.y=0;
    driveT = dt;

}

Robot::~Robot(){}

int Robot::drive(double leftNS, double leftEW, double rightNS, double rightEW) {
    return driveT->drive(leftNS, leftEW, rightNS, rightEW);
}
