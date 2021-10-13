#include "Weapon.hpp"
#include <string>
#include <iostream>

Weapon::Weapon(void)
{
	std::cout << "Weapon Created with Deafult Constructor\n";
}

Weapon::Weapon(std::string s)
{
	setType(s);
	std::cout << "Weapon Created with parameterized Constructor\n";
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon Distroyed\n";
}

void Weapon::setType(std::string s)
{
	_wType = s;
}

const std::string &Weapon::getType(void) const
{
	return _wType;
}
