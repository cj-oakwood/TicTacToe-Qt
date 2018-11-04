#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QTableWidgetItem>
#include <QTableWidget>
#include <QMainWindow>

namespace Ui {
class MainView;
}

class MainView : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainView(QWidget *parent = nullptr);
    ~MainView();

    void Init();

private:
    Ui::MainView *ui;
    QTableWidget* m_pTableWidget;
};

#endif // MAINVIEW_H
