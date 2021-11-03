#ifndef WRONGANIMAL_000_HPP
#define WRONGANIMAL_000_HPP

#include <string>

class WrongAnimal
{
	protected:
		std::string m_type;
	public:
		WrongAnimal( void );
		~WrongAnimal( void );
		WrongAnimal( const WrongAnimal & );
		WrongAnimal& operator = (const WrongAnimal &);
		std::string getType( void ) const;
		void makeSound( void ) const;
};

#endif
