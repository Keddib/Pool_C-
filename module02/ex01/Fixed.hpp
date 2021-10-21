#ifndef FIXED_101_HPP
#define FIXED_101_HPP

class Fixed
{
	private:
		int _raw;
		static const int _fraction_bits = 8;
	public:
		Fixed( void );
		Fixed( int );
		Fixed( float );
		~Fixed( void );
		// copy constructor;
		Fixed &operator = (const Fixed &other);
		int		getRawBits( void ) const;
		void	setRawBits(int const value);
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream& operator<< (std::ostream& out, const Fixed& fixed);

#endif
