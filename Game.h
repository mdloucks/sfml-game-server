#pragma once
#include "SFML\Graphics.hpp"
#include "PlayerAnimation.h"
/*
MAIN CLASS
*/
class Game
{
public:
	Game();

	const unsigned short width = 500;
	const unsigned short height = 500;

	
	
	/*
	main game loop which houses the most important parts of the game
	audio - tries to play audio in sync with in game events
	logic - the number crunching part of the loop used for AI, dmg calculations and more
	drawing - this class will coordinate the times stuff is drawn to the screen
	*/
	void gameLoop();
};

