#include "ImageManagement.h"

ImageManagement::ImageManagement()
{
}


void ImageManagement::loadPlayer()
{
	if(!txt_player.loadFromFile("./assets/images/Player/playerSprite.png")) 
	{
		std::cout << "cannot load player" << std::endl;
	}
}

void ImageManagement::loadSkeleton()
{
	if(!txt_skeleton.loadFromFile("./assets/images/Enemies/Melee/Skeleton.png")) 
	{
		std::cout << "cannot load skeleton" << std::endl;
	}
}

ImageManagement::~ImageManagement()
{
}
