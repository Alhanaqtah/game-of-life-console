//
// Created by nox on 7.3.2023.
//

#ifndef LIFE_GAME_CONSOLE_FIELD_H
#define LIFE_GAME_CONSOLE_FIELD_H

#include "Cell.h"

class Field {
private:
    int _height;
    int _width;

    Cell** field;

    int adjacentLivingCells(Cell);

public:
    Field(int ,int);
    ~Field();

    // Updates game state: checks cells are alive or dead
    void update();

    // Draw game field
    void draw();
};


#endif //LIFE_GAME_CONSOLE_FIELD_H
