#pragma once

#include <iostream>
#include "Enemy.h"
#include <math.h>

/*
Melee Enemies follow a certain ai and can only attack at short ranges
*/
class MeleeAI : public Enemy
{
public:
	MeleeAI();

	int x_dist;
	int y_dist;
	/*
	This MeleeAI Find the distance of the x and y from the player
	to the enemy as well as some coord jumbo 
	and dictates the shortest route of travel while 
	looking realistic in game
	*/
	void enemyAI();

	~MeleeAI();
};

