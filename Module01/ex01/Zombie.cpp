#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie()
{
	this->_name = "NOT NAMED";
	std::cout << "constructor excuted\n";
}

Zombie::Zombie(std::string s)
{
	this->_name = s;
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
