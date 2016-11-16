#include "PlayerAnimation.h"



PlayerAnimation::PlayerAnimation()
{
	
}

void PlayerAnimation::loadPlayerImage()
{
	
	txt_player_walk.loadFromFile("images/playerSprite.png");
	spr_player_walk.setTexture(txt_player_walk);
}

void PlayerAnimation::movePlayer()
{
	

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		spr_player_walk.move(0,-spd);
		spr_player_walk.setTextureRect(sf::IntRect(64 * count,0,64,64));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		spr_player_walk.move(-spd,0);
		spr_player_walk.setTextureRect(sf::IntRect(64 * count, 64, 64, 64));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		spr_player_walk.move(0, spd);
		spr_player_walk.setTextureRect(sf::IntRect(64 * count, 128, 64, 64));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		spr_player_walk.move(spd,0);
		spr_player_walk.setTextureRect(sf::IntRect(64 * count, 192, 64, 64));
	}
	std::cout << count << std::endl;
	count++;

	if (count == 9)
	{
		std::cout << "reset" << std::endl;
		count = 0;
	}
}


PlayerAnimation::~PlayerAnimation()
{
}
