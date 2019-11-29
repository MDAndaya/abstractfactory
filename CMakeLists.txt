cmake_minimum_required(VERSION 3.14)
project(abstractfactory)

set(CMAKE_CXX_STANDARD 14)

add_executable(abstractfactory Driver.cpp MazeFactory.hpp MazeGame.hpp Maze.hpp Room.hpp Wall.hpp Door.hpp EnchantedFactory.hpp EnchantedMaze.hpp EnchantedRoom.hpp EnchantedWall.hpp EnchantedDoor.hpp DystopianFactory.hpp DystopianRoom.hpp DystopianWall.hpp DystopianDoor.hpp DystopianMaze.hpp)