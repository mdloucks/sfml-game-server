#include "Player.h"

Player::Player(std::string n, sf::Texture &t,
int textX, int textY, int width, int height, int x, int y)
{
	name = n;
	sprite.setTexture(t);
	sprite.setTextureRect(sf::IntRect(textX, textY, width, height));
	rect.setSize(sf::Vector2f(width, height));
	rect.setPosition(x, y);

	std::cout << name << " has been successfully initialized." << std::endl;
}



void Player::update(int direc)
{

		dir = direc;

		if(!isImmobile)
		{
		
			if (direc == 1) // UP
			{
				rect.move(0, -spd);
				sprite.setTextureRect(sf::IntRect(64 * WalkCount, 512, 64, 64));
			}

			else if (direc == 2) // LEFT
			{
				rect.move(-spd, 0);
				sprite.setTextureRect(sf::IntRect(64 * WalkCount, 576, 64, 64));
			}

			else if (direc == 3) // DOWN
			{
				rect.move(0, spd);
				sprite.setTextureRect(sf::IntRect(64 * WalkCount, 640, 64, 64));
			}

			else if (direc == 4) // RIGHT
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

void Player::updateSpritePosition()
{
	sprite.setPosition(rect.getPosition());
}

Player::~Player()
{
}


		// if(isCollision)
		// {
		// 	if(dir == 1)
		// 	{
		// 		canMoveUp = false;
		// 	}

		// 	if(dir == 2)
		// 	{
		// 		canMoveLeft = false;
		// 	}

		// 	if(dir == 3)
		// 	{
		// 		canMoveDown = false;
		// 	}

		// 	if(dir == 4)
		// 	{
		// 		canMoveRight = false;
		// 	}
		// }
		// else
		// {
		// 	canMoveDown = true;
		// 	canMoveLeft = true;
		// 	canMoveRight = true;
		// 	canMoveUp = true;
		// }

		// while(true)
		// {
		// 	if(!canMoveRight)
		// 	{
		// 		canMoveDown = true;
		// 		canMoveLeft = true;
		// 		canMoveUp = true;
		// 		break;
		// 	}

		// 	if(!canMoveUp)
		// 	{
		// 		canMoveDown = true;
		// 		canMoveLeft = true;
		// 		canMoveRight = true;
		// 		break;
		// 	}
					
		// 	if(!canMoveDown)
		// 	{
		// 		canMoveUp = true;
		// 		canMoveLeft = true;
		// 		canMoveRight = true;
		// 		break;
		// 	}
					
		// 	if(!canMoveLeft)
		// 	{
		// 		canMoveDown = true;
		// 		canMoveUp = true;
		// 		canMoveRight = true;
		// 		break;
		// 	}
			
		// 	break;
		// }














		// 		while(isCollision)
		// {
		// 	if(isPlayerCollision)
		// 	{
		// 	break;	
		// 	}

		// 	if(dir == 1)
		// 	{
		// 		canMoveUp = false;
		// 		isPlayerCollision = true;
		// 		break;
		// 	}

		// 	if(dir == 2)
		// 	{
		// 		canMoveLeft = false;
		// 		isPlayerCollision = true;
		// 		break;
		// 	}

		// 	if(dir == 3)
		// 	{
		// 		canMoveDown = false;
		// 		isPlayerCollision = true;
		// 		break;
		// 	}

		// 	if(dir == 4)
		// 	{
		// 		canMoveRight = false;
		// 		isPlayerCollision = true;
		// 		break;
		// 	}

		// 	break;
		// }

		// if(!isCollision)
		// {
		// 	isPlayerCollision = false;
		// 	canMoveDown = true;
		// 	canMoveLeft = true;
		// 	canMoveRight = true;
		// 	canMoveUp = true;
		// }

