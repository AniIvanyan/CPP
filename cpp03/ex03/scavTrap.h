#pragma once
#include "clapTrap.h"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& other);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& other);
	void guardGate(void) const;
	void attack(const std::string& target);
};