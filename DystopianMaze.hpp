//
// Created by MDand on 2019-11-29.
//

#ifndef ABSTRACTFACTORY_DYSTOPIANMAZE_HPP
#define ABSTRACTFACTORY_DYSTOPIANMAZE_HPP

#include <iostream>
#include "Maze.hpp"
using namespace std;
class DystopianMaze: public Maze {
public:
    DystopianMaze() {
        cout << "Creating Dystopian Maze" << endl;
    }
    void addRoom(Room* r) override {
        rooms.push_back(r);
    }
};

#endif //ABSTRACTFACTORY_DYSTOPIANMAZE_HPP
