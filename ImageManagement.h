#pragma once
#include "SFML\Graphics.hpp"
class ImageManagement
{
public:
	ImageManagement();

	sf::Texture player;

	void loadPlayer();

	~ImageManagement();
};

