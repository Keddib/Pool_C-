#ifndef FIXED_101_HPP
#define FIXED_101_HPP

class Fixed
{
	private:
		int _raw;
		static const int _fraction_bits = 8;
	public:
		//4 rule 98 + 2 in c++ 11;
		Fixed( void );
		// copy constructor;
		Fixed &operator = (const Fixed &);
		~Fixed( void );

		Fixed	operator + (const Fixed &);
		Fixed	operator - (const Fixed &);
		Fixed	operator * (const Fixed &);
		Fixed	operator / (const Fixed &);
		Fixed	operator ++ ( void ); //prefix
		Fixed	operator -- ( void ); //prefix
		Fixed	operator ++ ( int ); //postfix
		Fixed	operator -- ( int ); //postfix
		bool	operator == (const Fixed &);
		bool	operator != (const Fixed &);
		bool	operator > (const Fixed &);
		bool	operator >= (const Fixed &);
		bool	operator < (const Fixed &);
		bool	operator <= (const Fixed &);
		int		getRawBits( void ) const;
		void	setRawBits(int const value);
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream& operator<< (std::ostream& out, const Fixed& fixed);

#endif
