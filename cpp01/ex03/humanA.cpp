#include "humanA.h"
#include <iostream>

HumanA::HumanA(const std::string &name, Weapon &weapon) : name(name), weapon(weapon){};

const std::string& HumanA::getName() const
{
	return name;
}

const Weapon& HumanA::getWeapon() const
{
	return weapon;
}

void HumanA::attack(void) const
{
	std::cout << getName() << " attacks with their " << getWeapon().getType() << std::endl;
}