#include "InputManagement.h"

InputManagement::InputManagement() 
{

}

void InputManagement::initPointers(EntityManager *em)
{
    ptr_EntityManager = em;
}

void InputManagement::recieveInput() 
{

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
    {
        ptr_EntityManager->movePlayer(1);
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
    {
        ptr_EntityManager->movePlayer(2);
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
    {
        ptr_EntityManager->movePlayer(3);
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
    {
        ptr_EntityManager->movePlayer(4);
    }

}

InputManagement::~InputManagement() 
{
    
}