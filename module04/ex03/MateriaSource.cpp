#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ): m_MA(), m_maPlace(0) {}

MateriaSource::~MateriaSource( void )
{
	while (m_maPlace)
	{
		if (m_maPlace == 4)
			m_maPlace--;
		delete m_MA[m_maPlace--];
	}
}

MateriaSource::MateriaSource( AMateria const &other )
{
	*this = other;
}

MateriaSource& MateriaSource::operator = ( AMateria const &other )
{
	deepCopy(other);
	return *this;
}

void MateriaSource::learnMateria(AMateria *ma)
{
	if (m_maPlace < 4)
	{
		m_MA[m_maPlace] = ma->clone();
		m_maPlace++;
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < m_maPlace; i++)
	{
		if (m_MA[i] && m_MA[i]->getType() == type)
			return m_MA[i]->clone();
	}
	return 0;
}

void MateriaSource::deepCopy(MateriaSource const &other)
{
	m_maPlace = other.m_maPlace;
	for (int i = 0; i < 4; i++)
	{
		if (m_MA[i])
		{
			delete m_MA[i];
			m_MA[i] = NULL;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (other.m_MA[i])
			m_MA[i] = other.m_MA[i]->clone();
	}
}
