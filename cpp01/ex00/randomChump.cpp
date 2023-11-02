#include "zombie.h"

void randomChump(std::string name)
{
	Zombie randomZombie = Zombie(name);
	randomZombie.announce();
}