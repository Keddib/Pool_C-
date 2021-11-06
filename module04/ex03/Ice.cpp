#include "Ice.hpp"
#include <string>
#include <iostream>

Ice::Ice( void ) : AMateria("ice") {}

Ice::Ice( std::string const &type ) : AMateria(type) {}

Ice::Ice( Ice const & other ) : AMateria(other) {}

Ice::~Ice() {}

Ice& Ice::operator =( Ice const &other)
{
	AMateria::operator=(other);
	return *this;
}

AMateria* Ice::clone( void ) const
{
	return new Ice(); //AMateria(); not instantiatable
}

void Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() + "*\n";
}
