#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat(void): WrongAnimal("")
{
	std::cout << "WrongCat default constructor called\n";
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other)
{
	std::cout << "WrongCat Copy constructor called\n";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor called\n";
}

WrongCat& WrongCat::operator = (const WrongCat &other)
{
	WrongAnimal::operator=(other);
	std::cout << "WrongCat Copy Assignment Called\n";
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow\n";
}
