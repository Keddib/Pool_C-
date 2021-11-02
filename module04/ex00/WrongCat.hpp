#ifndef WRONGCAT_0001_HPP
#define WRONGCAT_0001_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat( void );
		~WrongCat( void );
		WrongCat( const WrongCat & );
		WrongCat& operator = (const WrongCat &);
		void makeSound( void ) const;
};


#endif
