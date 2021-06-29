//
// Created by Eliot on 29/06/2021.
//

#include <vector>
#include "Entity.h"
#include "../Utils/Flag.h"
#include "EntityType.h"
#include "../Utils/Texture.h"


game::Health game::Entity::getHealth() {
    return this->vida;
}

void game::Entity::setLifeState(bool lifestate) {
    this->isDead = !lifestate;
}

std::vector<game::Flag> game::Entity::getFlags() {
    return this->flags;
}

void game::Entity::addFlag(game::EntityFlag flag) {
    getFlags().push_back(new game::Flag(flag));
}


void game::Entity::setLocation(game::Location location) {
    this->location = location;
}

void game::Entity::setLocation(double x, double y) {
    this->location.setX(x);
    this->location.setY(y);
}

void game::Entity::setType(game::EntityType type) {
    this->type = type;
}

void game::Entity::addFlags(std::vector<game::EntityFlag> cflags) {
    for (auto flag : cflags){
        getFlags().push_back(new game::Flag(flag));
    }
}

game::Entity::Entity(game::Health vida, game::Location location, game::Texture textura, std::vector<game::EntityFlag> flags)
        : location(-100, -100) {
    this->vida = vida; this->location = location; this->textura = textura; this->flags = flags;
}

