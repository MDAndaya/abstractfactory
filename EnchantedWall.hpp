//
// Created by MDand on 2019-11-29.
//

#ifndef ABSTRACTFACTORY_ENCHANTEDWALL_HPP
#define ABSTRACTFACTORY_ENCHANTEDWALL_HPP

#include <iostream>
#include "Wall.hpp"
using namespace std;
class EnchantedWall: public Wall {
public:
    EnchantedWall() {
        describe();
    }
    void describe() override {
        cout << "Enchanted Wall!" << endl;
    }

};

#endif //ABSTRACTFACTORY_ENCHANTEDWALL_HPP
