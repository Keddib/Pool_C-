#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie()
{
	_name = "NOT NAMED";
}

Zombie::Zombie(std::string s)
{
	_name = s;
}

Zombie::~Zombie()
{
	std::cout << "destructor excuted\n";
}

void	Zombie::announce() const
{
	std::cout << _name;
	std::cout << " BraiiiiiiinnnzzzZ...\n";
}
