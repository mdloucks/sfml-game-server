#pragma once

#include "SFML/Network.hpp"

#include "Player.h"
#include "Client.h"

#include <vector> 
#include <iostream>

/*
Main class that is the basic framework for each game

We create the "games" in here, which run on seperate threads

NOTE: When talking about "connections", we are just referencing the fact that we know the client's network info
This is not a actual connection based game, this uses UDP. 
*/
class Server {

        public:

	std::vector<Player> client;
	std::vector<Player>::const_iterator client_it;

        sf::UdpSocket socket;

	// packets that are sent on connect and drop spacket is send rpacket is recieve
	sf::Packet spacket_connect;
	sf::Packet spacket_drop;

	unsigned short host_port = 9573;

        // main loop
	Server();
        virtual int run();
	bool bindPort();
	// WIP
	void matchMaking();
	// checks if there are any players waiting to connect, if so get their name and set up a game
	void response();
	// cuts the connection of a player and remove their info
	void drop(int a);
	/*
	get the network info of every Player, should only be called once per client. 
	creates an array, with clients, then recieves info from them, if we get info, push those clients into the vector
	*/ 
	void connect();
	void addClient(Player &c);

        private:

        sf::Clock clock;

        // the number of clients the connect() will check for on each call
	const short CLIENT_BUFFER = 5;
	// to be determined...
	const short CLIENT_MAX = 100;
        // the amount of time we wait before checking for new connections
        const short NETWORK_UPDATE_INTERVAL = 5;

};