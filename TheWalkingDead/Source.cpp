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
public:
	Zombie() :distanceToPlayer((rand()%180)+20),speed((rand()%21/10.0)),damage((rand() % 21 / 10.0) {};
	void attack(Player &) {};
	bool isAlive;
	
};












int main (void)
{
	Player p;




 }