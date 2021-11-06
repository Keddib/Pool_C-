#include "Cure.hpp"
#include <string>
#include <iostream>

Cure::Cure( void ) : AMateria("cure")
{
	std::cout << "Cure Default constructor called\n";
}
Cure::Cure( std::string const &type ) : AMateria(type)
{
	std::cout << "Cure Default constructor called\n";
}

Cure::Cure( Cure const & other ) : AMateria(other)
{
	std::cout << "Cure Copy construcotr called\n";
}

Cure::~Cure()
{
	std::cout << "Cure destructor called\n";
}

Cure& Cure::operator=( Cure const &other)
{
	AMateria::operator=(other);
	std::cout << "Cure copy assignment called\n";
	return *this;
}


AMateria* Cure::clone( void ) const
{
	return new Cure(); //AMateria(); not instantiatable
}

void Cure::use( ICharacter& target )
{
	std::cout << "* heals " <<  target.getName() + "’s wounds *\n";
}
