//
// Created by MDand on 2019-11-29.
//

#ifndef ABSTRACTFACTORY_DOOR_HPP
#define ABSTRACTFACTORY_DOOR_HPP

#include "Room.hpp"

class Door {
protected:
    Room* room1;
    Room* room2;
public:
    Door(Room* room1, Room* room2): room1(room1), room2(room2) {}
    virtual void describe() = 0;
    virtual ~Door() {
        delete room1, room2;
    }
};

#endif //ABSTRACTFACTORY_DOOR_HPP
