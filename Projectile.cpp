#include "Projectile.h"



Projectile::Projectile()
{
	rect.setSize(sf::Vector2f(15, 15));
	rect.setFillColor(sf::Color::Red);
}


void Projectile::move()
{
	if (Direction == 1) // UP
	{
		rect.move(0,-spd);
	}
	if (Direction == 2) // LEFT
	{
		rect.move(-spd,0);
	}
	if (Direction == 3) // DOWN
	{
		rect.move(0,spd);
	}
	if (Direction == 4) // RIGHT
	{
		rect.move(spd,0);
	}
}

Projectile::~Projectile()
{
}
