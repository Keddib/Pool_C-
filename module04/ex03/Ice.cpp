#include "Ice.hpp"
#include <string>
#include <iostream>

Ice::Ice( void ) : AMateria("ice")
{
	std::cout << "Ice Default constructor called\n";
}
Ice::Ice( std::string const &type ) : AMateria(type)
{
	std::cout << "Ice Default constructor called\n";
}

Ice::Ice( Ice const & other ) : AMateria(other)
{
	std::cout << "Ice Copy construcotr called\n";
}

Ice::~Ice()
{
	std::cout << "Ice destructor called\n";
}

Ice& Ice::operator =( Ice const &other)
{
	AMateria::operator=(other);
	std::cout << "Ice copy assignment called\n";
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
