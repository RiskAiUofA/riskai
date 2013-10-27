#ifndef PLAYER_H
#define PLAYER_H

#include <vector>

typedef enum PlayerColor{
    BLACK,
    BLUE,
    GRAY,
    YELLOW,
    RED,
    GREEN
}PlayerColor;

class Player
{
public:
    Player(Board * board, int NumArmies, PlayerColor pid);

    void startMove();

    int getNumArmies(){return m_nNumArmies;}

    vector<Territory> getTerritoriesOwned(){return m_vTerritoriesOwned;}

    vector<Continent> getConqueredContinents(){return m_vConqueredContinents;}

    PlayerColor getPID(){return m_tPID;}

#ifdef DEBUGMODE

    vector<Move> getMoves(){return m_vMoveLog;}
    vector<Card> getCards(){return m_vCards;}

#endif

private:
    int m_nNumArmies;
    vector<Territory> m_vTerritoriesOwned;
    vector<Continent> m_vConqueredContinents;
    PlayerColor m_tPID;
    vector<Move> m_vMoveLog;
    vector<Card> m_vCards;
    Board * m_Board;

};

#endif // PLAYER_H
