//
// Created by elias on 29/06/2021.
//

#ifndef THEGAME_FLAG_H
#define THEGAME_FLAG_H


#include <string>
#include "../Entities/EntityFlag.h"

namespace game {
    class Flag {
    private:
        unsigned int id;
        std::string name;
        game::EntityFlag eflag;
    public:
        Flag(game::EntityFlag eflag);
    };
}


#endif //THEGAME_FLAG_H
