
#ifndef ROBOT_HPP
#define ROBOT_HPP
#include "structures.hpp"
using namespace vex;


class Robot {
    private:
        coordinate coords;

        driveTrain* driveT;

    public:

        /**
         * @brief creates a robot object to monitor, manage, and control the robots' systems
         * 
         * @param dt the drive train controller
         */
        Robot(
            driveTrain* dt
        );

        ~Robot();
    
        /* Drive Controlls */

        /**
         * @brief Switch between Arcade drive and tank drive
         */
        void switchControlMode(){
            driveT->switchControlMode();
        }
        
        /**
         * @brief
         */
        int drive(double leftNS, double leftEW, double rightNS, double rightEW);


};

#endif