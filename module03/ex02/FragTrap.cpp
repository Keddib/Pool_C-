#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap( void ): ClapTrap("", 100, 100, 30)
{
	std::cout << RED << "Frag default constructor called\n";
}

FragTrap::FragTrap( std::string const name ): ClapTrap(name, 100, 100, 30)
{
	std::cout << RED << "Frag constructor with string called\n";
}

FragTrap::~FragTrap( void )
{
	std::cout << RED << "Frag destructor called\n";
}

FragTrap::FragTrap( const FragTrap &scav ): ClapTrap(scav)
{
	std::cout << RED << "Frag copy constructor called\n";
}

FragTrap& FragTrap::operator=(const FragTrap &scav)
{
	ClapTrap::operator=(scav);
	std::cout << RED << "Frag assignment operator overloading called\n";
	return *this;
}

void	FragTrap::attack(std::string const &s)
{
	std::cout << RED << "FragTrap " << m_name +  " attack " + s
	<< ", causing " << m_attackDamage <<  " points of damage\n";
}

void	FragTrap::highFivesGuys(void )
{
	std::cout << RED << "HIGHT FIVE GUYS WE GONNA WIN\n";
}
