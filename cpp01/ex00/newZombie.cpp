#include "zombie.h"

Zombie *newZombie(std::string name)
{
	return new Zombie(name);
}
