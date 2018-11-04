#ifndef GAMEENGINE_H
#define GAMEENGINE_H
#include <QTableWidget>

enum Player
{
    Player_X,
    Player_O,
};

class GameEngine
{
public:
    GameEngine(QTableWidget *tableWidget=nullptr);
    bool CanPlacePiece(int x, int y);
    void PlacePiece(Player player, int x, int y);
    bool IsPlayerTurn(Player player);

private:

    QTableWidget* m_pQTableWidget;
    Player m_Player;
};

#endif // GAMEENGINE_H
