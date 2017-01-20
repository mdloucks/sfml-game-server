#pragma once
#include "Player.h"
#include "Enemy.h"
#include "Projectile.h"
#include "Entity.h"
#include "SFML/Graphics.hpp"
#include "MeleeAI.h"
#include <vector>
#include <iostream>
/*
This class will hold any entities instantiated in the world
*/
class EntityManager : public Entity
{
public:
	//this takes parameters to the pointers in game
	EntityManager();

	void initPointers(sf::RenderWindow &w, Player *p);

	//////////////////// PROJECTILE

	/*
	this method puts a new projectile object into the vector
	sets its direction and position
	*/
	//void addPP();
	/*
	calls the move() function in the projectile class, which moves the projectiles
	based on the direction the player is facing
	*/
	//void movePP();
	/*
	draws the projectile to the screen
	*/
	//void drawPP();
	/*
	this method loops through the contents of the vector and calls the 
	move draw methods on all of them
	*/
	//void updatePP();

	//////////// ENEMY

	/*
	takes an enemy object through it's parameters and adds it to the vecor
	@param Enemy &e
	*/
	void addEnemy(Enemy *e);
	void moveEnemy();
	/*
	Calls the enemies move and update sprite functions
	*/
	void drawEnemy();
	/*
	this method loops through the contents of the vector and calls the 
	move draw methods on all of them
	*/
	void updateEnemy();

	//////////////////// PLAYER 

	void addPlayer(Player *p);
	/*
	calls the move() function in the projectile class, which moves the projectiles
	based on the direction the player is facing
	*/
	void movePlayer(int dir);
	/*
	draws the projectile to the screen
	*/
	void drawPlayer();
	/*
	this method loops through the contents of the vector and calls the 
	move draw methods on all of them
	*/
	void updatePlayer();

	~EntityManager();

private:

	sf::RenderWindow *win;

	// Pointer to the player object in game.cpp
	Player *obj_Player;
	MeleeAI obj_MeleeAI;
	Projectile obj_Projectile;

	//  Vectors
	std::vector<Projectile>::const_iterator PP_Iterator;
	std::vector<Projectile> PP_Vector;

	std::vector<Enemy *>::const_iterator Enemy_Iterator;
	std::vector<Enemy *> Enemy_Vector;

	std::vector<Player *>::const_iterator Player_Iterator;
	std::vector<Player *> Player_Vector;

	// Counters
	int PP_count;
	int Enemy_count;
	int Player_count;
};

