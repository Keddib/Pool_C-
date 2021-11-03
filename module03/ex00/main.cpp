#include "ClapTrap.hpp"
#include <iostream>


int main()
{
	ClapTrap a("CLAP1");
	ClapTrap b(a);
	ClapTrap c("");
	c = a;
	a.getStatus();
	a.attack("ENEMY");
	a.takeDamage(20);
	a.beRepaired(20);
	return 0;
}
