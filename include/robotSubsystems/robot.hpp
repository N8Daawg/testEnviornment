
#ifndef ROBOT_HPP
#define ROBOT_HPP
#include "structures.hpp"
using namespace vex;


class robot
{
private:
    coordinate coords;
    driveTrain drive;

public:
    robot(double x, double y);
    robot(
        motor* FL,
        motor* BL
        );
    ~robot();

    void driveFor(int distance);
};

#endif