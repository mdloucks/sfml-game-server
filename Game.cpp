#include "Game.h"

Game::Game() 
{
}


void Game::initWin()
{
	win->create(sf::VideoMode(winWidth,winHeight),"TPC");
	win->setActive();
	win->setFramerateLimit(60);
	std::cout << "creating window" << std::endl;
}


int Game::gameLoop()
{
	obj_ImageManagement.loadSkeleton(); 

	Enemy Enemy_Melee_Skeleton(obj_ImageManagement.txt_skeleton, 64, 64, 64, 64, 0, 0);

	obj_ImageManagement.loadPlayer();
	Player obj_Player("charles", obj_ImageManagement.txt_player, 64, 64, 64, 64, 0, 0);
	obj_EntityManager.addPlayer(obj_Player);

	obj_EntityManager.initPointers(*win);
	obj_InputManagement.initPointers(&obj_EntityManager);

	// sf::view map_view;

	// win->setView(view);

	// sf::Texture title;
	// title.loadFromFile("./assets/images/Title.png");
	// sf::Sprite spr_title(title);

	// sf::Music music;
    // music.openFromFile("./assets/audio/Dmx - x gon give it to ya + lyrics.ogg");
	// music.play();

	Wall wall(100,100,64,64);

	obj_EntityManager.addWall(wall);

	sf::UdpSocket socket;

	sf::UdpSocket socket;
	unsigned short port 6178

	if (socket.bind(54000) != sf::Socket::Done)
	{
		std::cout << "binded socket to port " << port << std::endl;
	}

	FPS_Clock.restart();

	// 192.168.0.167 my ip
	while (win->isOpen())
	{	
		
		// completely wipe the frame of all images
		win->clear(sf::Color::White);

		sf::Event event;
		// handles all events that occured since last iteration of the frame eg. mouse clicks
		while (win->pollEvent(event))
		{

			if (event.type == sf::Event::Closed)
			{
				win->close();
				return 0;
			}
				
			if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::E)
			{
				Enemy_Melee_Skeleton.spd += 0.2;
				obj_EntityManager.addEnemy(Enemy_Melee_Skeleton);
			}
			if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::R)
			{
				obj_EntityManager.deleteEnemy(0,1);
			}
			if(event.type == sf::Event::Resized)
			{

			}
		}

		// SPACE BAR
		// if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
		// {
		// 	obj_EntityManager.addPP();
		// }

		obj_EntityManager.updateWall();

		obj_InputManagement.recieveInput();
		// Update Enemies
		obj_EntityManager.updateEnemy();

		// Update Projectiles
		//obj_EntityManager.updatePP();

		obj_EntityManager.updatePlayer();

		// Draw Player
		win->draw(obj_Player.sprite);

		// display the rendered images
		win->display();

		LPS++;
		// the clock is offset by 20 microseconds to compensate for inaccuracy
		if (FPS_Clock.getElapsedTime().asMicroseconds() > 1999980)
		{ 
			FPS = LPS;
			std::cout << "/////FPS///// " << FPS << std::endl;
			FPS_Skip = FPS / 60;
			LPS = 0;
			FPS_Clock.restart();
		} 
	}
}

Game::~Game()
{
}
