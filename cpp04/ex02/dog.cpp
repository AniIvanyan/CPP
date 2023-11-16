#include "dog.h"

Dog::Dog(): Animal()
{
	type = "Dog";
	this->dogBrain = new Brain();
	std::cout << type << " constructor called" << std::endl;
}

Dog::~Dog()
{
	delete dogBrain;
	std::cout << type << " deconstructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	type = "Dog";
	this->dogBrain = new Brain(*other.dogBrain);
	std::cout << type << " copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs)
{
	if (this == &rhs)
		return *this;
	this->type = rhs.getType();
	*this->dogBrain = *rhs.dogBrain;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << type << " says haaaf, haaaf!" << std::endl;
}