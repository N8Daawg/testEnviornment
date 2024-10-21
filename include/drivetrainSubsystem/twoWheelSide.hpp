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

    virtual void spinToWrap(double distance);
    void test();
};

#endif