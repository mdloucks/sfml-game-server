#pragma once

#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Network.hpp"

#include "ImageManagement.h"
#include "Entity.h"
#include "Player.h"
#include "Projectile.h"
#include "Enemy.h"
#include "EntityManager.h"
#include "InputManagement.h"
#include "Wall.h"

#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>


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

	sf::Clock FPS_Clock;
	int LPS;
	int FPS;
	float FPS_Skip;

	int winWidth = 800;
	int winHeight = 500;

	sf::IpAddress ip_host = sf::IpAddress::getLocalAddress();
	
	unsigned short port = 7000;

	//window allocated on the heap
	sf::RenderWindow *win = new sf::RenderWindow;
	
	ImageManagement obj_ImageManagement;

	EntityManager obj_EntityManager;
	InputManagement obj_InputManagement;


	//window func
	void initWin();
	int gameLoop();
	//graphics func

	~Game();

private:

};

