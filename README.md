# sfml-game-server

This is the server portion which will actually host and run the game.

If you'd like to see what cool graphics the end user will see, heres the link.
 </br> https://github.com/BroManSalaam/sfml-game-client

Care to run this? There is a pre-compiled executable in the project

Care to test it? Follow the steps below.

To compile on windows/mac in various IDE's, go and check out the sfml documentation, it only takes a few minutes to set up.

<b>Mac OS X</b>
 </br> http://www.sfml-dev.org/tutorials/2.4/start-osx.php

<b>Windows</b> 
 </br> http://www.sfml-dev.org/tutorials/2.4/start-vc.php
 </br> http://www.sfml-dev.org/tutorials/2.4/start-cb.php


This alternative may work for some of you that are expiriencing difficulties or
all of the poor unfortunate souls using linux... (including me...grumble)

----------------------------

I've included a make file which will both compile and run the game.

On linux you can run this by first giving permissions,

`chmod +x make.sh`

then run it!

`./make.sh`

----------------------------




--------------

First, be sure you have proper sfml package downloaded according to your OS (windows users take GCC). 
  </br> http://www.sfml-dev.org/download/sfml/2.4.2/

`cd` (your preferred install location)

`git clone https://github.com/BroManSalaam/TPC`

compile using this command into the terminal (Fill in the necessary () fields beforehand)
Also be sure your g++ version is one prior to 5.0 or else it will not compile due to the ABI.

`g++-4.8 main.cpp Game.cpp Player.cpp EntityManager.cpp Enemy.cpp ImageManagement.cpp Entity.cpp InputManagement.cpp Projectile.cpp -o TheProgrammersCode -std=c++11 -pthread -I (path to sfml/include) -L (path to sfml/lib) -lsfml-network -lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system`

execute using this 

`export LD_LIBRARY_PATH=(path to sfml/lib) && ./TheProgrammersCode` 

--------------

To make this an even awesomer game, I could use some help with artwork, programming, and sound.
send me an email at loucks12345@gmail.com if you're interested in joining!
