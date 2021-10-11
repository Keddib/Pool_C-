#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie z(name);
	z.announce();
}

Zombie* newZombie( std::string name )
{
	return new Zombie(name);
}
