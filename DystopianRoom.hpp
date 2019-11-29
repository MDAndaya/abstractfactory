//
// Created by MDand on 2019-11-29.
//

#ifndef ABSTRACTFACTORY_DYSTOPIANROOM_HPP
#define ABSTRACTFACTORY_DYSTOPIANROOM_HPP

#include <iostream>
#include "Room.hpp"
using namespace std;

class DystopianRoom: public Room {
public:
    DystopianRoom() {
        describe();
    }
    void describe() override {
        cout << "Dystopian Room!" << endl;
    }
};

#endif //ABSTRACTFACTORY_DYSTOPIANROOM_HPP
