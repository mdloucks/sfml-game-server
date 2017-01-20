#pragma once
#include "SFML/Graphics.hpp"
#include <iostream>

class ImageManagement
{
public:
	ImageManagement();

	sf::Texture txt_player;
	sf::Texture txt_skeleton;

	void loadPlayer();

	void loadSkeleton();
	/*
	@param the sprite
	@param the texture to be set into the sprite
	*/

	

	~ImageManagement();
};

