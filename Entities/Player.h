//
// Created by Eliot on 29/06/2021.
//

#ifndef THEGAME_PLAYER_H
#define THEGAME_PLAYER_H

#include "../Utils/Location.h"
#include "Entity.h"

namespace game {
    class Player : Entity {
    public:
        inline Player(game::Health vida, game::Location location, game::Texture textura,
                      std::vector<game::EntityFlag> flags);
    };
}


#endif //THEGAME_PLAYER_H
