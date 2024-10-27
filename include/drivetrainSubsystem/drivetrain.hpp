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

class driveTrain{
private:
    inertial* gyro;
    wheelSide* leftSide;

    double MotorOffset;
    double gearRatio;
    double wheelCircumference;
    double motorConversion;
    double deadzone = 0;

    /**
     * @brief checks weather the joysticks are outside of the robot's deadzone
     * @param x the input value of the controller that's being checked
     */
    bool withinDeadzone(int x);

public:
    driveTrain();
    driveTrain(
        motor* FL,
        motor* FR,
        motor* BL,
        motor* BR,
        inertial* gyro,
        double robotlength,
        double grarratio,
        double wheelDiameter
    );

    ~driveTrain();

    /*---------------------------------------------------------------------------*/
    /*-----------------------Drivetrain Utility Functions------------------------*/
    /*---------------------------------------------------------------------------*/

    /**
     * @brief gets an average position of all motors
    */
    double getMotorAve();
    
    /**
     * @brief resets Drivetrain encoders
    */
    void resetDrivePositions();

    /**
     * @brief stops all motors in the drivetrain
    */
    void stopDriveTrain(brakeType Brake);

    /**
     * @brief sets velocities of all motors in drivetrain
    */
    void setVelocities(double velocity);

    double getHeading(int dir);


    /*-------------------------------------------------------------------------------*/
    /*----------------------------Driver Control Movements---------------------------*/
    /*-------------------------------------------------------------------------------*/

    int drive(double leftNS, double leftEW, double rightNS, double rightEW);

};

#endif