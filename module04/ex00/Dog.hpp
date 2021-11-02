#ifndef DOG_0001_HPP
#define DOG_0001_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog( void );
		~Dog( void );
		Dog( const Dog & );
		Dog& operator = (const Dog &);
		void makeSound( void ) const;
};

#endif
