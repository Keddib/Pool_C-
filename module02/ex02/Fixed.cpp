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
	this->_raw = other._raw;
	std::cout << "assignment operator called\n";
	return *this;
}

Fixed	Fixed::operator + (const Fixed &other)
{
	Fixed tmp;
	//addition
	return tmp;
}

Fixed	Fixed::operator - (const Fixed &other)
{
	Fixed tmp;
	//addition
	return tmp;
}

Fixed	Fixed::operator * (const Fixed &other)
{
	Fixed tmp;
	//addition
	return tmp;
}

Fixed	Fixed::operator / (const Fixed &other)
{
	Fixed tmp;
	//addition
	return tmp;
}

bool	Fixed::operator == (const Fixed &other)
{
	return (this->_raw == other._raw);
}

bool	Fixed::operator != (const Fixed &other)
{
	return (this->_raw != other._raw);
}

bool	Fixed::operator > (const Fixed &other)
{
	return (this->_raw > other._raw);
}

bool	Fixed::operator >= (const Fixed &other)
{
	return (this->_raw >= other._raw);
}

bool	Fixed::operator < (const Fixed &other)
{
	return (this->_raw < other._raw);
}

bool	Fixed::operator <= (const Fixed &other)
{
	return (this->_raw <= other._raw);
}

Fixed&	Fixed::operator ++ ( void )
{
	// preincrement
	return *this;
}

Fixed&	Fixed::operator -- ( void )
{
	// predecriment
	return *this;
}

Fixed	Fixed::operator ++ ( int )
{
	Fixed tmp;
	tmp._raw = this->_raw;
	// postincriment
	return tmp;
}

Fixed	Fixed::operator -- ( int )
{
	Fixed tmp;
	tmp._raw = this->_raw;
	// postdecriment
	return tmp;
}



std::ostream& operator<< (std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}
