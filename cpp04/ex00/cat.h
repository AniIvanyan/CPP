#pragma once
#include "animal.h"

class Cat : public Animal
{
public:
	Cat();
	~Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	void makeSound(void) const override;
	using Animal::operator=;
};