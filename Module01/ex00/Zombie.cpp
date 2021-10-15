#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie()
{
	_name = "NOT NAMED";
	std::cout << "default constructor excuted\n";
	
}

Zombie::Zombie(std::string s)
{
	_name = s;
	std::cout << "constructor with string param excuted\n";
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
