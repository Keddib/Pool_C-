#include "Cat.hpp"

#include <iostream>

Cat::Cat(void): Animal()
{
	m_type = "Cat";
	std::cout << "Cat default constructor called\n";
}

Cat::Cat(const Cat &other): Animal(other)
{
	std::cout << "Cat Copy constructor called\n";
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called\n";
}

Cat& Cat::operator = (const Cat &other)
{
	Animal::operator=(other);
	std::cout << "Cat Copy Assignment Called\n";
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow\n";
}
