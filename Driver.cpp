#include <iostream>
#include "MazeGame.hpp"
#include "DystopianFactory.hpp"
#include "EnchantedFactory.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    MazeGame mazeGame;

    MazeFactory* dystopianFactory = new DystopianFactory;
    Maze* dystopianMaze = mazeGame.createMaze(*dystopianFactory);

    cout << "Successfully created Dystopian Maze\n" << endl;

    MazeFactory* enchantedFactory = new EnchantedFactory;
    Maze* enchantedMaze = mazeGame.createMaze(*enchantedFactory);

    cout << "Successfully created Enchanted Maze\n" << endl;


    return 0;
}