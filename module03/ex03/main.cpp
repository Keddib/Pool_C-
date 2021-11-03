#include "DiamondTrap.hpp"
#include <iostream>


int main()
{
	DiamondTrap a("MONSTER");

	a.attack("ENEMY");
	a.highFivesGuys();
	a.guardGate();
	a.whoAmI();
	a.getStatus();

	// DiamondTrap b(a);
	// a = b;
	a.takeDamage(20);
	a.beRepaired(20);
	return 0;
}
