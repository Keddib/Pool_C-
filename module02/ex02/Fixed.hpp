#ifndef FIXED_101_HPP
#define FIXED_101_HPP

#include <iostream>

class Fixed
{
	private:
		int _raw;
		static const int _fraction_bits = 8;
	public:
		//4 rule 98 + 2 in c++ 11;
		Fixed( void );
		Fixed( int );
		Fixed( float );
		// copy constructor;
		Fixed &operator = (const Fixed &);
		~Fixed( void );

		Fixed	operator + (const Fixed &);
		Fixed	operator - (const Fixed &);
		Fixed	operator * (const Fixed &);
		Fixed	operator / (const Fixed &);
		Fixed&	operator ++ ( void ); //prefix
		Fixed&	operator -- ( void ); //prefix
		Fixed	operator ++ ( int ); //postfix
		Fixed	operator -- ( int ); //postfix
		bool	operator == (const Fixed &) const;
		bool	operator != (const Fixed &) const;
		bool	operator > (const Fixed &) const;
		bool	operator >= (const Fixed &) const;
		bool	operator < (const Fixed &) const;
		bool	operator <= (const Fixed &) const;
		int		getRawBits( void ) const;
		void	setRawBits(int const value);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		
		//static mem functions related to the class not the objects doesn't have this pointer
		static Fixed& max (Fixed &, Fixed&);
		static const Fixed& max (const Fixed &, const Fixed&);
};

std::ostream& operator<< (std::ostream& out, const Fixed& fixed);

#endif
