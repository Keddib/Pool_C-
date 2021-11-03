#include "Dog.hpp"

#include <iostream>

Dog::Dog(void): Animal()
{
	m_type = "Dog";
	std::cout << "Dog default constructor called\n";
}

Dog::Dog(const Dog &other): Animal(other)
{
	std::cout << "Dog Copy constructor called\n";
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called\n";
}

Dog& Dog::operator = (const Dog &other)
{
	Animal::operator=(other);
	std::cout << "Dog Copy Assignment Called\n";
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Hoew\n";
}
