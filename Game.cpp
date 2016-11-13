#include "Game.h"

Game::Game()
{
}

void Game::gameLoop()
{
	ImageManagement::PlayerSheets im;
	im.loadPlayerSheet();
	
	while (win.isOpen())
	{	
		// completely wipe the frame of all images
		win.clear();

	sf::Event event;
		// handles all events that occured since last iteration of the frame eg. mouse clicks
		while (win.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				win.close();
			// if a key was pressed...
			if (event.type == sf::Event::KeyPressed)
			{
				pw.playerWalk();
			}
		}
	}

	d.updatePlayer();
}
