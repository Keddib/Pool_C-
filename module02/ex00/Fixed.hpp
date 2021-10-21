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
		// copy constructor;
		// assignation operator overload;
		int		getRawBits( void ) const;
		void	setRawBits(int const value);
};

#endif
