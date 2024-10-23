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
    virtual void spinToWrap(double rotation, double velocity){}
    virtual void spinWrap(directionType dir, double velocity, velocityUnits units){}
    
public:
    wheelSide();
    wheelSide(int wheels);
    ~wheelSide();
    int getNumOfWheels();

    /*---------------------------------------------------------------------------*/
    /*----------------------------DriveSide Movements----------------------------*/
    /*---------------------------------------------------------------------------*/

    /**
     * @brief Spins motor in a direction at a specified velocity
     */
    void Spin(vex::directionType dir, double velocity, vex::velocityUnits units){
        spinWrap(dir, velocity, units);
    }

    /**
     * @brief moves drivetrain forward to a certain point
     */
    void SpinTo(double rotation, double velocity){
        spinToWrap(rotation, velocity);
    }
};

#endif