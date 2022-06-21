#include "cell.h"


Cell::Cell() {
    this->x = 0;
    this->y = 0;
    this->status = FREE;
}

void Cell::setLocation(int x, int y) {
    this->x = x;
    this->y = y;
}

void Cell::setStatus(STATUS s) {
    status = s;
}

Cell::STATUS Cell::getStatus() {
    return status;
}

bool Cell::isFree() {
    return status == FREE;
}
