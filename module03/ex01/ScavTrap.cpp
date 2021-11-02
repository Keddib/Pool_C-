#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( void ): ClapTrap("", 20, 100, 50)
{
	std::cout << YELLOW << "Scav default constructor called\n";
}

ScavTrap::ScavTrap( std::string const name ): ClapTrap(name, 20, 100, 50)
{
	std::cout << YELLOW << "Scav constructor with string called\n";
}

ScavTrap::ScavTrap( const ScavTrap &scav ): ClapTrap(scav)
{
	std::cout << YELLOW << "Scav copy constructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap &scav)
{
	ClapTrap::operator=(scav);
	std::cout << YELLOW << "Scav assignment operator overloading called\n";
	return *this;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << YELLOW << "Scav destructor called\n";
}

void	ScavTrap::attack(std::string const &s)
{
	std::cout << YELLOW << "ScavTrap " << m_name +  " attack " + s
	<< ", causing " << m_attackDamage <<  " points of damage\n";
}

void ScavTrap::guardGate()
{
	std::cout << YELLOW << "ScavTrap Has Entered in Gate keeper Mode\n";
}
