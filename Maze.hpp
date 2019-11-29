//
// Created by MDand on 2019-11-29.
//

#ifndef ABSTRACTFACTORY_MAZE_HPP
#define ABSTRACTFACTORY_MAZE_HPP

#include <vector>
#include <iostream>
#include "Room.hpp"
using namespace std;

class Maze {
protected:
    std::vector<Room*> rooms;
public:
    virtual ~Maze() {
        for (Room* r: rooms) {
            delete r;
        }
    }

    virtual void addRoom(Room* r) = 0;
};

#endif //ABSTRACTFACTORY_MAZE_HPP
