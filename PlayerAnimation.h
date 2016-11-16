#pragma once
#include "SFML\Graphics.hpp"
#include <iostream>
class PlayerAnimation
{
public:
	
	sf::Sprite spr_player_walk;
	sf::Texture txt_player_walk;

	sf::Sprite spr_player_dead;
	sf::Texture txt_player_dead;

	int spd = 10;

	int count = 0;

	PlayerAnimation();
	void loadPlayerImage();
	void movePlayer();
	~PlayerAnimation();
};

