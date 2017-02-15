#pragma once

#include "SFML/Graphics.hpp"
#include "Entity.h"

#include <iostream>

/*
This class will create inpassable objects in the game 
*/
class Wall  :  Entity {

    public: 

    sf::RectangleShape rect;

    Wall(int x, int y , int width, int height);

    short width;
    short height;

    void repel(Entity *ent);

    void repel(Entity ent);

    ~Wall();


};