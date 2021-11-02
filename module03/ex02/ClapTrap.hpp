#ifndef CLAPTRAP_090_HPP
#define CLAPTRAP_090_HPP

#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */

#include <string>

class ClapTrap
{
	private:
		std::string m_name;
		unsigned int m_attackDamage;
		unsigned int m_hitPoints;
		unsigned int m_energyPoints;
	public:
		ClapTrap( void );
		ClapTrap( const std::string, int, int, int );
		ClapTrap( ClapTrap const & );
		~ClapTrap( void );
		ClapTrap& operator = (ClapTrap const &);
		void attack( std::string const &);
		void takeDamage( unsigned int);
		void beRepaired( unsigned int);
		std::string getName( void ) const;
		int getAttackDamage( void ) const;
		int getHitPoints( void ) const;
		int getEnergyPoints( void ) const;
};

#endif
