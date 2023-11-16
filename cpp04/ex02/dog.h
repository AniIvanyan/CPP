#pragma once
#include "animal.h"
#include "brain.h"

class Dog : public Animal
{
private:
	Brain* dogBrain;
public:
	Dog();
	~Dog();
	Dog(const Dog& other);
	Dog& operator=(const Dog& other);
	void makeSound(void) const override;
};