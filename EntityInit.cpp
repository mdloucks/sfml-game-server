#include "EntityInit.h"



EntityInit::EntityInit()
{
}


void EntityInit::initPlayer(Player *p, std::string name, sf::Texture & t, float width, float height, float textX, float textY, float x, float y)
{
	p->sprite.setTexture(t);
	p->sprite.setTextureRect(sf::IntRect(textX, textY, width, height));
	p->rect.setSize(sf::Vector2f(width, height));
	p->rect.setPosition(x, y);

	std::cout << "Player: " << name << " has been successfully initialized." << std::endl;
}

void EntityInit::initEnemy(Enemy *e, sf::Texture &t, float width, float height, float textX, float textY, Enemy::AI ai, float x, float y)
{
	e->currentAI = ai;
	e->sprite.setTexture(t);
	e->sprite.setTextureRect(sf::IntRect(textX, textY, width, height));
	e->rect.setSize(sf::Vector2f(width, height));
	e->rect.setPosition(x, y);

	std::cout << "Enemy " << e << " has been successfully initialized." << std::endl;
}

EntityInit::~EntityInit()
{
}
