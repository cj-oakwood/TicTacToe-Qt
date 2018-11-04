#include "gameengine.h"
#include <QLabel>
#include <QTableWidget>
#include "mainview.h"
#include "ui_mainview.h"

MainView::MainView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainView),
    m_pTableWidget(nullptr)
{
    ui->setupUi(this);

    auto label = new QLabel("Tic Tac Toe", this);

    m_pTableWidget = new QTableWidget(this);
    m_pTableWidget->setRowCount(3);
    m_pTableWidget->setColumnCount(3);

    GameEngine ge(m_pTableWidget);

    auto playersTurn = new QLabel("Players turn: X", this);

    ui->verticalLayout->addWidget(label);
    ui->verticalLayout->addWidget(m_pTableWidget);
    ui->verticalLayout->addWidget(playersTurn);
}

MainView::~MainView()
{
    delete ui;
}

void MainView::Init()
{
     QTableView qTableView;
}
