#include "zombie.h"
#include <iostream>

Zombie::Zombie() {};
Zombie::~Zombie() {std::cout << "Destructor is called for " + getName() << std::endl; };
Zombie::Zombie(const std::string& name): name(name) {};

std::string Zombie::getName(void) const {
	return name;
}

void Zombie::announce(void) {
	std::cout << getName() + ": BraiiiiiiinnnzzzZ..." << std::endl;
}