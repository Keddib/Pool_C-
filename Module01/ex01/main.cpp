#include "Zombie.hpp"
#include <iostream>
#include <string>

int main()
{
	Zombie *z;
	z = zombieHorde(5, "ZOMB");
	for (int i = 0; i < 5; i++)
	{
		z[i].announce();
	}
	delete [] z;
	return 0;
}
