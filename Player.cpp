#include "Player.h"

Player::Player()
{
}

void Player::startThread()
{
	//std::thread PlayerThread(&Player::update, Player());
	//PlayerThread.detach();
} 


void Player::updateSpritePosition()
{
	sprite.setPosition(rect.getPosition());
}

void Player::update(int dir)
{

	if (isImmobile == false)
	{
		
		if (dir == 1)
		{
			rect.move(0, -spd);
			sprite.setTextureRect(sf::IntRect(64 * WalkCount, 512, 64, 64));
		}

		if (dir == 2)
		{
			rect.move(-spd, 0);
			sprite.setTextureRect(sf::IntRect(64 * WalkCount, 576, 64, 64));
		}

		if (dir == 3)
		{
			rect.move(0, spd);
			sprite.setTextureRect(sf::IntRect(64 * WalkCount, 640, 64, 64));
		}

		if (dir == 4)
		{
			rect.move(spd, 0);
			sprite.setTextureRect(sf::IntRect(64 * WalkCount, 704, 64, 64));
		}

	}

	WalkCount++;
	SpellCount++;

	if (WalkCount == 9)
	{
		WalkCount = 0;
	}

	if (SpellCount == 7)
	{
		SpellCount = 0;
	}
		//std::cout << "hi" << std::endl;
}

Player::~Player()
{
}
