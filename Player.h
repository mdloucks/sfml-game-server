#pragma once
#include "Entity.h"
#include "SFML/Graphics.hpp"
#include "Projectile.h"

#include <iostream>
#include <thread>
#include <string>
class Player : public Entity
{
public:
	Player();

	std::string name;
	int hp = 20;
	int atk = 5;
	float spd = 3;
	int def = 2;
	//base cast time for player
	int cast = 500;
	//direction of travel

	unsigned int Direction;

	bool isImmobile = false;

	/*
	sets the sprites position to that of the rect
	used in the game loop
	*/
	void updateSpritePosition();
	/*
	moves and updates the player in accordance to what buttons are pressed.
	*/
	void update(int dir);
	void startThread();

	~Player();

	class Abilities
	{
	public:

		struct Fireball {

			int dmg;
			int spd;
			sf::RectangleShape size;
			sf::Time cast;
		};
	
	};


protected:

	// up1 left2 down3 right4
	// counter for sprite anim
	unsigned short WalkCount = 0;
	unsigned short SpellCount = 0;
};



