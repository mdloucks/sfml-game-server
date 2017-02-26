#include "Player.h"

Player::Player()
{
}

void Player::init(std::string n, std::string h, int width, int height, int x, int y) 
{
	hero = h;
	name = n;
	rect.setSize(sf::Vector2f(width, height));
	rect.setPosition(x, y);

	std::cout << name << " has been successfully initialized." << std::endl;
}

void Player::printInfo(Player p)
{
	std::cout << p.name << std::endl;  
}


void Player::update()
{

}

Player::~Player()
{
}
