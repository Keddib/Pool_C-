#include "ScavTrap.hpp"
#include <iostream>


int main()
{
	ScavTrap a("ONE");
	ScavTrap b(a);
	a.attack("ENEMY");
	a.takeDamage(20);
	a.beRepaired(20);
	std::cout << a << '\n';
	a.guardGate();
	return 0;
}
