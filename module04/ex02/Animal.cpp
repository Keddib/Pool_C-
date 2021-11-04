#include "Animal.hpp"
#include <string>
#include <iostream>

Animal::Animal( void ): m_type("Animal")
{
	std::cout << "Animal Default constuctor called\n";
}

Animal::~Animal( void )
{
	std::cout << "Animal Destructor called\n";
}

Animal::Animal( const Animal &other )
{
	this->m_type = other.m_type;
}

Animal& Animal::operator = (const Animal &other)
{
	m_type = other.m_type;
	std::cout << "Animal Copy Assignment Called\n";
	return *this;
}

std::string Animal::getType( void ) const
{
	return m_type;
}
