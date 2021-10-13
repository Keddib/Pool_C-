#include "Zombie.hpp"
#include <string>

Zombie* zombieHorde( int N, std::string name)
{
	Zombie *ZHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		char c = 48 + i;
		ZHorde[i] = Zombie(name + c);
	}
	return ZHorde;
}
