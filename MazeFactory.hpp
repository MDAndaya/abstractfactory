//
// Created by MDand on 2019-11-29.
//

#ifndef ABSTRACTFACTORY_MAZEFACTORY_HPP
#define ABSTRACTFACTORY_MAZEFACTORY_HPP

#include "Maze.hpp"
#include "Room.hpp"
#include "Wall.hpp"
#include "Door.hpp"

class MazeFactory {

public:
    virtual Maze* makeMaze() = 0;
    virtual Wall* makeWall() = 0;
    virtual Room* makeRoom() = 0;
    virtual Door* makeDoor(Room* room1, Room* room2) = 0;
};


#endif //ABSTRACTFACTORY_MAZEFACTORY_HPP
