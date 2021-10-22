#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed( void ) : _raw(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed( const int value )
{
	_raw = value << _fraction_bits;
	std::cout << "int constructor called\n";
}

Fixed::Fixed( const float value )
{
	_raw = roundf(value * (1 << _fraction_bits));
	std::cout << "float constructor called\n";
}

Fixed::Fixed( const Fixed &fixed)
{
	_raw = fixed._raw;
	std::cout << "copy constructor called\n";
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
	std::cout << "setRawBits member function called\n";
	_raw = value << _fraction_bits;
}

int		Fixed::toInt( void ) const
{
	return (_raw >> _fraction_bits);
}

float	Fixed::toFloat( void ) const
{
	return ( static_cast<float>(_raw) / (1 << _fraction_bits));
}

Fixed&	Fixed::operator = (const Fixed &other)
{
	std::cout << "assignment operator called\n";
	this->_raw = other._raw;
	return *this;
}


std::ostream& operator<< (std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}
