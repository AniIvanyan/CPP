#include "scavTrap.h"

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name)
{
	std::cout << "ScavTrap Constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->damage = 20;

}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	ClapTrap::operator=(other);
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energyPoints <= 0)
		std::cout << "ScavTrap " << this->name << " is out of energy to attack" << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->name << " atackes " << target << " , causing " << this->damage << " points of damage" << std::endl;
		this->energyPoints--;
	}
}

void ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << this->name << "is now in Gate keeper mode" << std::endl;  
}