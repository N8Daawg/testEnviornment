#include "vex.h"
using namespace vex;

twoWheelSide::twoWheelSide(
    motor* frontm,
    motor* backm
):wheelSide(2){
    front = frontm;
    back = backm;
}
twoWheelSide::~twoWheelSide(){}

void twoWheelSide::spinToWrap(double distance){
        Brain.Screen.print("from sub class");
    }

void twoWheelSide::test(){
    if(front->installed()){
        Brain.Screen.print("front motor is installed");
    } else {
        Brain.Screen.print("front motor is not installed");
    }
}