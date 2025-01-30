#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "v5.h"
#include "v5_vcs.h"

#include "structures.hpp"



#include "drivetrainSubsystems/sensorUnit.hpp"

#include "drivetrainSubsystems/wheelSide.hpp"
#include "drivetrainSubsystems/twoWheelSide.hpp"
#include "drivetrainSubsystems/threeWheelSide.hpp"
#include "drivetrainSubsystems/fourWheelSide.hpp"
#include "drivetrainSubsystems/drivetrain.hpp"

#include "robotSubsystems/clamp.hpp"
#include "robotSubsystems/intake.hpp"
#include "robotSubsystems/conveyor.hpp"

#include "robotSubsystems/robot.hpp"

#include "game_elements/wallStake.hpp"

#include "robot-config.h"

#define waitUntil(condition)                                                   \
  do {                                                                         \
    wait(5, msec);                                                             \
  } while (!(condition))

#define repeat(iterations)                                                     \
  for (int iterator = 0; iterator < iterations; iterator++)