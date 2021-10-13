#include "HumanA.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(std::string s, Weapon &w): _name(s), _weapon(w)
{
	std::cout << "HumanA Created with parameterized Constructor\n";
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA Distroyed\n";
}

void HumanA::attack()
{
	std::cout << _name + " attacks with his " + _weapon.getType() + '\n';
}
