#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap( void ): ClapTrap("", 30, 100, 100)
{
	std::cout << RED << "Frag default constructor called\n";
}

FragTrap::FragTrap( std::string const name ): ClapTrap(name, 30, 100, 100)
{
	std::cout << RED << "Frag constructor with string called\n";
}

FragTrap::~FragTrap( void )
{
	std::cout << RED << "Frag destructor called\n";
}

void	FragTrap::attack(std::string const &s)
{
	std::cout << RED << "FragTrap " << getName() +  " attack " + s
	<< ", causing " << getAttackDamage() <<  " points of damage\n";
}

void	FragTrap::highFivesGuys(void )
{
	std::cout << RED << "HIGHT FIVE GUYS WE GONNA WIN\n";
}

std::ostream& operator<< (std::ostream &out, const FragTrap &frag)
{
	out << RED << "FragTrap: " << frag.getName() << "( " << frag.getHitPoints()
	<< ", " << frag.getEnergyPoints()
	<< ", " << frag.getAttackDamage() << " )";
	return out;
}
