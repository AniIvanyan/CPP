#pragma once
#include "clapTrap.h"

class FragTrap : public ClapTrap
{
public:
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& other);
	~FragTrap();
	FragTrap& operator=(const FragTrap& other);
	void attack(const std::string& target);
	void highFivesGuys(void) const;
};