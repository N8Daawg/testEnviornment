#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "v5.h"
#include "v5_vcs.h"

#include "structures.hpp"

#include "robot-config.h"

#include "drivetrainSubsystem/wheelSide.hpp"
#include "drivetrainSubsystem/twoWheelSide.hpp"
#include "drivetrainSubsystem/drivetrain.hpp"

#include "robotSubsystems/robot.hpp"

#include "game_elements/wallStake.hpp"


#define waitUntil(condition)                                                   \
  do {                                                                         \
    wait(5, msec);                                                             \
  } while (!(condition))

#define repeat(iterations)                                                     \
  for (int iterator = 0; iterator < iterations; iterator++)