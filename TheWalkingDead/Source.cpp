#include<iostream>
#include<string>
#include <ctime>

enum Weapon
{
	FISTS,GUN,SHOTGUN,REVOLVER,SNIPER,MACHINE_GUN,MAX
};

class Zombie;
class Player
{

	Weapon weapon;
	float precision;
	int life;
	
public:
	Player() : weapon(static_cast<Weapon>(rand() % 6)),precision((rand()%11)/10.0),life(100) {};

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








6yu



int main (void)
{
	Player p;




 }