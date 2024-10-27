#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

brain Brain;

motor FrontLeft = motor(PORT1, ratio18_1, true);
motor FrontRight = motor(PORT3, ratio18_1, true);
motor BackLeft = motor(PORT2, ratio18_1, true);
motor BackRight = motor(PORT4, ratio18_1, true);
inertial Gyro = inertial(PORT5);

void vexcodeInit(void) {

}