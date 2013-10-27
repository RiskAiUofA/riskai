#ifndef CARD_H
#define CARD_H

#include "TerritoryNameEnum.h"

typedef enum CardType{
    INFANTRY,
    CAVALRY, // or Calvary if they have awesome Calves (extra intimidation!)
    ARTILLERY
}CardType;

class Card
{
public:
    Card(CardType type, TerritoryName Territory);

    CardType getCardType(){return m_tCardType;}

    TerritoryName getTerritoryName(){return m_tTerritoryName;}

private:
    CardType m_tCardType;
    TerritoryName m_tTerritoryName;
};

#endif // CARD_H
