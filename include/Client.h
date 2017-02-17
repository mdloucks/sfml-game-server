#pragma once

#include "SFML/Network.hpp"
#include <string>

/*
A client represents a node that this server is connected to
*/
class Client {

        public:

        std::string name;

        sf::IpAddress ip;
	unsigned short port;

};