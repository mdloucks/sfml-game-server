#include "Game.h"

Game::Game()
{
	im.loadPlayer();
	player.sprite.setTexture(im.player);
}


void Game::winInit()
{
	win->create(sf::VideoMode(800,500),"TPC");
	win->setActive();
	win->setFramerateLimit(60);
	std::cout << "creating window" << std::endl;
}

void Game::gameLoop()
{
	//enum GameState { MENU, PEACE, COMBAT, UI, OPTIONS, EXIT};

	std::vector<Projectile>::const_iterator projectileIterator;
	std::vector<Projectile> projectileArray;

	int count = 0;

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
		}
		
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
		{
			projectile.rect.setPosition(player.rect.getPosition().x + player.rect.getSize().x/2 
				- projectile.rect.getSize().x/2, 
			player.rect.getPosition().y + player.rect.getSize().y/2);

			projectile.Direction = player.Direction;
			projectileArray.push_back(projectile);
		}
		count = 0;
		for (projectileIterator=projectileArray.begin();projectileIterator!=projectileArray.end();projectileIterator++)
		{
			projectileArray[count].move();
			win->draw(projectileArray[count].rect);
			count++;
		}

		// Update Player
		player.updateBounds();
		player.updatePosition();

		// Draw Player
		win->draw(player.sprite);
		// display the rendered images
		win->display();
	}
}

Game::~Game()
{
}
