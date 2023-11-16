#pragma once
#include "animal.h"
#include "brain.h"

class Cat : public Animal
{
private:
	Brain* catBrain;
public:
	Cat();
	~Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	void makeSound(void) const override;
};