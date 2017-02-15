#include "Game.h"

Game::Game() 
{
}


void Game::initWin()
{
	win->create(sf::VideoMode(winWidth,winHeight),"TPC");
	win->setActive();
	win->setFramerateLimit(60);
	std::cout << "creating window" << std::endl;
}


int Game::gameLoop()
{

	obj_EntityManager.initPointers(*win);

	// create a array of input managers for all of the players
	InputManager Player_Input[9];


	Wall wall(100,100,64,64);

	obj_EntityManager.addWall(wall);

	// 192.168.0.167 my ip
	while (win->isOpen())
	{	
		
		// completely wipe the frame of all images
		win->clear(sf::Color::White);

		sf::Event event;
		// handles all events that occured since last iteration of the frame eg. mouse clicks
		while (win->pollEvent(event))
		{

			if (event.type == sf::Event::Closed)
			{
				win->close();
				return 0;
			}
				
			if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::R)
			{
				obj_EntityManager.deleteEnemy(0,1);
			}
			if(event.type == sf::Event::Resized)
			{

			}
		}

		obj_EntityManager.updateWall();

		// Update Enemies
		obj_EntityManager.updateEnemy();

		// Update Projectiles
		//obj_EntityManager.updatePP();

		obj_EntityManager.updatePlayer();

		// display the rendered images
		win->display();

	}
}

Game::~Game()
{
}
