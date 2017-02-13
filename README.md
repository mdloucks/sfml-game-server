# TPC
A sweet 2D game made using sfml, a open source graphics library.

Ideas:

2d, lightweight, mobile online battle arena style game that features iconic people/things from history a heroes
2d, RPG with lots of referances to geeky stuff! 

Care to play?

To compile on windows/mac, go and check out the sfml documentation, it only takes a few minutes to set up.

Mac OS X
http://www.sfml-dev.org/tutorials/2.4/start-osx.php

Windows 
http://www.sfml-dev.org/tutorials/2.4/start-vc.php
http://www.sfml-dev.org/tutorials/2.4/start-cb.php

For all of the poor unfortunate souls using linux... (including me...grumble)
compile using this command into the terminal (Fill in the necessary <> fields beforehand)

g++-4.8 main.cpp Game.cpp Player.cpp EntityManager.cpp Enemy.cpp ImageManagement.cpp MeleeAI.cpp Entity.cpp InputManagement.c
pp EntityInit.cpp Projectile.cpp -o TheProgrammersCode -std=c++11 -pthread -I <path to smfl/include> -L <path to sfml/lib> -lsfml-ne
twork -lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system

execute using this 

export LD_LIBRARY_PATH=<path to sfml/lib> && ./TheProgrammersCode 

To make this an even awesomer game, I could use some help with artwork, programming, and sound.
send me an email at loucks12345@gmail.com if you're interested in joining!
