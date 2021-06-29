//
// Created by elias on 29/06/2021.
//

#ifndef THEGAME_HEALTH_H
#define THEGAME_HEALTH_H


#include "../Entities/Entity.h"
#include "../Entities/Player.h"

namespace game {
    class Health {
    private:
        unsigned int value;
        unsigned int max;
        game::Entity entity;
    public:
        void update();
        Health(game::Entity * entity, int max, int value = 0);
        unsigned int getValue();
        unsigned int getMaxHealth();
        void setMax(unsigned int max);
        void setHealth(unsigned int health);
        void restoreHealth();
        void damage(int damage);
        Health(Player *pPlayer, int i, int i1);
    };
}


#endif //THEGAME_HEALTH_H
