//
// Created by elias on 29/06/2021.
//

#include "Health.h"
#include "../Entities/Player.h"

void game::Health::damage(int damage) {
    damage = std::abs(damage);
    this->value -= damage;
}

void game::Health::restoreHealth() {
    this->value = this->max;
}

unsigned int game::Health::getMaxHealth() {
    return this->max;
}

unsigned int game::Health::getValue() {
    return this->value;
}

void game::Health::update() {
    if(value == 0)
        this->entity->setLifeState(false);
}

game::Health::Health(game::Entity* entity, int max, int value) {
    this->entity = entity; this->max = max;
    if(value == 0){
        this->value = max;
    }
}

game::Health::Health(game::Player* entity, int max, int value) {
    this->entity = entity; this->max = max;
    if(value == 0){
        this->value = max;
    }
}

void game::Health::setMax(unsigned int max) {
    this->max = max;
}

void game::Health::setHealth(unsigned int health) {
    this->value = health;
}

