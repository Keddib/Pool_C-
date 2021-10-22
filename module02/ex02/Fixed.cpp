#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed( void ) : _raw(0) {}

Fixed::Fixed( int vl )
{
	_raw = vl << _fraction_bits;
}

Fixed::Fixed( float vl )
{
	_raw = roundf(vl * (1 << _fraction_bits));
}

Fixed::~Fixed( void ) { _raw = 0; }

int		Fixed::getRawBits( void ) const
{
	return (_raw >> _fraction_bits);
}

void	Fixed::setRawBits(int const value)
{
	_raw = value;
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
	return *this;
}

Fixed	Fixed::operator + (const Fixed &other)
{
	Fixed tmp;
	tmp.setRawBits(this->_raw + other._raw);
	return tmp;
}

Fixed	Fixed::operator - (const Fixed &other)
{
	Fixed tmp;
	tmp.setRawBits(this->_raw - other._raw);
	return tmp;
}

Fixed	Fixed::operator * (const Fixed &other)
{
	int tmpRaw = this->_raw * other._raw;
	Fixed tmp;
	tmp.setRawBits(tmpRaw >> _fraction_bits);
	return tmp;
}

Fixed	Fixed::operator / (const Fixed &other)
{
	// roundf(vl * (1 << _fraction_bits);
	float result = this->_raw / other._raw;
	// int tmpRaw = this->_raw / other._raw;
	Fixed tmp;
	tmp.setRawBits(roundf(result * (1 << _fraction_bits)));
	return tmp;
}

bool	Fixed::operator == (const Fixed &other)
{
	return (this->_raw == other._raw);
}

bool	Fixed::operator != (const Fixed &other)
{
	return !(this->_raw == other._raw);
}

bool	Fixed::operator < (const Fixed &other)
{
	return (this->_raw < other._raw);
}

bool	Fixed::operator > (const Fixed &other)
{
	return (this->_raw > other._raw);
}

bool	Fixed::operator >= (const Fixed &other)
{
	return !(this->_raw < other._raw);
}

bool	Fixed::operator <= (const Fixed &other)
{
	return !(this->_raw > other._raw);
}

// pre-increment and pre-decrement

Fixed&	Fixed::operator ++ ( void )
{
	_raw += 1;
	return *this;
}

Fixed&	Fixed::operator -- ( void )
{
	_raw -= 1;
	return *this;
}

// post-increment and post-decrement

Fixed	Fixed::operator ++ ( int )
{
	Fixed tmp = *this;
	++(*this);
	return tmp;
}

Fixed	Fixed::operator -- ( int )
{
	Fixed tmp = *this;
	--(*this);
	return tmp;
}



std::ostream& operator<< (std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}
