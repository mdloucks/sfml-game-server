#pragma once

#include "SFML/Graphics.hpp"
#include "SFML/Network.hpp"

#include "Projectile.h"
#include "Wall.h"
#include "Entity.h"

#include <iostream>
#include <string>
#include <vector>

class Player : public Entity
{
public:

	// in game stats
	std::string name;
	int hp = 200;
	int atk = 5;
	float spd = 3;
	int def = 2;
	//base cast time for player
	int cast = 500;
	//direction of travel

	bool isImmobile = false;

	/*
	sets the sprites position to that of the rect
	used in the game loop
	*/
	/*
	moves and updates the player in accordance to what buttons are pressed.
	*/
	void update(int dir);
	void init(std::string n, sf::Texture &t,
	int textX, int textY, int width, int height, int x, int y);
	void setIsCollision(bool collision);

	~Player();

protected:

	// Network info gets passed only to InputManager
	sf::IpAddress Player_ip;
	unsigned short Player_port;

};



