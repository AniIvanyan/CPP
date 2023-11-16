#include "animal.h"

Animal::Animal(): type("Animal")
{
	std::cout << type << " constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << type << " deconstructor called" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.getType())
{
	std::cout << type << " copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& rhs)
{
	if (this == &rhs)
		return *this;
	this->type = rhs.getType();
	return *this;
}

const std::string& Animal::getType(void) const
{
	return type;
}

void Animal::makeSound(void) const
{
	std::cout << type << " making some sounds!" << std::endl;
}