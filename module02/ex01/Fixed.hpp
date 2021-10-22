#ifndef FIXED_101_HPP
#define FIXED_101_HPP

#include <iostream>

class Fixed
{
	private:
		int _raw;
		static const int _fraction_bits = 8;
	public:
		Fixed( void );
		Fixed( const int );
		Fixed( const float );
		Fixed( const Fixed & );
		Fixed &operator = (const Fixed &);
		~Fixed( void );

		int		getRawBits( void ) const;
		void	setRawBits(int const value);

		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream& operator<< (std::ostream& out, const Fixed& fixed);

#endif
