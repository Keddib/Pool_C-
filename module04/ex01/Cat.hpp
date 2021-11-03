#ifndef CAT_0001_HPP
#define CAT_0001_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *m_pBrain;
	public:
		Cat( void );
		~Cat( void );
		Cat( const Cat & );
		Cat& operator = (const Cat &);
		void makeSound( void ) const;
		void deepCopy(const Cat &);
};

#endif
