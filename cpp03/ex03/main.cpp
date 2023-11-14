#include "diamondTrap.h"

int main()
{
	ScavTrap ct1("Dog");
	ScavTrap ct2("Cat");

	FragTrap st1("Puppy");
	FragTrap st2("Kitty");

	DiamondTrap dt1("Fox");

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
	st1.highFivesGuys();

	dt1.whoAmI();
	dt1.attack("Cat");
	ct2.takeDamage(20);
	dt1.guardGate();
}