#pragma once
#include <string>
#include "weapon.h"

// For B it is pointer, because it not always have a weapon, so if not nullptr if yes will use setWeapon
class HumanB
{
private:
	std::string name;
	Weapon *weapon;

public:
	HumanB();
	HumanB(const std::string& name);
	void setWeapon(Weapon& weapon);
	const std::string& getName() const;
	const Weapon *getWeapon() const;
	void attack(void) const;
};