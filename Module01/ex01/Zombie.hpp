#ifndef ZOMBIE_077_HPP
#define ZOMBIE_077_HPP

#include <string>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie();
		Zombie(std::string);
		~Zombie();
		void	announce() const;
};

Zombie* zombieHorde( int N, std::string name );

#endif
