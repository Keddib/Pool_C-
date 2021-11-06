#ifndef AMATERIA_11_HPP
#define AMATERIA_11_HPP

#include "ICharacter.hpp"
#include <string>

class AMateria
{
	protected:
		std::string m_type;
	public:
		AMateria( void );
		AMateria(std::string const & type);
		AMateria( AMateria const & other );
		virtual ~AMateria( void );
		AMateria& operator = (AMateria const &);
		std::string const & getType( void ) const; //Returns the materia type
		virtual AMateria* clone( void ) const = 0;
		virtual void use( ICharacter& target );
};

#endif
