#include "Game.h"
#include <iostream>

int main()
{
	// initialize the game loop
	Game g;
	
	g.initWin();
	std::cout << "Game closed with exit code: " << g.gameLoop() << std::endl;
}