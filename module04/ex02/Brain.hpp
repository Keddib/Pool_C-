#ifndef BRAIN_784_HPP
#define BRAIN_784_HPP

#include <string>

class Brain
{
	private:
		std::string m_ideas[100];
	public:
		Brain( void );
		~Brain( void );
		Brain( const Brain & );
		Brain& operator= ( const Brain & );
		std::string getIdea( int index );
};

#endif
