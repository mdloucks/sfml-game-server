#pragma once
#include "SFML\Graphics.hpp"
#include <iostream>
/*
this class packages and manages all images to be used in animation classes
this will hold a number of inner classes for each folder
*/
class ImageManagement
{
public:
	ImageManagement();
	~ImageManagement();
	/*
	folder containing sprite sheet for character
	*/
	class PlayerSheets
	{
	public:

		sf::Texture txt_player;
		sf::Sprite spr_player;
		std::string spritePath = "images/characterSheets/basicCharacterSheet.png";

		/*
		loads the players sprite and texture
		*/
		void loadPlayerSheet();
		/*
		changes spritePath to the string entered
		*/
		void setPlayerSheet(std::string a);
		/*
		@returns the sprite
		*/
	};
};

