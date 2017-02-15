#include "SFML/Network.hpp"
#include "Player.h"

#include <iostream>

// class that takes all of each client's input and processes it'
class InputManager : Player {

        public:

        // tells which player we are addressing
        unsigned short currentPlayer;
        sf::UdpSocket socket;
        unsigned short port;

        // common messages
        
        void bind();
        void connect();

};