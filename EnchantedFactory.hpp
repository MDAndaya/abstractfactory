//
// Created by MDand on 2019-11-29.
//

#ifndef ABSTRACTFACTORY_ENCHANTEDFACTORY_HPP
#define ABSTRACTFACTORY_ENCHANTEDFACTORY_HPP

#include "Room.hpp"
#include "MazeFactory.hpp"
#include "EnchantedMaze.hpp"
#include "EnchantedWall.hpp"
#include "EnchantedRoom.hpp"
#include "EnchantedDoor.hpp"

class EnchantedFactory: public MazeFactory {

    Maze* makeMaze() override {
        return new EnchantedMaze;
    }

    Wall* makeWall() override {
        return new EnchantedWall;
    }

    Room* makeRoom() override {
        return new EnchantedRoom;
    }

    Door* makeDoor(Room* room1, Room* room2) {
        return new EnchantedDoor(room1, room2);
    }
};

#endif //ABSTRACTFACTORY_ENCHANTEDFACTORY_HPP
