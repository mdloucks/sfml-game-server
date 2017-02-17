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

	sf::IpAddress host_ip = sf::IpAddress::getLocalAddress();
	unsigned short host_port = sf::UdpSocket::AnyPort;

	EntityManager obj_EntityManager;

	int gameLoop();
	sf::Packet& operator >>(sf::Packet& packet, Player &player);

	~Game();

private:

};

