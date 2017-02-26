#pragma once

#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Network.hpp"

#include "Entity.h"
#include "Player.h"
#include "Projectile.h"
#include "Enemy.h"
#include "EntityManager.h"
#include "Wall.h"
#include "Server.h"

#include <vector>
#include <iostream>
#include <string>
#include <thread>


/*
MAIN CLASS

Make an object of this class and run game gameLoop to start the game
*/
class Game : public Server
{
public:

	Game();

	int gameLoop();

	~Game();

private:

};
