#include "Enemy.h"

Enemy::Enemy()
{
}

void Enemy::initPointers(Player * p)
{
	ptr_Player = p;
}

void Enemy::enemyAI()
{
}

int Enemy::getHp()
{
	return hp;
}

int Enemy::getAtk()
{
	return atk;
}

int Enemy::getDef()
{
	return def;
}

int Enemy::getSpd()
{
	return spd;
}

bool Enemy::isInAggroRadius()
{
	//std::cout << ptr_Player->rect.getPosition().x << std::endl;

	if (	std::sqrt(std::pow(ptr_Player->rect.getPosition().x - Aggro_Radius.getPosition().x,2)
		+ std::pow(ptr_Player->rect.getPosition().y - Aggro_Radius.getPosition().y,2))
		< std::pow(Aggro_Radius.getRadius(),2) )
	{
		isAggro = true;
		std::cout << "EXTERMINATE!" << std::endl;
	}
	else
	{
		isAggro = false;
	}

	return isAggro;
}

void Enemy::updateAggroRadiusPosition()
{
	Aggro_Radius.setPosition(rect.getPosition().x + rect.getSize().x / 2
		- rect.getSize().x / 2, rect.getPosition().y + rect.getSize().y / 2);
}

void Enemy::updateSpritePosition()
{
	//std::cout << "sprite set to x " << sprite.getPosition().x << " y " << sprite.getPosition().y << std::endl;
	sprite.setPosition(rect.getPosition());
}


Enemy::~Enemy()
{
}
