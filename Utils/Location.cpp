//
// Created by Eliot on 29/06/2021.
//

#include "Location.h"

void game::Location::setX(double x) {
    this->x = x;
    return;
}

double game::Location::getX() {
    return this->x;
}

void game::Location::setY(double y) {
    this-> y = y;
    return;
}

double game::Location::getY() {
    return this->y;
}

game::Location::Location(double x, double y) {
    this->x = x; this->y = y;
}