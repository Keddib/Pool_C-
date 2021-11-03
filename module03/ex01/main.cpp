#include "ScavTrap.hpp"
#include <iostream>


int main()
{
	ScavTrap a("ONE");
	ScavTrap b(a);
	ScavTrap c("test");
	b = c;
	a.getStatus();
	a.attack("ENEMY");
	a.takeDamage(20);
	a.beRepaired(20);
	a.guardGate();
	return 0;
}
