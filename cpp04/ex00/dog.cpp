#include "dog.h"

Dog::Dog(): Animal()
{
	type = "Dog";
	std::cout << type << " constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << type << " deconstructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << type << " copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs)
{
	if (this == &rhs)
		return *this;
	this->type = rhs.getType();
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << type << " says haaaf, haaaf!" << std::endl;
}