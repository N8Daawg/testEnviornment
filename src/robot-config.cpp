#include "vex.h"
#include "robot-config.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

brain Brain;

motor FrontLeft = motor(PORT7, ratio18_1, true);
motor BackLeft = motor(PORT8, ratio18_1, true);

void vexcodeInit(void) {

}