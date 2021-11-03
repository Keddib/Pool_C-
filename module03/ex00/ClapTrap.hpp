#ifndef CLAPTRAP_090_HPP
#define CLAPTRAP_090_HPP

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
		ClapTrap( std::string );
		ClapTrap( ClapTrap const & );
		~ClapTrap( void );
		ClapTrap& operator = (const ClapTrap &);
		void attack( const std::string&);
		void takeDamage( unsigned int);
		void beRepaired( unsigned int);
		void getStatus( void );
};

#endif
