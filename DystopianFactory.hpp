//
// Created by MDand on 2019-11-29.
//

#ifndef ABSTRACTFACTORY_DYSTOPIANFACTORY_HPP
#define ABSTRACTFACTORY_DYSTOPIANFACTORY_HPP

#include "MazeFactory.hpp"
#include "DystopianMaze.hpp"
#include "DystopianWall.hpp"
#include "DystopianRoom.hpp"
#include "DystopianDoor.hpp"

using namespace std;

class DystopianFactory: public MazeFactory {

    Maze* makeMaze() override {
        return new DystopianMaze;
    }

    Wall* makeWall() override {
        return new DystopianWall;
    }

    Room* makeRoom() override {
        return new DystopianRoom;
    }

    Door* makeDoor(Room* room1, Room* room2) {
        return new DystopianDoor(room1, room2);
    }




};

#endif //ABSTRACTFACTORY_DYSTOPIANFACTORY_HPP
