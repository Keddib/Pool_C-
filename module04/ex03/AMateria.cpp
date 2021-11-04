#include "AMateria.hpp"
#include <string>
#include <iostream>

AMateria::AMateria( void ) : m_type("materia")
{
	std::cout << "AMateria Default constructor called\n";
}

AMateria::AMateria( std::string const & type ) : m_type(type)
{
	std::cout << "AMateria constructor with string called\n";
}

AMateria::AMateria( AMateria const & other ) : m_type(other.m_type)
{
	std::cout << "AMateria Copy construcotr called\n";
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called\n";
}

AMateria& AMateria::operator=( AMateria const &other)
{
	std::cout << "AMateria copy assignment called\n";
}

std::string const & AMateria::getType( void ) const
{
	return m_type;
}

void AMateria::use( ICharacter& target )
{
	std::cout << "// I dont' know what to do here\n";
}
