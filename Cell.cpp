//
// Created by nox on 7.3.2023.
//

#include "Cell.h"

bool Cell::getState() { return _state; }

void Cell::setState(bool state) { _state = state; }

void Cell::setCoordinates(int x, int y) {
    _xy.x = x;
    _xy.y = y;
}

Cell::coordinates Cell::getCoordinates() { return _xy; }
