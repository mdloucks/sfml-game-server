#pragma once
#include "Player.h"
#include "Enemy.h"
#include "Projectile.h"
#include "ImageManagement.h"

#include <string>
#include <iostream>

class EntityInit
{
public:
	EntityInit();

	ImageManagement obj_ImageManagement;

	/*
	This function sets the enemies starting position, texturerect,
	size, texture and more

	@param1 the player to be initialized
	@param2 the texture the player is to be set to
	@para3 the width of the player
	@param4 the height of the player
	@param5 the starting x in the spritesheet image
	@param6 the starting y in the spritesheet image
	@param7 starting x
	@param8 starting y
	*/
	void initPlayer(Player *p, std::string name, sf::Texture &t, float width, float height, float textX, float textY, float x = 0, float y = 0);
	/*
	This function sets the enemies starting position, texturerect,
	size, texture, AI type

	@param1 the enemy to be initialized
	@param2 the texture the enemy is to be set to
	@param3 the width of the enemy
	@param4 the height of the enemy
	@param5 the starting x in the spritesheet image
	@param6 the starting y in the spritesheet image
	@param7 a enum for which type of enemy we're dealing with
	@param8 starting x
	@param9 starting y
	
	*/
	void initEnemy(Enemy *e, sf::Texture &t, float width, float height, float textX, float textY, Enemy::AI ai, float x = 0, float y = 0);


	~EntityInit();
};

