#include "dog.h"
#include "cat.h"

int main()
{
	int	n = 10;
	Animal* animals[n];
	for(int i = 0; i < n; i++)
	{
		if (i < n/2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		animals[i]->makeSound();
	}

	for (int i = 0; i < n; i++)
		delete animals[i];
}