#pragma once

#include "SFML\Graphics.hpp"
#include "PlayerAnimation.h"
#include <iostream>

/*
MAIN CLASS
main game loop which houses the most important parts of the game
audio - tries to play audio in sync with in game events
logic - the number crunching part of the loop used for AI, dmg calculations and more
drawing - this class will coordinate the times stuff is drawn to the screen

*/
class Game
{
public:

	// initialize any images we need
	Game();
	//window allocated on the heap
	sf::RenderWindow *win = new sf::RenderWindow;
	PlayerAnimation pa;
	//window func
	void winInit();
	void gameLoop();
	//graphics func

	~Game();
};

