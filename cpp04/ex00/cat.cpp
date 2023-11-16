#include "cat.h"

Cat::Cat(): Animal()
{
	type = "Cat";
	std::cout << type << " constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << type << " deconstructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << type << " copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
	if (this == &rhs)
		return *this;
	this->type = rhs.getType();
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << type << " says meeoow, meeeow!" << std::endl;
}