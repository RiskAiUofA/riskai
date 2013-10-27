#include "territory.h"
#include <vector>
#include "territoryNameEnum.h"

Territory::Territory(void)
{
    init(NULL, 0, NULL);
}
Territory::Territory(vector<Territory> v)
{
    init(NULL, 0, &v);
}
Territory::Territory(Player p, int n, vector<Territory> v)
{
    init(&p, n, &v);
}


class Territory
{
private:
    int m_nNumArmies;
    Player m_pOwner;
    vector<Territory> m_vNeighbors;
    TerritoryName m_eName;

    void init(Player p, int n, vector<Territory> v){
        setOwner(*p);
        setNumArmies(n);
        setNeighbors(*v);
    }


public:
    void setName(TerritoryName e){
        m_eName = e;
    }

    TerritoryName getName(void){
        return m_eName;
    }

    void setNumArmies(int n){
        m_nNumArmies = n;
    }

    int getNumArmies(void){
        return m_nNumArmies;
    }

    void setOwner(Player p){
        m_pOwner = p;
    }

    Player getOwner(void){
        return m_pOwner;
    }

    void setNeighbors(vector<Territory> v){
        m_vNeighbors = v;
    }

    vector<Territory> getNeighbors(void){
        return m_vNeighbors;
    }

};// end class
