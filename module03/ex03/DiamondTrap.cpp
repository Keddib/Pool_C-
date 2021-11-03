#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap( void )
: ClapTrap(), ScavTrap(), FragTrap(), m_name("")
{
	std::cout << BLUE << "Diamond defualt Construt called\n";
}

DiamondTrap::DiamondTrap( const std::string s )
: ClapTrap(s + "_clap_name", 100, 50, 30), ScavTrap(s), FragTrap(s), m_name(s)
{
	std::cout << BLUE << "Diamond Construt with string called\n";
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << BLUE << "Diamond destrut called\n";
}

DiamondTrap::DiamondTrap( const DiamondTrap &other)
: ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	m_name = other.m_name;
	std::cout << BLUE << "Diamond Copy constructor called\n";
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap &other)
{
	ClapTrap::operator=(other);
	// ScavTrap::operator=(other);
	// FragTrap::operator=(other);
	std::cout << BLUE << "Diamond Copy assignment called\n";
	return *this;
}

void DiamondTrap::attack(std::string const &s)
{
	ScavTrap::attack(s);
}

void DiamondTrap::whoAmI( void )
{
	std::cout << BLUE << "I am " << m_name + " inhereted from "
	<< ClapTrap::m_name + '\n';
}
