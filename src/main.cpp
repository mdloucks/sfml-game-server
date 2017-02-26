#include "Server.h"
#include <iostream>

int main()
{
	// initialize the game loop
	// save the game in a short

	Server s;
	int code = s.run();

	std::cout << "Server : Shut down with exit code" << code << std::endl; 

}