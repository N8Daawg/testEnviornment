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
    
public:
    wheelSide();
    wheelSide(int wheels);
    ~wheelSide();
    int getNumOfWheels();

    /*---------------------------------------------------------------------------*/
    /*-----------------------Drivetrain Utility Functions------------------------*/
    /*---------------------------------------------------------------------------*/

    /**
     * @brief gets an average position of all motors
    */
    virtual double getMotorAve() = 0;

    /**
     * @brief resets all driveTrain encoders
    */
    virtual void resetDrivePositions() = 0;

    /**
     * @brief stops all motors in the drivetrain
    */
    virtual void stopDriveSide(brakeType Brake) = 0;

    /**
     * @brief sets velocities of all motors in drivetrain
    */
    virtual void setVelocities(double velocity) = 0;

    /*---------------------------------------------------------------------------*/
    /*----------------------------DriveSide Movements----------------------------*/
    /*---------------------------------------------------------------------------*/

    /**
     * @brief Spins motor in a direction at a specified velocity
     */
    virtual void spin(vex::directionType dir, double velocity, vex::velocityUnits units) = 0;

    /**
     * @brief moves drivetrain forward to a certain point
     */
    virtual void spinTo(double rotation, double velocity) = 0;
};

#endif