/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       Autons.h                                                  */
/*    Author:       Nathan Beals                                              */
/*    Created:      Sun March 17 2024                                         */
/*    Description:  file for storing drivetrain class code                    */
/*                                                                            */
/*----------------------------------------------------------------------------*/

using namespace vex;

#ifndef WHEELSIDE_HPP
#define WHEELSIDE_HPP

class wheelSide
{
private:
    int numOfWheels;
    virtual void spinToWrap(double distance){
        Brain.Screen.print("from super class");
    }
public:
    wheelSide();
    wheelSide(int wheels);
    ~wheelSide();
    int getNumOfWheels();

    void spinTo(double distance){
        spinToWrap(distance);
    }
};

#endif