#include "zombie.h"

int main()
{
	int n = 7;
	Zombie *horde = zombieHorde(n, "Zmbo");
	for (int i = 0; i < n; ++i)
		horde[i].announce();
	delete[] horde;
}