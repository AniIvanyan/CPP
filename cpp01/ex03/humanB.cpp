#include "humanB.h"
#include <iostream>

HumanB::HumanB(){};
HumanB::HumanB(const std::string &name) : name(name){};

void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

const std::string& HumanB::getName() const
{
	return name;
}

const Weapon *HumanB::getWeapon() const
{
	return weapon;
}

void HumanB::attack(void) const
{
	std::cout << getName() << " attacks with their " ;
	if (weapon != nullptr)
		std::cout << getWeapon()->getType();
	else
		std::cout << "(no weapon available)";
	std::cout << std::endl;
}