#include "DiamondTrap.hpp"
#include <iostream>


int main()
{
	DiamondTrap a("MONSTER");

	a.attack("ENEMY");
	a.highFivesGuys();
	a.guardGate();
	a.whoAmI();
	std::cout << a.getHitPoints() << '\n';
	std::cout << a.getEnergyPoints() << '\n';
	std::cout << a.getAttackDamage() << '\n';
	DiamondTrap b(a);
	a = b;
	// a.takeDamage(20);
	// a.beRepaired(20);

	// std::cout << a << '\n';
/*
** 	a.highFivesGuys();
*/
	return 0;
}
