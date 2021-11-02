#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap( void ):
m_attackDamage(0), m_hitPoints(10), m_energyPoints(10)
{
	std::cout << "default constructor called\n";
}

ClapTrap::ClapTrap( std::string name ):
m_name(name), m_attackDamage(0), m_hitPoints(10), m_energyPoints(10)
{
	std::cout << "constructor with string param called\n";
}

ClapTrap::ClapTrap( ClapTrap const &claptrap )
{
	std::cout << "Copy constructor called\n";
	*this = claptrap;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor called\n";
}

ClapTrap& ClapTrap::operator = ( ClapTrap const &claptrap )
{
	m_name = claptrap.m_name;
	m_hitPoints = claptrap.m_hitPoints;
	m_energyPoints = claptrap.m_energyPoints;
	m_attackDamage = claptrap.m_attackDamage;
	std::cout << "operator assignment overload called\n";
	return *this;
}

void ClapTrap::attack( std::string const &s)
{
	std::cout << "ClapTrap " << m_name +  " attack " + s
	<< ", causing " << m_attackDamage <<  " points of damage\n";
}

void ClapTrap::takeDamage( unsigned int damage)
{
	std::cout << "ClapTrap " << m_name +  " takes "
	<< damage <<  " points of damage\n";
}

void ClapTrap::beRepaired( unsigned int repaired)
{
	std::cout << "ClapTrap " << m_name +  " takes "
	<< repaired <<  " points of health\n";
}
