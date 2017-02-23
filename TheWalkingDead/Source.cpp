#include<iostream>
#include<string>
#include <ctime>

enum weapon
{
	FISTS,GUN,SHOTGUN,REVOLVER,SNIPER,MACHINE_GUN,MAX
};

class Zombie;
class Player
{

	weapon weapon=rand()%6;
	float precision;
	int life;
	
public:
	Player();
	void attack(Zombie &) {};
	bool isAlive() {};
};

class Zombie {
	int distanceToPlayer;
	float speed;
	float damage;
	void attack(Player &) {};
	bool isAlive;
	Zombie();
};












int main (void)
{
	Player p;




 }