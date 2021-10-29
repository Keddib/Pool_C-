#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap( void ):
m_attackDamage(0), m_hitPoints(10), m_energyPoints(10)
{
	std::cout << GREEN << "Clap default constructor called\n";
}

ClapTrap::ClapTrap( std::string name, int attack = 0 , int hit = 10, int energy = 10 ):
m_name(name), m_attackDamage(attack), m_hitPoints(hit), m_energyPoints(energy)
{
	std::cout << GREEN << "Clap constructor with string param called\n";
}

ClapTrap::ClapTrap( ClapTrap const &claptrap )
{
	*this = claptrap;
	std::cout << GREEN << "Clap Copy constructor called\n";
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
}

void ClapTrap::takeDamage( unsigned int damage)
{
	std::cout << GREEN << "ClapTrap " << m_name +  " takes "
	<< damage <<  " points of damage\n";
}

void ClapTrap::beRepaired( unsigned int repaired)
{
	std::cout << GREEN << "ClapTrap " << m_name +  " takes "
	<< repaired <<  " points of health\n";
}

std::string ClapTrap::getName( void ) const
{
	return m_name;
}

int ClapTrap::getAttackDamage( void ) const
{
	return m_attackDamage;
}

int ClapTrap::getHitPoints( void ) const
{
	return m_hitPoints;
}

int ClapTrap::getEnergyPoints( void ) const
{
	return m_energyPoints;
}
