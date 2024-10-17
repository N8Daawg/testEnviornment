#include "vex.h"

wallStake::wallStake(allianceColor alliancec, double x, double y)
{
    alliance = alliancec;
    coord.x = x;
    coord.y = y;
}

wallStake::wallStake(allianceColor alliancec, coordinate coords)
{
    alliance = alliancec;
    coord = coords;
}

wallStake::~wallStake()
{
}


allianceColor wallStake::getAlliance()
{
    return alliance;
}

int wallStake::getX()
{
    return coord.x;
}

int wallStake::getY()
{
    return coord.y;
}
