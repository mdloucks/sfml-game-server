#include "Game.h"

Game::Game() 
{
}


int Game::gameLoop()
{

	sf::UdpSocket socket;

	if(socket.bind(host_port) != sf::Socket::Done)
	{
		std::cout << "could not bind to port " << host_port << std::endl << "Kill any processes that are occupying that port" << std::endl;
		return 1;
	}

	// wait for all clients to respond...

	std::vector<Player> client;
	std::vector<Player>::const_iterator client_it;

	unsigned short clients;

	while(clients < 10)
	{
		for(client_it = client.begin(); client_it != client.end(); client_it++)
		{
			// if (socket.receive(data, 100, received, sender, port) != sf::Socket::Done)
			// {
    
			// }
		}
	}

	while (true)
	{	

		obj_EntityManager.updateWall();

		// Update Enemies
		obj_EntityManager.updateEnemy();

		// Update Projectiles
		//obj_EntityManager.updatePP();

		obj_EntityManager.updatePlayer();
		return 0;
	}
}

// sf::Packet& operator >>(sf::Packet& packet, Player &player)
// {
//     return packet >> player.ip >> player.port >> player.hp >> player.spd. >> player. def >> player.atk 
// }


Game::~Game()
{
}
