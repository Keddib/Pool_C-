#ifndef CURE_8181_HPP
#define CURE_8181_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure( void );
		Cure( std::string const &type );
		Cure( Cure const & other );
		~Cure( void );
		Cure& operator = (Cure const &);
		AMateria* clone( void ) const;
		void use( ICharacter& target );
};

#endif
