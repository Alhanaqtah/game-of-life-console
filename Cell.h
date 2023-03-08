//
// Created by nox on 7.3.2023.
//

#ifndef LIFE_GAME_CONSOLE_CELL_H
#define LIFE_GAME_CONSOLE_CELL_H


class Cell {
private:
    // true = Alive
    // false = Dead
    bool _state = false;

    // Coordinates
    struct coordinates {
        int x;
        int y;
    } _xy;

public:

    Cell() = default;
    // Cell(int x, int y): _x(x), _y(y) {};

    bool getState();
    void setState(bool);
    void setCoordinates(int, int);
    coordinates getCoordinates();
};


#endif //LIFE_GAME_CONSOLE_CELL_H
