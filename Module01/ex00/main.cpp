#include "Zombie.hpp"
#include <iostream>
int main()
{
	Zombie z;
	z.announce();

	Zombie l("ertgyhuio");
	l.announce();

	randomChump("AAAAAAA");
	
	Zombie *u = newZombie("bbbbb");
	u->announce();
	
	delete u;
	return (0);
}
