#pragma once
#include "SFML/Graphics.hpp"
#include "Player.h"
#include "EntityManager.h"
#include <iostream>

class InputManagement
{
public:
	
	InputManagement();

	EntityManager *ptr_EntityManager;

	void initPointers(EntityManager *em);

	/*
	takes all availiable input recieved in the time span of one
	game loop and distributes it to the needed classes
	*/
	void recieveInput();

	~InputManagement();

};

