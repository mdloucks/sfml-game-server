#pragma once

#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Network.hpp"

#include "Entity.h"
#include "Player.h"
#include "Projectile.h"
#include "Enemy.h"
#include "EntityManager.h"
#include "InputManager.h"
#include "Wall.h"

#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>


/*
MAIN CLASS

Make an object of this class and run game gameLoop to start the game
*/
class Game
{
public:

	// initialize any images we need
	Game();

	int winWidth = 800;
	int winHeight = 500;

	sf::IpAddress ip_host = sf::IpAddress::getLocalAddress();

	//window allocated on the heap
	sf::RenderWindow *win = new sf::RenderWindow;
	

	EntityManager obj_EntityManager;

	//window func
	void initWin();
	int gameLoop();
	//graphics func

	~Game();

private:

};

