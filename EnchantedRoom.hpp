//
// Created by MDand on 2019-11-29.
//

#ifndef ABSTRACTFACTORY_ENCHANTEDROOM_HPP
#define ABSTRACTFACTORY_ENCHANTEDROOM_HPP

#include <iostream>
#include "Room.hpp"

using namespace std;

class EnchantedRoom: public Room {
public:
    EnchantedRoom() {
        describe();
    }
    void describe() override {
        cout << "Enchanted Room!" << endl;
    }
};

#endif //ABSTRACTFACTORY_ENCHANTEDROOM_HPP
