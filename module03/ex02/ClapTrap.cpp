#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap( void )
: m_hitPoints(10), m_energyPoints(10), m_attackDamage(0)
{
	std::cout << GREEN << "Clap default constructor called\n";
}

ClapTrap::ClapTrap( std::string name, int hit = 10 , int energy = 10, int attack = 0 )
: m_name(name), m_hitPoints(hit), m_energyPoints(energy), m_attackDamage(attack)
{
	std::cout << GREEN << "Clap constructor with string param called\n";
}

ClapTrap::ClapTrap( ClapTrap const &claptrap )
{
	std::cout << GREEN << "Clap Copy constructor called\n";
	*this = claptrap;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << GREEN << "Clap Destructor called\n";
}

ClapTrap& ClapTrap::operator = ( ClapTrap const &claptrap )
{
	m_name = claptrap.m_name;
	m_hitPoints = claptrap.m_hitPoints;
	m_energyPoints = claptrap.m_energyPoints;
	m_attackDamage = claptrap.m_attackDamage;
	std::cout << GREEN << "Clap operator assignment overload called\n";
	return *this;
}

void ClapTrap::attack( std::string const &s)
{
	std::cout << GREEN << "ClapTrap " << m_name +  " attack " + s
	<< ", causing " << m_attackDamage <<  " points of damage\n";
	m_energyPoints -= 5;
}

void ClapTrap::takeDamage( unsigned int damage)
{
	std::cout << GREEN << "ClapTrap " << m_name +  " takes "
	<< damage <<  " points of damage\n";
	m_hitPoints -= damage;
}

void ClapTrap::beRepaired( unsigned int repaired)
{
	std::cout << GREEN << "ClapTrap " << m_name +  " takes "
	<< repaired <<  " points of health\n";
	m_hitPoints += repaired;
	m_energyPoints += repaired / 2;
}

void ClapTrap::getStatus( void )
{
	std::cout << GREEN << m_name + " (" << m_hitPoints << ", " << m_energyPoints <<
	", " << m_attackDamage << ")\n";
}
