/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       Autons.h                                                  */
/*    Author:       Nathan Beals                                              */
/*    Created:      Sun March 17 2024                                         */
/*    Description:  file for storing drivetrain class code                    */
/*                                                                            */
/*----------------------------------------------------------------------------*/

using namespace vex;

#ifndef TWOWHEELSIDE_HPP
#define TWOWHEELSIDE_HPP

class twoWheelSide: public wheelSide
{
private:
    motor* front;
    motor* back;

public:
    twoWheelSide(
        motor* frontm,
        motor* backm
    );
    ~twoWheelSide();

    virtual double getMotorAveWrap();
    virtual void stopDriveSideWrap(brakeType Brake);
    virtual void setVelocitiesWrap(double velocity);

    virtual void spinToWrap(double rotation, double velocity);
    virtual void spinWrap(directionType dir, double velocity, velocityUnits units);
};

#endif