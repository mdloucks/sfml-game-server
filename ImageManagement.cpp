#include "ImageManagement.h"



ImageManagement::ImageManagement()
{
}


ImageManagement::~ImageManagement()
{
}

void ImageManagement::PlayerSheets::loadPlayerSheet()
{
	sf::Texture txt_player;
	sf::Sprite spr_player;
	txt_player.loadFromFile(spritePath);
	spr_player.setTexture(txt_player);
}

void ImageManagement::PlayerSheets::setPlayerSheet(std::string a)
{
	spritePath = a;
}




