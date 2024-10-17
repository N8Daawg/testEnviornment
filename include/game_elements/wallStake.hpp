#include "structures.hpp"

class wallStake
{
private:
    allianceColor alliance;
    coordinate coord;
public:
    wallStake(allianceColor alliancec, double x, double y);
    wallStake(allianceColor alliancec, coordinate coords);
    ~wallStake();

    allianceColor getAlliance();
    
    int getX();

    int getY();
};