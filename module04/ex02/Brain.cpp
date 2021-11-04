#include "Brain.hpp"
#include <iostream>

Brain::Brain( void )
{
	std::cout << "Brain default const called\n";
}

Brain::~Brain( void )
{
	std::cout << "Brain Destruct called\n";
}

Brain::Brain( const Brain &other )
{
	std::cout << "Brain Copy Construct called\n";
	*this = other;
}

Brain& Brain::operator =( const Brain &other )
{
	std::cout << "Brain Copy Assignment called\n";
	if (this == &other) // check self assign;
		return *this;
	for (int i = 0; i < 100; i++)
		m_ideas[i] = other.m_ideas[i];
	return *this;
}

std::string Brain::getIdea( int index)
{
	if (index < 100 && index >= 0)
		return m_ideas[index];
	return "";
}
