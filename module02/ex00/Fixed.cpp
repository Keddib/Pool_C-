#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed( void ) : _raw(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed( const Fixed &fixed) //copy constructor
{
	this->_raw = fixed._raw;
	std::cout << "Copy constructor called\n";
}

Fixed::~Fixed( void )
{
	_raw = 0;
	std::cout << "Destructor called\n";
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return (_raw);
}

void	Fixed::setRawBits(int const value)
{
	_raw = value;
	std::cout << "setRawBits member function called\n";
}

Fixed& Fixed::operator = (const Fixed &fixed)
{
	if (this == &fixed) // if not self assignment
		return *this;
	_raw = fixed._raw;
	std::cout << "Assignment operator overload called\n";
	return *this;
}
