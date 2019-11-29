//
// Created by MDand on 2019-11-29.
//

#ifndef ABSTRACTFACTORY_ENCHANTEDMAZE_HPP
#define ABSTRACTFACTORY_ENCHANTEDMAZE_HPP

#include "Maze.hpp"

using namespace std;
class EnchantedMaze: public Maze {
public:
    EnchantedMaze() {
        cout << "Creating Enchanted Maze" << endl;
    }
    void addRoom(Room* r) override {
        rooms.push_back(r);
    }
};
#endif //ABSTRACTFACTORY_ENCHANTEDMAZE_HPP
