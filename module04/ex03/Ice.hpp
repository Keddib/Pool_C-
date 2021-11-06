#ifndef ICE_8181_HPP
#define ICE_8181_HPP
#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice( void );
		Ice( std::string const &type );
		Ice( Ice const & other );
		~Ice( void );
		Ice& operator = (Ice const &other);
		AMateria* clone( void ) const;
		void use( ICharacter& target );

};

#endif
