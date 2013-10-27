#ifndef BOARD_H
#define BOARD_H

#include <vector>

class board
{
private:
    vector<Player>      m_vPlayers;
    vector<Continent>   m_vContinents;
    vector<Card>        m_vCards;
    int                 m_nTradeInBonus;



public:
    board();

    vector<Player> getPlayers(void);
    void setPlayers(vector<Player>);

    vector<Continent> getContinents(void);
    void setContinents(vector<Continent>);

    int getTradeInBonus(void);
    void setTradeInBonus(int n);

    vector<Card> getDeck(void);
    vector<Card> getCards(void);
    void setDeck(vector<Card>);
    void setCards(vector<Card>);

    vector<Card> createDeck(void);
    void shuffleDeck(void);
};

#endif // BOARD_H
