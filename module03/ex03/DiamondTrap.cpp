#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap( void )
: ScavTrap(), FragTrap()
{
	std::cout << BLUE << "Diamond defualt Construt called\n";
}

DiamondTrap::DiamondTrap( const std::string s )
: ScavTrap(s, 100, 50, 30), FragTrap(s, 100, 50, 30)
{
	std::cout << BLUE << "Diamond Construt with string called\n";
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << BLUE << "Diamond destrut called\n";
}

std::string DiamondTrap::getName( void ) const
{
	return _name;
}

void DiamondTrap::whoAmI( void )
{
	std::cout << BLUE << "I am " << _name + " inhereted from "
	<< ScavTrap::getName() + '\n';
}

// std::ostream& operator << (std::ostream &out, const DiamondTrap &d)
// {
	// out << BLUE << "DiamondTrap: " << d.getName() << "( " << d.getHitPoints()
	// << ", " << d.getEnergyPoints()
// 	// << ", " << d.getAttackDamage() << " )";
// 	return out;
// }
