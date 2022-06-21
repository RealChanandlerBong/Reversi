#ifndef CELL_H
#define CELL_H


class Cell {
public:
    enum STATUS {
        BLACK,
        WHITE,
        FREE,
    };

    Cell();
    void setLocation(int x, int y);
    void setStatus(STATUS s);
    STATUS getStatus();
    bool isFree();

private:
    int x, y;
    STATUS status;

};

#endif // CELL_H
