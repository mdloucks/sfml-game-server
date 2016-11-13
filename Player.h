#pragma once
/*
this class will include the players base stats and attributes it can have
*/
class Player
{
public:
	Player();
	~Player();
	class PlayerStats
	{
	public:
		int hp = 100;
		int atk = 15;
		double spd = 0.1;
	};
	class PlayerConditions {
	public:
		
		struct ImmobileConditions
		{
			bool isStunned;
			bool isRooted;
			bool isSlowed;
			bool isFrozen;
			bool isDead;
		};
		ImmobileConditions ic;

		struct DotContitions
		{
			bool isPoisoned;
			bool isIgnited;
			bool isBleeding;
		};
		DotContitions dotc;
		
		bool isImmobile;
		/*
		  gets a bool depending on which updates depending on what effect 
		  the player has or if a UI is open
		*/
		bool getIsImmobile();
	};
};

