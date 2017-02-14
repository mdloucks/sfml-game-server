#pragma once
#include "Entity.h"
#include "SFML/Graphics.hpp"
#include "Projectile.h"
#include "Wall.h"

#include <iostream>
#include <string>
#include <vector>

class Player : public Entity
{
public:
	Player(std::string n, sf::Texture &t,
	int textX, int textY, int width, int height, int x, int y);
	
	std::string name;
	int hp = 200;
	int atk = 5;
	float spd = 3;
	int def = 2;
	//base cast time for player
	int cast = 500;
	//direction of travel
	unsigned short WalkCount = 0;
	unsigned short SpellCount = 0;

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

	void setIsCollision(bool collision);

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
};



