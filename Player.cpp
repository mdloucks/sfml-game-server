#include "Player.h"

Player::Player()
{
	rect.setSize(sf::Vector2f(64,64));
	sprite.setPosition(400, 250);
	sprite.setTextureRect(sf::IntRect(0, 0, 64, 64));
}

void Player::setPosition(int width, int height)
{
	rect.setPosition(width, height);
}

void Player::updateBounds()
{
	sprite.setPosition(rect.getPosition());
}

void Player::updatePosition()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		rect.move(0, -spd);
		sprite.setTextureRect(sf::IntRect(64 * count, 0, 64, 64));
		Direction = 1;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		rect.move(-spd, 0);
		sprite.setTextureRect(sf::IntRect(64 * count, 64, 64, 64));
		Direction = 2;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		rect.move(0, spd);
		sprite.setTextureRect(sf::IntRect(64 * count, 128, 64, 64));
		Direction = 3;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		rect.move(spd, 0);
		sprite.setTextureRect(sf::IntRect(64 * count, 192, 64, 64));
		Direction = 4;
	}
	count++;

	if (count == 9)
	{
		count = 0;
	}
}


Player::~Player()
{
}
