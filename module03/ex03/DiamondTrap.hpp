#ifndef DIAMONDTRAP_04_HPP
#define DIAMONDTRAP_04_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string _name;

	public:
		DiamondTrap( void );
		DiamondTrap( const std::string );
		~DiamondTrap( void );
		using ScavTrap::attack; // using not allowed;
		std::string getName( void ) const;
		void whoAmI( void );
};

// std::ostream& operator << (std::ostream &out, const DiamondTrap &d);

#endif
