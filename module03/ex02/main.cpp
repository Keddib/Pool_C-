#include "FragTrap.hpp"
#include <iostream>


int main()
{
	FragTrap a("ONE");
	FragTrap b(a);
	a.attack("ENEMY");
	a.takeDamage(20);
	a.beRepaired(20);
	std::cout << a << '\n';
	a.highFivesGuys();
	return 0;
}
