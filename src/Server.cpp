#include "Server.h"


Server::Server()
{
        std::cout << "initializing..." << std::endl;

        clock.restart();
        socket.setBlocking(false);
}

int Server::run() 
{


        if(!bindPort())
        {
                return -1;
        }

        while(true)
        {
                // join game threads...

                if(clock.getElapsedTime().asSeconds() > NETWORK_UPDATE_INTERVAL)
                {
                        //check for new users joining...
                        std::cout << "Server : Checking for new connections..." << std::endl;
                        connect();
                        clock.restart();
                }

        }

        return 0;
}


bool Server::bindPort()
{
        if(socket.bind(host_port) != sf::Socket::Done)
        {
                std::cout << "could not bind networking socket to port " << host_port << std::endl;
                return false;
        }

        std::cout << "Server : Successfully bound socket to port " << host_port << std::endl;
        return true;
}

void Server::connect()
{
        sf::Uint16 connection;
        spacket_connect << connection;
        
        sf::Packet rpacket_connect;

        // check if we recieve any info from (CLIENT_BUFFER) clients
        Player client_tmp[CLIENT_BUFFER];

        for(int count = 0; count < CLIENT_BUFFER; count++)
        {
                try
                 {
                        // skip the previously connected clients
                        if(client_tmp[count].isConnected)
                        {
                                count++;
                                continue;
                        }

                        if(socket.receive(rpacket_connect, client_tmp[count].ip , client_tmp[count].port) != sf::Socket::Done)
                        {
                                std::cout << "Could not recieve header rpacket_connect from client " << count << "." << std::endl;
                        }
                        else
                        {
                                std::cout << "Client " << count << " : recieved rpacket_connect " << "ip " << client_tmp[count].ip << " port " << client_tmp[count].port << std::endl; 
                                // send them confirmation that they have connected to the server
                                if(socket.send(spacket_connect, client_tmp[count].ip , client_tmp[count].port) != sf::Socket::Done)
                                {
                                        std::cout << "Server : unable to send spacket_connect to client " << count << std::endl;
                                }
                                client_tmp[count].isConnected = true;
                        }

                        if(rpacket_connect >> client_tmp[count].name)
                        {
                                std::cout << "Client " + count << " extracted too much data from connection rpacket_connect" << std::endl;
                        }

                        if(rpacket_connect >> client_tmp[count].hero)
                        {
                                std::cout << "Client " + count << " : extracted too much data from connection rpacket_connect" << std::endl;
                        }
                        // after a second of checking for connected clients, push the connected ones into the vector
                        if(clock.getElapsedTime().asSeconds() == 1)
                        {
                                for(int a = 0; 0 < CLIENT_BUFFER; a++)
                                {
                                        if(client_tmp[a].isConnected)
                                        {
                                                addClient(client_tmp[a]);
                                        }
                                } 
                        }
                }
                catch (const std::exception& e)
                {
                        std::cout << "Server : could not find client index " << count << std::endl;
                }
        }
}

void Server::drop(int c)
{
        std::cout << "Client " << c << " : dropped" << std::endl;
        // TODO send the user a drop rpacket_connect
        try
        {
                client.erase(client.begin() + c);
        }
        catch (const std::out_of_range& e)
        {
                std::cout << "Client " << c << " : does not exist" << std::endl;
        }
}

void Server::addClient(Player &c)
{
        client.push_back(c);
        std::cout << "Client " << c.name << " : connected to the server" << std::endl;
}

void Server::response()
{

	 
}