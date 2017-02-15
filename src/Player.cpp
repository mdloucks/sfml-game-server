#include "Player.h"

void Player::init(std::string n, sf::Texture &t,
int textX, int textY, int width, int height, int x, int y) 
{
	name = n;
	sprite.setTexture(t);
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
			}

			else if (direc == 2) // LEFT
			{
				rect.move(-spd, 0);
			}

			else if (direc == 3) // DOWN
			{
				rect.move(0, spd);
			}

			else if (direc == 4) // RIGHT
			{
				rect.move(spd, 0);
			}

		}
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

