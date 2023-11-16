#include "cat.h"

Cat::Cat(): Animal()
{
	type = "Cat";
	catBrain = new Brain();
	std::cout << type << " constructor called" << std::endl;
}

Cat::~Cat()
{
	delete catBrain;
	std::cout << type << " deconstructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	type = "Cat";
	this->catBrain = new Brain(*other.catBrain);
	std::cout << type << " copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
	if (this == &rhs)
		return *this;
	this->type = rhs.getType();
	*this->catBrain = *rhs.catBrain;
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << type << " says meeoow, meeeow!" << std::endl;
}