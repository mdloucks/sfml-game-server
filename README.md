# sfml-game-server
A sweet 2D game made using sfml, a open source graphics library.

Ideas:

2d, lightweight, mobile online battle arena style game that features iconic people/things from history a heroes
2d, RPG with lots of referances to geeky stuff! 

Care to play? There is a pre-compiled executable in the project

Care to test it? Follow the steps below.

To compile on windows/mac in various IDE's, go and check out the sfml documentation, it only takes a few minutes to set up.

<b>Mac OS X</b>
http://www.sfml-dev.org/tutorials/2.4/start-osx.php

<b>Windows</b> 
http://www.sfml-dev.org/tutorials/2.4/start-vc.php
http://www.sfml-dev.org/tutorials/2.4/start-cb.php


This alternative may work for some of you that have g++-4.8 installed or
for all of the poor unfortunate souls using linux... (including me...grumble)

--------------

cd (your preferred install location)

git clone https://github.com/BroManSalaam/TPC

compile using this command into the terminal (Fill in the necessary () fields beforehand)

g++-4.8 main.cpp Game.cpp Player.cpp EntityManager.cpp Enemy.cpp ImageManagement.cpp Entity.cpp InputManagement.cpp Projectile.cpp -o TheProgrammersCode -std=c++11 -pthread -I (path to sfml/include) -L (path to sfml/lib) -lsfml-network -lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system

execute using this 

export LD_LIBRARY_PATH=(path to sfml/lib) && ./TheProgrammersCode 

--------------

To make this an even awesomer game, I could use some help with artwork, programming, and sound.
send me an email at loucks12345@gmail.com if you're interested in joining!
