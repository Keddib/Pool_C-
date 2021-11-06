#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *m_MA[4];
		int m_maPlace;
		void deepCopy(MateriaSource const &m);
	public:
		MateriaSource( void );
		~MateriaSource( void );
		MateriaSource( AMateria const & );
		MateriaSource& operator = ( AMateria const &  );
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};
