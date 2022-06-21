#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <cell.h>
#include <QDebug>

class Chessboard {
public:
    Chessboard();
    Cell::STATUS getCellStatusAt(int x, int y);
    bool canSetCellStatus(int x, int y, Cell::STATUS s);
    void setCellStatus(int x, int y, Cell::STATUS s);

private:
    Cell cells[8][8];

};

#endif // CHESSBOARD_H
