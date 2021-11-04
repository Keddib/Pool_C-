#ifndef ANIMAL_000_HPP
#define ANIMAL_000_HPP

#include <string>

class Animal
{
	protected:
		std::string m_type;
	public:
		Animal( void );
		virtual ~Animal( void );
		Animal( const Animal & );
		Animal& operator = (const Animal &);
		virtual void makeSound( void ) const = 0;
		std::string getType( void ) const;
};

#endif
