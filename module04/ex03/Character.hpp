#ifndef CHARACTER_889_HPP
#define CHARACTER_889_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string m_name;
		AMateria *m_AM[4];
		int m_emtyPlace; // holds the last emty spot for materia if = 4 is full;
		void deepCopy(Character const &other);
	public:
		Character( void );
		Character( std::string const &name );
		~Character( void );
		Character( Character const &other );
		Character& operator = (Character const &other);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
