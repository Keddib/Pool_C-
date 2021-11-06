#include "AMateria.hpp"
#include <string>
#include <iostream>

AMateria::AMateria( void ) : m_type("materia") {}

AMateria::AMateria(std::string const & type): m_type(type) {}

AMateria::AMateria( AMateria const & other ): m_type(other.m_type) {}

AMateria::~AMateria() {}

AMateria& AMateria::operator=( AMateria const &other)
{
	m_type = other.m_type;
	return *this;
}

std::string const & AMateria::getType( void ) const
{
	return m_type;
}

void AMateria::use( ICharacter& ) {}
