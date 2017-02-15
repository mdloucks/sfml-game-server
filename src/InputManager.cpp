#include "InputManager.h"


void InputManager::bind()
{
        while(!socket.bind(port)) 
        {
                std::cout << "SERVER: Could not bind socket to port" << std::endl;
        }
}

void InputManager::connect() 
{

}