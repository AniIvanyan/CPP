#include "clapTrap.h"

int main()
{
	ClapTrap ct1("Dog");
	ClapTrap ct2("Cat");

	ct1.attack("Cat");
	ct2.takeDamage(5);
	ct2.attack("Dog");
	ct1.takeDamage(10);
	ct2.beRepaired(3);
}