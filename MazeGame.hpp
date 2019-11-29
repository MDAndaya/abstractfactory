//
// Created by MDand on 2019-11-29.
//

#ifndef ABSTRACTFACTORY_MAZEGAME_HPP
#define ABSTRACTFACTORY_MAZEGAME_HPP

#include "MazeFactory.hpp"

class MazeGame {
public:
    Maze* createMaze(MazeFactory& mazeFactory) {
        Maze* maze = mazeFactory.makeMaze();
        Room* room1 = mazeFactory.makeRoom();
        Wall* wall = mazeFactory.makeWall();
        Room* room2 = mazeFactory.makeRoom();
        Door* door = mazeFactory.makeDoor(room1, room2);
        maze->addRoom(room1);
        maze->addRoom(room2);
        return maze;
    }

};

#endif //ABSTRACTFACTORY_MAZEGAME_HPP
