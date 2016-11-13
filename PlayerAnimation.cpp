#include "PlayerAnimation.h"

PlayerAnimation::PlayerAnimation()
{
}


PlayerAnimation::~PlayerAnimation()
{
}

void PlayerAnimation::PlayerWalking::playerWalk()
{
	// im.getPlayerSheet.setTextureRect(sf::IntRect(c, 512 + c, c + 64, 576 + c)); 
	// if the player can move... update him

	if (pc.getIsImmobile())
	{

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			im.spr_player.move(0, -ps.spd);
			im.spr_player.setTextureRect(sf::IntRect(0,512,64,64));
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			im.spr_player.move(0, ps.spd);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			im.spr_player.move(-ps.spd, 0);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			im.spr_player.move(ps.spd, 0);
		}

	}
	else
	{

	}
}

void PlayerAnimation::PlayerCondition::drawFrozen()
{
}

void PlayerAnimation::PlayerCondition::drawRooted()
{
}

void PlayerAnimation::PlayerCondition::drawDead()
{
}

void PlayerAnimation::PlayerCondition::drawStunned()
{
}

void PlayerAnimation::PlayerCondition::drawIgnited()
{
}

void PlayerAnimation::PlayerCondition::drawPoisoned()
{
}

void PlayerAnimation::PlayerCondition::drawBleeding()
{
}
