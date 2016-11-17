#pragma once
#include "Entity.h"
class Projectile : public Entity
{
public:
	Projectile();

	unsigned int Direction;
	int spd = 10;

	void move();

	~Projectile();
};

