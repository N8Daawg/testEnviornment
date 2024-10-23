
#ifndef ROBOT_HPP
#define ROBOT_HPP
#include "structures.hpp"
using namespace vex;


class robot
{
private:
    coordinate coords;
    driveTrain* drive;

public:
    robot(double x, double y);
    robot(
        motor* FL,
        motor* BL
        );
    ~robot();

    void driveFor(double rotaion, double velocity);
    void Spin(directionType dir, double velocity, velocityUnits units);
};

#endif