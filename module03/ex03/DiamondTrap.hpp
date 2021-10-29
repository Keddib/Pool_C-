#ifndef DIAMONDTRAP_04_HPP
#define DIAMONDTRAP_04_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string m_name;
		using FragTrap::m_hitPoints;
		using ScavTrap::m_energyPoints;
		using FragTrap::m_attackDamage;

	public:
		DiamondTrap( void );
		DiamondTrap( const std::string );
		~DiamondTrap( void );
		using ScavTrap::attack;
		using ScavTrap::guardGate;
		using FragTrap::highFivesGuys;
		using FragTrap::getHitPoints;
		using ScavTrap::getEnergyPoints;
		using FragTrap::getAttackDamage;
		std::string getName( void ) const;
		void whoAmI( void );
};

// std::ostream& operator << (std::ostream &out, const DiamondTrap &d);

#endif
