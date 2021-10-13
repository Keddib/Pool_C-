#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB() : _name(""), _weapon(NULL)
{
	std::cout << "HumanB Created with deafualt Constructor\n";
}

HumanB::HumanB(std::string s): _name(s), _weapon(NULL)
{
	std::cout << "HumanB Created with parameterized Constructor\n";
}

HumanB::HumanB(std::string s, Weapon *w): _name(s), _weapon(w)
{
	std::cout << "HumanB Created with parameterized Constructor\n";
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB Distroyed\n";
}

void	HumanB::attack()
{
	// std::string s;
	if (!_weapon)
		std::cout << _name + " cannot attack he needs a weapon\n";
	else
		std::cout << _name + " attacks with his " + _weapon->getType() + '\n';
}

void	HumanB::setWeapon(Weapon &w)
{
	_weapon = &w;
}
