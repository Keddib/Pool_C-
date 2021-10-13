#include "Zombie.hpp"
#include <iostream>
#include <string>

int main()
{
	Zombie *z;
	z = zombieHorde(15, "ZOMB");
	for (int i = 0; i < 15; i++)
	{
		z[i].announce();
	}
	delete [] z;
	return 0;
}
