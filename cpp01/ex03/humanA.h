#pragma once
#include <string>
#include "weapon.h"

// for A it is reference because A need to be always armed, and reference should always be initialized.
class HumanA
{
private:
	std::string name;
	Weapon &weapon;

public:
	HumanA(const std::string &name, Weapon &weapon);
	const std::string& getName() const;
	const Weapon& getWeapon() const;
	void attack(void) const;
};