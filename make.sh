#!/bin/bash

echo "Checking for required packages..."

support=$(dpkg -s g++-4.8)
build=./build
doc=./doc
include=./include
lib=./lib
src=./src

if [ ! -d "$build" ];

	then
	
		echo 'Missing build folder'
		mkdir ./build
		echo 'build folder created'
	

fi

if [ ! -d "$doc" ]

	then
	
		echo 'Missing doc folder'
		mkdir ./doc
		echo 'doc folder created'

fi

if [ ! -d "$include" ]

	then
	
	echo 'You are missing the include folder'
	echo 'You will need to reinstall'
	exit 1

fi

if [ ! -d "$src" ]

	then
	
	echo 'You are missing the src folder'
	echo 'You will need to reinstall'
	exit 1
	

fi

if [ ! -d "$lib" ]

	then
	
	echo 'You are missing the lib folder'
	echo 'You will need to reinstall'
	exit 1
	

fi

if [ "$support" == "" ]

	then

echo "The package g++-4.8 is missing"
echo "Would you like to install it?[y/n]"

read input


if [ input == "y" ]

	then
	
	sudo apt-get install g++-4.8
	
	else
	echo "Unable to compile"
	echo "Exiting..."
	exit 1 

fi

	else

		echo "compiling..."

fi

g++-4.8 ./src/main.cpp ./src/Game.cpp ./src/Player.cpp ./src/Wall.cpp ./src/EntityManager.cpp ./src/Enemy.cpp ./src/Entity.cpp ./src/InputManager.cpp ./src/Projectile.cpp -o ./build/sfml-game -std=c++11 -pthread -I./include -I./lib/SFML-2.4.1/include -L ./lib/SFML-2.4.1/lib -lsfml-network -lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system

echo "compilation complete"

export LD_LIBRARY_PATH=./lib/SFML-2.4.1/lib && ./build/sfml-game

echo "Program running"
