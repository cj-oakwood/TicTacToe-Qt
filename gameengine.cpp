#include "gameengine.h"

GameEngine::GameEngine(QTableWidget *tableWidget) :
    m_pQTableWidget(tableWidget),
    m_Player(Player::Player_X)
{

}

bool GameEngine::CanPlacePiece(int x, int y)
{
    auto item = m_pQTableWidget->itemAt(x,y);
    if(item->text() != QString().isNull() ||item->text() != QString().isEmpty() )
    {
        return false;
    }
    else
        return true;
}

void GameEngine::PlacePiece(Player player, int x, int y)
{
    if(CanPlacePiece(x,y))
    {
        m_pQTableWidget->setItem(x,y,new QTableWidgetItem(player == Player::Player_O ? "O" : "X"));
    }
}

bool GameEngine::IsPlayerTurn(Player player)
{
    return (player == m_Player);
}


