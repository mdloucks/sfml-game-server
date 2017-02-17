#include "Wall.h"

Wall::Wall(int x, int y , int w, int h)
{
    rect.setPosition(x,y);
    width = w;
    height = h;
    rect.setSize(sf::Vector2f(width,height));
    rect.setFillColor(sf::Color::Red);
}



Wall::~Wall()
{


}