#ifndef TERRITORY_H
#define TERRITORY_H

#include <vector>
#include "TerritoryNameEnum.h"

class Territory
{
private:
    int m_nNumArmies;
    Player m_pOwner;
    vector<Territory> m_vNeighbors;



public:
    territory();

    void setName(TerritoryName e);
    TerritoryName getName(void);

    void setNumArmies(int n);
    int getNumArmies(void);

    void setOwner(Player p);
    Player getOwner(void);

    void setNeighbors(vector<Territory> v);
    vector<Territory> getNeighbors(void);

};

#endif // TERRITORY_H
