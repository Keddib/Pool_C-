#ifndef DOG_0001_HPP
#define DOG_0001_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *m_pBrain;
		void deepCopy(const Dog &);
	public:
		Dog( void );
		~Dog( void );
		Dog( const Dog & );
		Dog& operator = (const Dog &);
		void makeSound( void ) const;
};

#endif
