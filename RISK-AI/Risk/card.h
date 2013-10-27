#ifndef CARD_H
#define CARD_H

typedef enum CardType{
    INFANTRY,
    CALVARY,
    ARTILLERY
}CardType;

class Card
{
public:
    Card();

    CardType getCardType(){return m_tCardType;}

    TerritoryName getTerritoryName(){return m_tTerritoryName;}

private:
    CardType m_tCardType;
    TerritoryName m_tTerritoryName;
};

#endif // CARD_H
