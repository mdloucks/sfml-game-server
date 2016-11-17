#pragma once
#include "Entity.h"
#include "SFML\Graphics.hpp"
#include <iostream>
class Player : public Entity
{
public:
	Player();

	int hp = 20;
	int atk = 5;
	int spd = 2;
	int def = 2;
	//direction of travel
	// up1 left2 down3 right4
	unsigned int Direction = 3;

	// counter for sprite anim
	int count = 0;

	void setPosition(int width, int height);
	void updateBounds();
	void updatePosition();

	~Player();
};

