#include "Game.h"

Game::Game() 
{
}

void Game::createPlayers()
{

	obj_ImageManagement.loadPlayer();

	obj_EntityInit.initPlayer(
		obj_Player,
		"charles",
		obj_ImageManagement.txt_player,
		64, 64, 64, 64,
		0, 0);

	obj_EntityManager.addPlayer(obj_Player);

}

void Game::createEnemies()
{
	obj_ImageManagement.loadSkeleton();

	obj_EntityInit.initEnemy(
		Enemy_Melee_Skeleton,
		obj_ImageManagement.txt_skeleton,
		64, 64, 64, 64,
		Enemy::AI::ENEMY_MELEE,
		30, 30);

}

void Game::initWin()
{
	win->create(sf::VideoMode(winWidth,winHeight),"TPC");
	win->setActive();
	win->setFramerateLimit(60);
	std::cout << "creating window" << std::endl;
}

void Game::startThreads()
{
	obj_Player->startThread();
}

void Game::initPointers()
{
	obj_Enemy.initPointers(obj_Player);
	obj_EntityManager.initPointers(*win, obj_Player);
	obj_InputManagement.initPointers(&obj_EntityManager);
}

void Game::gameLoop()
{

	FPS_Clock.restart();
	while (win->isOpen())
	{	
		
		// completely wipe the frame of all images
		win->clear(sf::Color::Black);

		sf::Event event;
		// handles all events that occured since last iteration of the frame eg. mouse clicks
		while (win->pollEvent(event))
		{

			if (event.type == sf::Event::Closed)
			{
				win->close();
			}
				
			if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::E)
			{
				obj_EntityManager.addEnemy(Enemy_Melee_Skeleton);
			}
		}

		// SPACE BAR
		// if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
		// {
		// 	obj_EntityManager.addPP();
		// }

		obj_InputManagement.recieveInput();
		// Update Enemies
		obj_EntityManager.updateEnemy();

		// Update Projectiles
		//obj_EntityManager.updatePP();

		obj_EntityManager.updatePlayer();

		// Draw Player
		win->draw(obj_Player->sprite);
		// display the rendered images
		win->display();

		LPS++;
		// the clock is offset by 20 microseconds to compensate for inaccurate
		if (FPS_Clock.getElapsedTime().asMicroseconds() > 1999980)
		{ 
			FPS = LPS;
			//std::cout << "/////FPS///// " << FPS << std::endl;
			FPS_Skip = FPS / 60;
			LPS = 0;
			FPS_Clock.restart();
		} 
	}
}

Game::~Game()
{
}
