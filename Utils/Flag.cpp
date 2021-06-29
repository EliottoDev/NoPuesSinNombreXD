//
// Created by elias on 29/06/2021.
//

#include "Flag.h"

game::Flag::Flag(game::EntityFlag eflag) {
    this->id = eflag;
    this->eflag = eflag;
    switch(this->id){
        case 1:
            this->name = "Invincible";
            break;
        case 2:
            this->name = "Boss";
            break;
        case 3:
            this->name = "Undead";
            break;
        case 4:
            this->name = "Can Pickup Loot";
            break;
        default:
            throw EXIT_FAILURE;
    }
}
