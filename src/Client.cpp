#include "Client.h"

Client::Client()
:       ip(sf::IpAddress::getLocalAddress())
{
}

sf::IpAddress Client::getIp()
{
        return ip;
}

unsigned short Client::getPort()
{
        return port;
}

std::string Client::getName()
{
        return name;
}