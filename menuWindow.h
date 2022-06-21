#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QMainWindow>
#include <gamewindow.h>
#include <chessboard.h>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MenuWindow; }
QT_END_NAMESPACE

class MenuWindow : public QMainWindow
{
    Q_OBJECT

public:
    enum PLAYER_STATUS { NEW, SINGLE, HOST, GUEST };

    MenuWindow(QWidget *parent = nullptr);
    ~MenuWindow();

private slots:
    void on_startButton_clicked();

    void on_joinButton_clicked();

private:
    Ui::MenuWindow *ui;
    PLAYER_STATUS ps;

};
#endif // MENUWINDOW_H
