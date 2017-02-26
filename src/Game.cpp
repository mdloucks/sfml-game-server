#include "Game.h"

Game::Game() 
{
}


int Game::gameLoop()
{

	while (true)
	{	

		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
		{
			return 0;
		}

		//obj_EntityManager.updateWall();

		// Update Enemies
		//obj_EntityManager.updateEnemy();

		// Update Projectiles
		//obj_EntityManager.updatePP();

		//obj_EntityManager.updatePlayer();
	}
}



Game::~Game()
{
}
