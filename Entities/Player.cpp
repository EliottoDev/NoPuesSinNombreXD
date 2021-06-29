//
// Created by Eliot on 29/06/2021.
//

#include "Player.h"

game::Player::Player() {
    std::vector<game::EntityFlag> flags;
    Entity(new game::Health(this, 10, 0), new game::Location(10, 10), new game::Texture, flags);
}
