#include "EntityManager.h"
#include "Game.h"


EntityManager::EntityManager()
{
}

void EntityManager::initPointers(sf::RenderWindow & w, Player * p)
{
	win = &w;
	obj_Player = p;
}


/////////// PROJECTILES /////////////////

// void EntityManager::addPP()
// {
// 	obj_Projectile.rect.setPosition(obj_Player->rect.getPosition().x + obj_Player->rect.getSize().x / 2
// 	- obj_Projectile.rect.getSize().x / 2, obj_Player->rect.getPosition().y + obj_Player->rect.getSize().y / 2);

// 	obj_Projectile.Direction = obj_Player->Direction;
// 	PP_Vector.push_back(obj_Projectile);
// }

// void EntityManager::movePP()
// {
// 	PP_Vector[PP_count].move();
// }

// void EntityManager::drawPP()
// {
// 	win->draw(PP_Vector[PP_count].rect);
// }

// void EntityManager::updatePP()
// {
// 	PP_count = 0;
// 	for (PP_Iterator = PP_Vector.begin(); PP_Iterator != PP_Vector.end(); PP_Iterator++)
// 	{
// 		movePP();
// 		drawPP();
// 		PP_count++;
// 	}
// }

//////////// ENEMIES //////////////

void EntityManager::addEnemy(Enemy *e)
{
	int count;
	// assign pointers to every play for each enemy
	for(Player_Iterator = Player_Vector.begin(); Player_Iterator != Player_Vector.end(); Player_Iterator++)
	{
		e->initPointers(Player_Vector[count]);
		count++;
	}

	Enemy_Vector.push_back(e);

	std::cout << "Enemy added" << std::endl;

	std::cout << "size " << Enemy_Vector.size() << std::endl;
}

void EntityManager::moveEnemy()
{
	Enemy_Vector[Enemy_count]->enemyAI();
	Enemy_Vector[Enemy_count]->updateAggroRadiusPosition();
	Enemy_Vector[Enemy_count]->updateSpritePosition();
}

void EntityManager::drawEnemy()
{
	win->draw(Enemy_Vector[Enemy_count]->sprite);
}

void EntityManager::updateEnemy()
{
	Enemy_count = 0;

	for (Enemy_Iterator = Enemy_Vector.begin(); Enemy_Iterator != Enemy_Vector.end(); Enemy_Iterator++)
	{
		moveEnemy();
		drawEnemy();
		Enemy_count++;
	}
}


void EntityManager::addPlayer(Player *p)
{
	Player_Vector.push_back(p);
	std::cout << "Player added" << std::endl;
}

void EntityManager::movePlayer(int dir)
{
	Player_Vector[0]->update(dir);
	Player_Vector[0]->updateSpritePosition();
}

void EntityManager::drawPlayer()
{
	win->draw(Player_Vector[Player_count]->sprite);
}

void EntityManager::updatePlayer()
{
	Player_count = 0;

	for (Player_Iterator = Player_Vector.begin(); Player_Iterator != Player_Vector.end(); Player_Iterator++)
	{
		drawPlayer();
		Player_count++;
	}
}


EntityManager::~EntityManager()
{
}
