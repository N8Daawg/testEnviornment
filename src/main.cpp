/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       nbeal                                                     */
/*    Created:      10/17/2024, 1:44:52 AM                                    */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"
using namespace vex;


// define your global instances of motors and other devices here
event checkGameElement = event();

bool hasMogo() {
  for (int i = 1; i <= aivis.objectCount; i++) {
    if (aivis.objects[i].id == mobileGoal) {
        return true;
    }
  }
  return false;
}

/*
aivision::object* findMogo() {
  for (int i = 1; i <= aivis.objectCount; i++) {
    if (aivis.objects[i].id == mobileGoal) {
        return &aivis.objects[i];
    }
  }
  return nullptr;
}
*/
void hasGameElementCallback() {
  Brain.Screen.setFont(mono40);
  Brain.Screen.clearLine(1, black);
  Brain.Screen.clearLine(2,black);
  Brain.Screen.setCursor(Brain.Screen.row(), 1);
  Brain.Screen.setCursor(1, 1);

  aivis.takeSnapshot(aivision::ALL_AIOBJS);
  if (aivis.objectCount > 0) {
    Brain.Screen.print("Game Element Found");
    Brain.Screen.newLine();
    Brain.Screen.print(aivis.objectCount);
  } else {
    Brain.Screen.print("No Game Element Found");
  }
}


void hasMogoCallback() {
  Brain.Screen.setFont(mono40);
  Brain.Screen.clearLine(1, black);
  Brain.Screen.clearLine(2, black);
  Brain.Screen.clearLine(3, black);
  Brain.Screen.setCursor(Brain.Screen.row(), 1);
  Brain.Screen.setCursor(1,1);

  aivis.takeSnapshot(aivision::ALL_AIOBJS);
  
  
  if (hasMogo()) {
    aivision::object* mogo = findMogo();

    Brain.Screen.print("Mogo coors:");
    Brain.Screen.newLine();
    Brain.Screen.print("x: ");
    Brain.Screen.print(aivis.largestObject.centerX);
    Brain.Screen.newLine();
    Brain.Screen.print("y: ");
    Brain.Screen.print(aivis.largestObject.centerY);

  } else {
    Brain.Screen.print("NO Mogo Found");
  }
}

void usercontrol() {
  //checkGameElement(hasMogoCallback);
    //coordinate StakeCoords;
    //StakeCoords.x=0;
    //StakeCoords.y=0;

    //wallStake stake1(blueAlliance, 0,0);
    //wallStake stake2(blueAlliance, StakeCoords);


  double LNS; double LEW;
  double RNS; double REW;
  while(true){
    checkGameElement.broadcastAndWait();

    int scale = 95;
    double multiplier = 100/cbrt(scale);    
    LNS = cbrt(Controller.Axis3.position())*multiplier;
    LEW = cbrt(Controller.Axis4.position())*multiplier;
    RNS = cbrt(Controller.Axis2.position())*multiplier;
    REW = cbrt(Controller.Axis1.position())*multiplier;    

    robot.drive(LNS,LEW,RNS,REW);

    wait(20, msec); // Sleep the task for a short amount of time to
            // prevent wasted resources.

  }  
}

void autonomous() {
  if (aivis.installed()) {
    drive->AIMogoRush();
  } else {
    drive->MogoRush();
  }

  Brain.Screen.newLine();
  Brain.Screen.print("done");
}

int main() {
  //usercontrol();
  
  autonomous();
}
