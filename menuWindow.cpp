#include "menuWindow.h"
#include "ui_menuWindow.h"

MenuWindow::MenuWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MenuWindow)
{
    ui->setupUi(this);
    ps = NEW;
}

MenuWindow::~MenuWindow()
{
    delete ui;
}


void MenuWindow::on_startButton_clicked()
{
    ps = SINGLE;
    GameWindow *game = new GameWindow();
    game->setGeometry(x(), y(), width(), height());
    game->show();
    this->hide();
}


void MenuWindow::on_joinButton_clicked()
{
    Chessboard c;
}

