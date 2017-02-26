#pragma once

#include "SFML/Graphics.hpp"
#include "SFML/Network.hpp"

#include "Projectile.h"
#include "Wall.h"
#include "Entity.h"
#include "Client.h"

#include <iostream>
#include <string>
#include <vector>

/*
A Player represents a hero/character playing real time in game
*/
class Player : public Entity, public Client
{
public:
	
	Player();
	// where the player clicks
	sf::Vector2f click;

	std::string hero;

	bool isImmobile = false;

	// give a detailed description of the player
	void printInfo(Player p);
	// derived classes may ovveride
	virtual void update();
	void init(std::string n, std::string h, int width, int height, int x, int y);
	void setIsCollision(bool collision);

	~Player();

};



