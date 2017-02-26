#pragma once

#include "SFML/Network.hpp"
#include <string>

/*
A client represents a node that this server is connected to
*/
class Client {

        public:

        Client();

        sf::IpAddress getIp();
        unsigned short getPort();
        std::string getName();

        std::string name;
        sf::IpAddress ip;
	unsigned short port;
        bool isConnected;

};