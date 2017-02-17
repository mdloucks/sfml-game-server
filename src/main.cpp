#include "Game.h"
#include <iostream>

int main()
{
	// initialize the game loop
	// save the outcome in a short
	Game g;
	unsigned short outcome = g.gameLoop();

	if(outcome == 0)
	{
		std::cout << "Game closed with exit code: " << outcome << std::endl;
	}
}