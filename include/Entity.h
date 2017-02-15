#pragma once
#include "SFML/Graphics.hpp"
/*
This class will be the base of any object in the game
It will define it's shape, collision box, and more
*/
class Entity
{
public:
	sf::RectangleShape rect;
	sf::Sprite sprite;
	sf::Text text;

	int spd;
	int dir;

	Entity();
	

	~Entity();
};

