#pragma once
#include "SFML\Graphics.hpp"
#include "Player.h"
#include "ImageManagement.h"
/*
this class is used to animate the players movement, abilities, and other actions
It will send the finished sprite to the Drawing class where it will be drawn.
*/
class PlayerAnimation
{
public:
	
	PlayerAnimation();
	~PlayerAnimation();

	class PlayerWalking
	{
	public:
		ImageManagement::PlayerSheets im;
		Player::PlayerStats ps;
		Player::PlayerConditions pc;

		unsigned short walkCount = 0;

		void playerWalk();
	};
	/*
	class that handles players drawn if they are under a condition
	*/
	class PlayerCondition
	{
		//impairment
		void drawFrozen();
		void drawRooted();
		void drawDead();
		void drawStunned();
		// dot
		void drawIgnited();
		void drawPoisoned();
		void drawBleeding();
	};
};