#include "board.h"
#include <vector>

board::board()
{
}

class Board{
private:
    vector<Player>      m_vPlayers;
    vector<Continent>   m_vContinents;
    vector<Card>        m_vCards;
    int                 m_nTradeInBonus;


public:
    void setPlayers(vector<Player> v){
        m_vPlayers = v;
    }

    vector<Player> getPlayers(void){
        return m_vPlayers;
    }

    void setContinents(vector<Continent> v){
        m_vContinents = v;
    }

    vector<Continent> getContinents(void){
        return m_vContinents;
    }

    void setTradeInBonus(int n){
        m_nTradeInBonus = n;
    }

    int getTradeInBonus(void){
        return m_nTradeInBonus;
    }

    void setDeck(vector<Card> v){
        m_vCards = v;
    }
    void setCards(vector<Card> v){
        setDeck(v);
    }

    vector<Card> getDeck(void){
        return m_vCards;
    }
    vector<Card> getCards(void){
        return getDeck();
    }


    vector<Card> createDeck(void){
        vector<Card> deck;
        return deck;
    }
    void shuffleDeck(void){

    }





};
