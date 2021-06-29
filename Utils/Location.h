//
// Created by Eliot on 29/06/2021.
//

#ifndef THEGAME_LOCATION_H
#define THEGAME_LOCATION_H

namespace game {
    class Location {

    private:
        double x = -100;
        double y = -100;

    public:
        void setX(double x);

        void setY(double y);

        double getX();

        double getY();

        Location(double x, double y);
    };
}

#endif //THEGAME_LOCATION_H
