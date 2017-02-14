#include "EntityManager.h"
#include "Game.h"


EntityManager::EntityManager()
{
}

void EntityManager::initPointers(sf::RenderWindow & w)
{
	win = &w;
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

void EntityManager::addEnemy(Enemy e)
{
	count = 0;
	
	// assign pointers to every play for each enemy
	for(Player_Iterator = Player_Vector.begin(); Player_Iterator != Player_Vector.end(); Player_Iterator++)
	{
		e.initPointers(Player_Vector[count]);
		e.Aggro_Radius.setRadius(200);
		e.atk_range.setRadius(40);
		e.Aggro_Radius.setFillColor(sf::Color::Blue);
		e.atk_range.setFillColor(sf::Color::Red);

		if (!font.loadFromFile("./assets/fonts/coolvetica rg.ttf"))
		{
			std::cout << "cant load font" << std::endl;
		}
		e.text.setFont(font);
		e.text.setCharacterSize(14);
		e.text.setFillColor(sf::Color::Black);

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

void EntityManager::drawEnemy()
{
	win->draw(Enemy_Vector[Enemy_count].atk_range);
	win->draw(Enemy_Vector[Enemy_count].sprite);
	win->draw(Enemy_Vector[Enemy_count].text);
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

void EntityManager::movePlayer(int dir)
{
	Player_Vector[0].update(dir);
	Player_Vector[0].updateSpritePosition();
}

void EntityManager::drawPlayer()
{
	win->draw(Player_Vector[Player_count].sprite);
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

void EntityManager::addWall(Wall wall)
{
	Wall_Vector.push_back(wall);
}

void EntityManager::drawWall()
{
	win->draw(Wall_Vector[Wall_count].rect);
}

bool EntityManager::isIntersectsWall(Entity ent)
{
	Wall_count = 0;

	for(Wall_Iterator = Wall_Vector.begin(); Wall_Iterator != Wall_Vector.end(); Wall_Iterator++)
	{
			if(ent.rect.getGlobalBounds().intersects(Wall_Vector[Wall_count].rect.getGlobalBounds())) // Collision detected!!!
			{
				Wall_Vector[Wall_count].repel(ent);
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
		drawWall();
		Wall_count++;
	}

}


EntityManager::~EntityManager()
{
}
