#include "FragTrap.hpp"
#include <iostream>


int main()
{
	FragTrap a("ONE");
	FragTrap b(a);
	a.getStatus();
	a.attack("ENEMY");
	a.takeDamage(20);
	a.beRepaired(20);
	a.highFivesGuys();
	return 0;
}
