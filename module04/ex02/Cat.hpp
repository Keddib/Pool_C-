#ifndef CAT_0001_HPP
#define CAT_0001_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *m_pBrain;
		void deepCopy(const Cat &);
	public:
		Cat( void );
		~Cat( void );
		Cat( const Cat & );
		Cat& operator = (const Cat &);
		void makeSound( void ) const;

};

#endif
