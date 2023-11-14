#include "scavTrap.h"

int main()
{
	ClapTrap ct1("Dog");
	ClapTrap ct2("Cat");

	ScavTrap st1("Puppy");
	ScavTrap st2("Kitty");

	ct1.attack("Cat");
	ct2.takeDamage(5);
	ct2.attack("Dog");
	ct1.takeDamage(10);
	ct2.beRepaired(3);

	st1.attack("Kitty");
	st2.takeDamage(20);
	st2.attack("Puppy");
	st1.takeDamage(20);
	st2.beRepaired(2);
	st1.guardGate();
}