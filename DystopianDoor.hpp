//
// Created by MDand on 2019-11-29.
//

#ifndef ABSTRACTFACTORY_DYSTOPIANDOOR_HPP
#define ABSTRACTFACTORY_DYSTOPIANDOOR_HPP

#include <iostream>
#include "Door.hpp"
using namespace std;

class DystopianDoor: public Door {

public:
    DystopianDoor(Room* room1, Room* room2): Door(room1, room2) {
        describe();
    }

    void describe() override {
        cout << "Dystopian Door connects Dystopian Room (" << room1
             << ") and Dystopian Room (" << room2 << ")" << endl;
    }
};

#endif //ABSTRACTFACTORY_DYSTOPIANDOOR_HPP
