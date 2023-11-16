#pragma once
#include "animal.h"

class Dog : public Animal
{
public:
	Dog();
	~Dog();
	Dog(const Dog& other);
	Dog& operator=(const Dog& other);
	void makeSound(void) const override;
};