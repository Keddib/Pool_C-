#ifndef FIXED_101_HPP
#define FIXED_101_HPP

class Fixed
{
	private:
		int _raw;
		static const int _fraction_bits = 8;
	public:
		Fixed( void );
		~Fixed( void );
		Fixed( const Fixed &); //copy constructor
		Fixed& operator = (const Fixed &fixed); // assignment operator overload
		
		int		getRawBits( void ) const;
		void	setRawBits(int const value);
};

#endif
