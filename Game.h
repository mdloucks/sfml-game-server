#pragma once

#include "SFML/Graphics.hpp"
#include "ImageManagement.h"
#include "Entity.h"
#include "Player.h"
#include "Projectile.h"
#include "Enemy.h"
#include "EntityManager.h"
#include "EntityInit.h"
#include "MeleeAI.h"
#include "InputManagement.h"

#include <vector>
#include <iostream>
#include <string>


/*
MAIN CLASS
main game loop which houses the most important parts of the game
audio - tries to play audio in sync with in game events
logic - the number crunching part of the loop used for AI, dmg calculations and more
drawing - this class will coordinate the times stuff is drawn to the screen

*/
class Game
{
public:

	// initialize any images we need
	Game();

	sf::Clock FPS_Clock;
	int LPS;
	int FPS;
	float FPS_Skip;

	const int winWidth = 800;
	const int winHeight = 500;


	//window allocated on the heap
	sf::RenderWindow *win = new sf::RenderWindow;
	
	ImageManagement obj_ImageManagement;
	Player *obj_Player = new Player;
	EntityInit obj_EntityInit;
	Enemy obj_Enemy;
	EntityManager obj_EntityManager;
	MeleeAI AI_Melee;
	InputManagement obj_InputManagement;

	Enemy *Enemy_Melee_Skeleton = & AI_Melee;

	//window func
	void initWin();
	void startThreads();
	void initPointers();
	void gameLoop();
	void createPlayers();
	void createEnemies();
	//graphics func

	~Game();

private:

};

