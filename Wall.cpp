#include "Wall.h"

Wall::Wall(int x, int y , int w, int h)
{
    rect.setPosition(x,y);
    width = w;
    height = h;
    rect.setSize(sf::Vector2f(width,height));
    rect.setFillColor(sf::Color::Red);
}

void Wall::repel(Entity ent) 
{
    if(ent.dir == 1)
    {
        ent.rect.move(0,-ent.spd);
    }
    if(ent.dir == 2)
    {
        ent.rect.move(ent.spd,0);
    }
    if(ent.dir == 3)
    {
        ent.rect.move(0,-ent.spd);
    }
    if(ent.dir == 4)
    {
        ent.rect.move(-ent.spd,0);
    }
}

void Wall::repel(Entity * ent) 
{
    if(ent->dir == 1)
    {
        ent->rect.move(0,-ent->spd);
    }
    if(ent->dir == 2)
    {
        ent->rect.move(ent->spd,0);
    }
    if(ent->dir == 3)
    {
        ent->rect.move(0,-ent->spd);
    }
    if(ent->dir == 4)
    {
        ent->rect.move(-ent->spd,0);
    }
}


Wall::~Wall()
{


}