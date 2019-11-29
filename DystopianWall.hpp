//
// Created by MDand on 2019-11-29.
//

#ifndef ABSTRACTFACTORY_DYSTOPIANWALL_HPP
#define ABSTRACTFACTORY_DYSTOPIANWALL_HPP

#include <iostream>
#include "Wall.hpp"
using namespace std;
class DystopianWall: public Wall {
public:
    DystopianWall() {
        describe();
    }
    void describe() override {
        cout << "Dystopian Wall!" << endl;
    }

};

#endif //ABSTRACTFACTORY_DYSTOPIANWALL_HPP
