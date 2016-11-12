#include "Game.h"

Game::Game()
{
}

void Game::gameLoop()
{
	sf::RenderWindow win(sf::VideoMode(width, height), "TPC");

	while (win.isOpen())
	{
		sf::Event event;
		// handles all events that occured since last iteration of the frame eg. mouse clicks
		while (win.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				win.close();
			// if a key was pressed...
			if (event.type == sf::Event::KeyPressed)
			{
				
			}
		}
	}
}
