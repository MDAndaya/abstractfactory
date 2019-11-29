//
// Created by MDand on 2019-11-29.
//

#ifndef ABSTRACTFACTORY_ENCHANTEDDOOR_HPP
#define ABSTRACTFACTORY_ENCHANTEDDOOR_HPP


#include <iostream>
#include "Door.hpp"
using namespace std;

class EnchantedDoor: public Door {

public:
    EnchantedDoor(Room* room1, Room* room2): Door(room1, room2) {
        describe();
    }

    void describe() override {
        cout << "Enchanted Door connects Enchanted Room (" << room1
             << ") and Enchanted Room (" << room2 << ")" << endl;
    }
};

#endif //ABSTRACTFACTORY_ENCHANTEDDOOR_HPP
