#include "continent.h"
#include <vector>
#include "ContinentNamesEnum.h"


continent::continent()
{

}

class Continent
{
private:
    ContinentName m_eName;
    int m_nBonus;
    vector<Territory> m_vTerritories;
    bool m_bConquered;



public:

    void setBonus(int n){
        m_nBonus = n;
    }

    int getBonus(void){
        return m_nBonus;
    }

    void setTerritories(vector<Territory> t){
        m_vTerritories = t;
    }

    Territory getTerritories(void){
        return m_vTerritories;
    }

    void setConquered(bool b){
        m_bConquered = b;
    }

    bool isConquered(void){
        return m_bConquered;
    }

    bool getConquered(void){
        return isConquered();
    }



};// end class
