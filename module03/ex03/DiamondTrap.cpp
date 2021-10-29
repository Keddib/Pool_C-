#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap( void ): ScavTrap(""), FragTrap("")
{
	std::cout << BLUE << "Diamond defualt Construt called\n";
}

DiamondTrap::DiamondTrap( const std::string s )
: ScavTrap(s + "_clap_name"), FragTrap(s + "_clap_name")
{
	std::cout << BLUE << "Diamond Construt with string called\n";
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << BLUE << "Diamond destrut called\n";
}

std::string DiamondTrap::getName( void ) const
{
	return m_name;
}

void DiamondTrap::whoAmI( void )
{
	std::cout << BLUE << "I am " << m_name + " inhereted from "
	<< ScavTrap::getName() + '\n';
}

// std::ostream& operator << (std::ostream &out, const DiamondTrap &d)
// {
	// out << BLUE << "DiamondTrap: " << d.getName() << "( " << d.getHitPoints()
	// << ", " << d.getEnergyPoints()
// 	// << ", " << d.getAttackDamage() << " )";
// 	return out;
// }
