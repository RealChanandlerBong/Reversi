#include "chessboard.h"

Chessboard::Chessboard() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cells[i][j].setLocation(i, j);
            cells[i][j].setStatus(Cell::FREE);
        }
    }
    cells[3][3].setStatus(Cell::BLACK);
    cells[4][4].setStatus(Cell::BLACK);
    cells[3][4].setStatus(Cell::WHITE);
    cells[4][3].setStatus(Cell::WHITE);
}

Cell::STATUS Chessboard::getCellStatusAt(int x, int y) {
    return cells[x][y].getStatus();
}

bool Chessboard::canSetCellStatus(int x, int y, Cell::STATUS s) {
    if (!cells[x][y].isFree()) {
        return false;
    }
    // TODO: implement this
    return true;
}

void Chessboard::setCellStatus(int x, int y, Cell::STATUS s) {
    if (!canSetCellStatus(x, y, s)) {
        return;
    }
    cells[x][y].setStatus(s);
    // TODO: flip
}
