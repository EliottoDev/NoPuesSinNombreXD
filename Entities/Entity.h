//
// Created by Eliot on 29/06/2021.
//

#ifndef THEGAME_ENTITY_H
#define THEGAME_ENTITY_H


#include "../Utils/Location.h"
#include "../Utils/Health.h"
#include "EntityType.h"
#include "EntityFlag.h"
#include "../Utils/Texture.h"
#include <string>
#include <vector>


namespace game {
    class Entity {
    private:

        game::Health vida;
        game::Location location;
        game::Texture textura;
        bool isDead = false;
        std::vector<game::Flag> flags;
        game::EntityType type;
    protected:
        Entity(Health vida, Location location, game::Texture textura, std::vector<EntityFlag> flags);

    public:
        Entity(game::Health vida, game::Location location, game::Texture textura, std::vector<game::EntityFlag> flags);
        game::Health getHealth();
        void setLifeState(bool lifestate);
        std::vector<game::Flag> getFlags();
        void addFlag(game::EntityFlag flag);
        void addFlags(std::vector<game::EntityFlag> flags);
        void setLocation(game::Location);
        void setLocation(double x, double y);
        void setType(game::EntityType type);

    };
}


#endif //THEGAME_ENTITY_H
