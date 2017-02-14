#pragma once
#include "Entity.h"
#include "Player.h"
#include <math.h>
#include <iostream>
#include <vector>
#include <unistd.h>
/*
This base class will host many basic types of enemies
This will house basic stats and functions that all enemies will use
*/
class Enemy : public Entity
{
public:
	Enemy(sf::Texture &t,
	int textX, int textY, int width, int height, int x, int y);

	
	// 1up 2left 3down 4right
	
	//counter for loop animation
	
	bool isAggro;

	sf::CircleShape Aggro_Radius;
	sf::CircleShape atk_range;

	/*
	if (rect.x - Radius.x)^2 + (rect.y - Radius.y)^2 < radius^2
	*/
	void isInAggroRadius();
	void update();
	void attack();
	void initPointers(Player p);

	void enemyAI();

	float spd = 0.1;
	int hp;
	int atk;
	int def;
	int atk_spd;


	int Direction;
	
	~Enemy();

	private:

	Player * ptr_Player;

	int WalkCount = 0;
	int x_dist;
	int y_dist;

};

