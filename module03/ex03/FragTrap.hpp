#ifndef FRAGTRAP_91_HPP
#define FRAGTRAP_91_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( const std::string);
		~FragTrap( void );
		void attack( const std::string&);
		void highFivesGuys(void);
};

std::ostream& operator<< (std::ostream &out, const FragTrap &frag);

#endif
