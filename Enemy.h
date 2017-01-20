#pragma once
#include "Entity.h"
#include "Player.h"
#include <math.h>
#include <iostream>
/*
This base class will host many basic types of enemies
This will house basic stats and functions that all enemies will use
*/
class Enemy : public Entity
{
public:
	Enemy();

	
	// 1up 2left 3down 4right
	
	//counter for loop animation
	

	bool isAggro;

	sf::CircleShape Aggro_Radius;

	enum AI { ENEMY_MELEE};
	AI currentAI = ENEMY_MELEE;
	/*
	if (rect.x - Radius.x)^2 + (rect.y - Radius.y)^2 < radius^2
	*/
	bool isInAggroRadius();
	void updateAggroRadiusPosition();
	void updateSpritePosition();
	void initPointers(Player *p);

	virtual void enemyAI();

	int getHp();
	int getAtk();
	int getDef();
	int getSpd();

	Player *ptr_Player;
	
	~Enemy();

private:

	



protected:

	int WalkCount = 0;

	float spd = 1;
	int hp;
	int atk;
	int def;


	int Direction;
	
};

