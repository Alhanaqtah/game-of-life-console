//
// Created by nox on 7.3.2023.
//

#include <iostream>
#include "Field.h"

Field::Field(int width, int height) : _width(width),  _height(height) {
    field = new Cell*[_width];
    for (int i = 0; i < _width; ++i)
        field[i] = new Cell[_height];

    for (int i = 0; i < _width; ++i)
        for (int j = 0; j < _height; ++j)
            field[i][j].setCoordinates(i, j);
}

Field::~Field() {
    for (int i = 0; i < _width; ++i)
            delete field[i];
    delete[] field;
}

int Field::adjacentLivingCells(Cell cell) {
    int count = 0;
    auto xy = cell.getCoordinates();

    if (field[xy.x - 1][xy.y - 1].getState())
        count++;
    if (field[xy.x][xy.y - 1].getState())
        count++;
    if (field[xy.x + 1][xy.y - 1].getState())
        count++;
    if (field[xy.x + 1][xy.y].getState())
        count++;
    if (field[xy.x + 1][xy.y + 1].getState())
        count++;
    if (field[xy.x][xy.y + 1].getState())
        count++;
    if (field[xy.x - 1][xy.y + 1].getState())
        count++;
    if (field[xy.x - 1][xy.y].getState())
        count++;

    return count;
}

void Field::update() {
    for (int i = 1; i < _width - 1; ++i)
        for (int j = 1; j < _height - 1; ++j) {
            if (adjacentLivingCells(field[i][j]) == 3)
                field[i][j].setState(true);
            if (adjacentLivingCells(field[i][j]) == 2)
                continue;
            else
                field[i][j].setState(false);
        }

    field[1 + 1][0 + 2].setState(true);
    field[1 + 1][1 + 2].setState(true);
    field[1 + 1][2 + 2].setState(true);
}

void Field::draw() {
    for (int i = 0; i < _width; ++i) {
        for (int j = 0; j < _height; ++j) {
            if (field[i][j].getState())
                std::cout << '@';
            else
                std::cout << '#';
        }
        std::cout << '\n';
    }
}