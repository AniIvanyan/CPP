#pragma once
#include "scavTrap.h"
#include "fragTrap.h"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
	std::string name;

public:
	DiamondTrap(const std::string& name);
	DiamondTrap(const DiamondTrap& other);
	~DiamondTrap();
	using ScavTrap::attack;
	using ClapTrap::operator=;
	void whoAmI(void) const;
};