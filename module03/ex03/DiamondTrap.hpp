#ifndef DIAMONDTRAP_04_HPP
#define DIAMONDTRAP_04_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string m_name;

	public:
		DiamondTrap( void );
		DiamondTrap( const std::string );
		~DiamondTrap( void );
		DiamondTrap( const DiamondTrap& );
		DiamondTrap& operator=( const DiamondTrap& );
		void attack( const std::string & );
		void whoAmI( void );
};

#endif
