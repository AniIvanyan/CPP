#include "zombie.h"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main()
{
	Zombie zombie1;
	zombie1.announce();
	Zombie zombie2 = Zombie("Foo");
	zombie2.announce();
	Zombie *zombie3 = newZombie("New Zombie");
	zombie3->announce();
	randomChump("Random Zombie");
	delete zombie3;
	zombie3 = nullptr;
}