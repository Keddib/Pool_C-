#include "WrongAnimal.hpp"
#include <string>
#include <iostream>

WrongAnimal::WrongAnimal( void ): m_type("")
{
	std::cout << "WrongAnimal Default constuctor called\n";
}

WrongAnimal::WrongAnimal( const std::string &s ): m_type(s)
{
	std::cout << "WrongAnimal Default constuctor called\n";
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal Destructor called\n";
}

WrongAnimal::WrongAnimal( const WrongAnimal &other )
{
	this->m_type = other.m_type;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal &other)
{
	m_type = other.m_type;
	std::cout << "WrongAnimal Copy Assignment Called\n";
	return *this;
}

std::string	WrongAnimal::getType( void ) const
{
	return m_type;
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "!!!??????\n";
}
