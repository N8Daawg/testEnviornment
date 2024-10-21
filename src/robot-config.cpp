#include "vex.h"
#include "robot-config.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

brain Brain;

motor FrontLeft = motor(PORT1, ratio18_1, true);
motor BackLeft = motor(PORT2, ratio18_1, true);

void vexcodeInit(void) {

}