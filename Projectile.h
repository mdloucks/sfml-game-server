#pragma once
#include "Entity.h"
class Projectile : public Entity
{
public:
	Projectile();

	float Direction;
	int spd = 1;

	void move();

	~Projectile();
};

