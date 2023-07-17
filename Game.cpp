#include "Game.h"

int Game::StartGame() 
{
    drawMenu(1);

    return 0;
}

void Game::clearScreen(char)
{

}

int Game::drawMenu(int option)
{
    std::cout << "___________________________________________________\n";
    std::cout << "|                                                  |\n";
    std::cout << "|        _____ _                                   |\n";
    std::cout << "|       / ____| |                    _     _       |\n";
    std::cout << "|      | |    | |__   ___  ___ ___ _| |_ _| |_     |\n";
    std::cout << "|      | |    | \'_ \\ / _ \\/ __/ __|_   _|_   _|    |\n";
    std::cout << "|      | |____| | | |  __/\\__ \\__ \\ |_|   |_|      |\n";
    std::cout << "|       \\_____|_| |_|\\___||___/___/                |\n";
    std::cout << "|                                                  |\n";
    std::cout << "|                   -> Start                       |\n";
    std::cout << "|                      Close                       |\n";
    std::cout << "|                                                  |\n";
    std::cout << "|                                                  |\n";
    std::cout << "|             Antoine Farine @ 2023                |\n";
    std::cout << "|__________________________________________________|\n";

    return 0;
}
