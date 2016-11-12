#include "Player.h"



Player::Player()
{
}


Player::~Player()
{
}

bool Player::PlayerConditions::getIsImmobile()
{	
	if (ic.isFrozen || ic.isRooted || ic.isStunned || ic.isDead)
	{
		return true;
	}
	else
	{
		return true;
	}
}
