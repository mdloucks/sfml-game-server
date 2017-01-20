#include "MeleeAI.h"



MeleeAI::MeleeAI()
{
}

void MeleeAI::enemyAI()
{
	std::cout << "x_dist: " << x_dist << " y_dist " << y_dist << std::endl;
	x_dist = ptr_Player->rect.getPosition().x - rect.getPosition().x;
	y_dist = ptr_Player->rect.getPosition().y - rect.getPosition().y;

	if (std::abs(x_dist) <= std::abs(y_dist) && 
		ptr_Player->rect.getPosition().y <= rect.getPosition().y) //UP
	{
		if(ptr_Player->rect.getPosition().x > rect.getPosition().x)
		{
			rect.move(spd, 0);
		}
		if(ptr_Player->rect.getPosition().x < rect.getPosition().x)
		{
			rect.move(-spd, 0);
		}
		rect.move(0, -spd);
		sprite.setTextureRect(sf::IntRect(64 * WalkCount, 512, 64, 64));
	}

	if (std::abs(y_dist) <= std::abs(x_dist) &&
		ptr_Player->rect.getPosition().x < rect.getPosition().x) //LEFT
	{
		rect.move(-spd, 0);
		sprite.setTextureRect(sf::IntRect(64 * WalkCount, 576, 64, 64));
	}

	if (std::abs(y_dist) >= std::abs(x_dist) && 
		ptr_Player->rect.getPosition().y > rect.getPosition().y) // DOWN
	{
		if(ptr_Player->rect.getPosition().x < rect.getPosition().x)
		{
			rect.move(-spd, 0);
		}
		if(ptr_Player->rect.getPosition().x > rect.getPosition().x)
		{
			rect.move(spd, 0);
		}

		rect.move(0, spd);
		sprite.setTextureRect(sf::IntRect(64 * WalkCount, 640, 64, 64));
	}

	if (std::abs(x_dist) >= std::abs(y_dist) && 
		ptr_Player->rect.getPosition().x > rect.getPosition().x) // RIGHT
	{
		rect.move(spd, 0);
		sprite.setTextureRect(sf::IntRect(64 * WalkCount, 704, 64, 64));
	}
	WalkCount++;
	
	if (WalkCount == 9)
	{
		WalkCount = 0;
	}
}

MeleeAI::~MeleeAI()
{
}
