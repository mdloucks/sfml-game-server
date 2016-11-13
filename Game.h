#pragma once
#include "SFML\Window.hpp"
#include "PlayerAnimation.h"
#pragma once
#include "Drawing.h"
/*
MAIN CLASS
*/
const unsigned short width = 500;
const unsigned short height = 500;

sf::RenderWindow win(sf::VideoMode(width, height), "TPC");

class Game
{
public:
	Game();

	PlayerAnimation::PlayerWalking pw;
	Drawing d;
	/*
	main game loop which houses the most important parts of the game
	audio - tries to play audio in sync with in game events
	logic - the number crunching part of the loop used for AI, dmg calculations and more
	drawing - this class will coordinate the times stuff is drawn to the screen
	*/
	void gameLoop();
};

