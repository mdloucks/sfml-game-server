#include "EntityManager.h"

EntityManager::EntityManager()
{
}

void EntityManager::addEnemy(Enemy e)
{
	count = 0;
	
	// assign pointers to every play for each enemy
	for(Player_Iterator = Player_Vector.begin(); Player_Iterator != Player_Vector.end(); Player_Iterator++)
	{
		e.initPointers(Player_Vector[count]);
		e.Aggro_Radius.setRadius(200);
		e.atk_range.setRadius(40);

		count++;
	}

	Enemy_Vector.push_back(e);

	std::cout << "Enemy added at: x " << Enemy_Vector[Enemy_count].rect.getPosition().x 
	<< " y " << Enemy_Vector[Enemy_count].rect.getPosition().y << std::endl;

	std::cout << "There are now " << Enemy_Vector.size() << " Enemies." << std::endl;
}

void EntityManager::moveEnemy()
{
	Enemy_Vector[Enemy_count].enemyAI();
	Enemy_Vector[Enemy_count].update();
	Enemy_Vector[Enemy_count].isInAggroRadius();
}

void EntityManager::updateEnemy()
{
	Enemy_count = 0;
	
	for (Enemy_Iterator = Enemy_Vector.begin(); Enemy_Iterator != Enemy_Vector.end(); Enemy_Iterator++)
	{
		moveEnemy();
		Enemy_count++;
	}
}

void EntityManager::deleteEnemy(int a, int b)
{
	Enemy_Vector.erase(Enemy_Vector.begin(), Enemy_Vector.begin()+b);
	std::cout << "Enemies " << a << "-" << b << " were destroyed.";
	std::cout << "There are now " << Enemy_Vector.size() << " Enemies." << std::endl;
}


void EntityManager::addPlayer(Player p)
{
	Player_Vector.push_back(p);
	std::cout << p.name << " has joined the game!" << std::endl;
}

void EntityManager::movePlayer()
{
	Player_Vector[Player_count].update();
}

void EntityManager::updatePlayer()
{
	Player_count = 0;

	for (Player_Iterator = Player_Vector.begin(); Player_Iterator != Player_Vector.end(); Player_Iterator++)
	{
		Player_count++;
	}
}

void EntityManager::addWall(Wall wall)
{
	Wall_Vector.push_back(wall);
}

bool EntityManager::isIntersectsWall(Entity ent)
{
	Wall_count = 0;

	for(Wall_Iterator = Wall_Vector.begin(); Wall_Iterator != Wall_Vector.end(); Wall_Iterator++)
	{
			if(ent.rect.getGlobalBounds().intersects(Wall_Vector[Wall_count].rect.getGlobalBounds())) // Collision detected!!!
			{
			}
			else
			{
				return false;
			}
		Wall_count++;
	}

}

void EntityManager::updateWall()
{
	Wall_count = 0;

	for(Wall_Iterator = Wall_Vector.begin(); Wall_Iterator != Wall_Vector.end(); Wall_Iterator++)
	{
		Wall_count++;
	}

}


EntityManager::~EntityManager()
{
}
