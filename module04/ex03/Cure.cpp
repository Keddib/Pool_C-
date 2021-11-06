#include "Cure.hpp"
#include <string>
#include <iostream>

Cure::Cure( void ) : AMateria("cure") {}
Cure::Cure( std::string const &type ) : AMateria(type) {}

Cure::Cure( Cure const & other ) : AMateria(other) {}

Cure::~Cure() {}

Cure& Cure::operator=( Cure const &other)
{
	AMateria::operator=(other);
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
