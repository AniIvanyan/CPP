#include "brain.h"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain deconstructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
	for (int i = 0; i < SIZE; i++)
		this->ideas[i] = other.ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& rhs)
{
	if (this == &rhs)
		return *this;
	for (int i = 0; i < SIZE; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}