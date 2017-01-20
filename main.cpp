#include "Game.h"


int main()
{
	// initialize the game loop
	Game g;
	g.initPointers();
	g.initWin();
	g.createPlayers();
	g.createEnemies();
	g.startThreads();
	g.gameLoop();
}