#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed( void ) : _raw(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed( void )
{
	_raw = 0;
	std::cout << "Destructor called\n";
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return (_raw >> _fraction_bits);
}

void	Fixed::setRawBits(int const value)
{
	std::cout << "setRawBits member function called\n";
	_raw = value << _fraction_bits;
}
