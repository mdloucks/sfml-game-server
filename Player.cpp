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
		isImmobile = true;
	}
	else
	{
		isImmobile = false;
	}
	return isImmobile;
}
