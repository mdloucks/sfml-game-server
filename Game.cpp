#include "Game.h"

Game::Game()
{
	pa.loadPlayerImage();
	std::cout << "loading imgs" << std::endl;
	pa.spr_player_walk.setPosition(250,250);
	pa.spr_player_walk.setTextureRect(sf::IntRect(0,0,64,64));
}


void Game::winInit()
{
	win->create(sf::VideoMode(500,500),"TPC", sf::Style::Fullscreen);
	win->setActive();
	std::cout << "creating window" << std::endl;
}

void Game::gameLoop()
{
	
	while (win->isOpen())
	{	
		// completely wipe the frame of all images
		win->clear(sf::Color::White);

	sf::Event event;
		// handles all events that occured since last iteration of the frame eg. mouse clicks
		while (win->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				win->close();
			// if a key was pressed...
			if (event.type == sf::Event::KeyPressed)
			{
				pa.movePlayer();
			}
		}
		win->draw(pa.spr_player_walk);
		win->display();
	}
}

Game::~Game()
{
}
