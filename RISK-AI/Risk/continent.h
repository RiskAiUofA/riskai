#ifndef CONTINENT_H
#define CONTINENT_H

#include <vector>

class continent
{
private:
    int m_nBonus;                       // bonus for owning the whole continent
    vector<Territory> m_vTerritories;   // territories inside the continent
    bool m_bConquered;                  // flag if the continent is owned by one player



public:
    continent();

    int getBonus(void);
    void setBonus(int n);

    vector<Territory> getTerritories(void);
    void setTerritories(vector<Territory> t);

    bool isConquered(void);
    bool getConquered(void);
    void setConquered(bool b);

};

#endif // CONTINENT_H
