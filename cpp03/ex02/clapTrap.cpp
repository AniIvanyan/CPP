#include "clapTrap.h"

ClapTrap::ClapTrap(const std::string& name): name(name), hitPoints(10), energyPoints(10), damage(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other): name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), damage(other.damage)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->damage = other.damage;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints <= 0)
		std::cout << this->name << " is out of energy to attack" << std::endl;
	else
	{
		std::cout << this->name << " atackes " << target << " , causing " << this->damage << " points of damage" << std::endl;
		this->energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->hitPoints || this->hitPoints <= 0)
		std::cout << this->name << " is out of game" << std::endl;
	else
	{
		std::cout << this->name << " lost " << amount << " hit points" << std::endl;
		this->hitPoints-= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints <= 0)
	{
		std::cout << this->name << " is out of energy to repair" << std::endl;
	}
	else
	{
		std::cout << this-> name << " got " << amount << " hit points" << std::endl;
		this->hitPoints+= amount;
		this->energyPoints--;
	}
}