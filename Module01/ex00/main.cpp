#include "Zombie.hpp"
#include <iostream>
#include <string>

int main()
{
	Zombie z;
	Zombie l("ertgyhuio");

	z.announce();
	l.announce();

	randomChump("AAAAAAA");
	Zombie *u = newZombie("bbbbb");
	u->announce();
	delete u;
}
