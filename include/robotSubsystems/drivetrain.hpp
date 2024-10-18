/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       Autons.h                                                  */
/*    Author:       Nathan Beals                                              */
/*    Created:      Sun March 17 2024                                         */
/*    Description:  file for storing drivetrain class code                    */
/*                                                                            */
/*----------------------------------------------------------------------------*/

using namespace vex;

#ifndef DRIVETRAIN_HPP
#define DRIVETRAIN_HPP

class driveTrain
{
private:
    motor* FL;
    motor* BL;
public:
    driveTrain();
    driveTrain(
        motor* &FrontLeft,
        motor* &BackLeft
        );
    ~driveTrain();
};

#endif