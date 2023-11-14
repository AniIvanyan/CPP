#include "fragTrap.h"

FragTrap::FragTrap(const std::string& name): ClapTrap(name)
{
	std::cout << "FragTrap Constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->damage = 20;

}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	ClapTrap::operator=(other);
	return *this;
}

void FragTrap::attack(const std::string& target)
{
	if (this->energyPoints <= 0)
		std::cout << "FragTrap " << this->name << " is out of energy to attack" << std::endl;
	else
	{
		std::cout << "FragTrap " << this->name << " atackes " << target << " , causing " << this->damage << " points of damage" << std::endl;
		this->energyPoints--;
	}
}

void FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap " << this->name << " requests high five" << std::endl;  
}