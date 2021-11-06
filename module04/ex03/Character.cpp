#include "Character.hpp"
#include <iostream>

Character::Character( void )
:m_name("Character"), m_AM(), m_emtyPlace(0) {}

Character::Character( std::string const &name )
: m_name(name), m_AM(), m_emtyPlace(0) {}

Character::~Character( void )
{
	for (int i = 0; i < 4; i++)
	{
		if (m_AM[i])
		{
			delete m_AM[i];
			m_AM[i] = NULL;
		}
	}
}

Character::Character( Character const &other )
{
	*this =  other;
}

Character& Character::operator = (Character const &other)
{
	if (this == &other)
		return *this;
	deepCopy(other);
	return *this;
}

std::string const & Character::getName() const
{
	return m_name;
}

void Character::equip(AMateria* m)
{
	if (m_emtyPlace < 4)
	{
		m_AM[m_emtyPlace] = m->clone();
		m_emtyPlace++;
	}
}

void Character::unequip(int index)
{
	if (index >= 0 && index < 4)
		if (m_AM[index])
			m_AM[index] = NULL;
}

void Character::use(int index, ICharacter &target)
{
	if (index >= 0 && index < 4)
		if (m_AM[index])
			m_AM[index]->use(target);
}

void Character::deepCopy(Character const &other)
{
	m_name = other.m_name;
	m_emtyPlace = other.m_emtyPlace;
	for (int i = 0; i < 4; i++)
	{
		if (m_AM[i])
		{
			delete m_AM[i];
			m_AM[i] = NULL;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (other.m_AM[i])
			m_AM[i] = other.m_AM[i]->clone();
	}
}
