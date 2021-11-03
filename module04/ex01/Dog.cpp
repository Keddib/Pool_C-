#include "Dog.hpp"

#include <iostream>

Dog::Dog(void): Animal(), m_pBrain( new Brain() )
{
	m_type = "Dog";
	std::cout << "Dog default constructor called\n";
}

Dog::~Dog(void)
{
	delete m_pBrain;
	std::cout << "Dog Destructor called\n";
}

Dog::Dog(const Dog &other): Animal(other), m_pBrain(NULL)
{
	std::cout << "Dog Copy constructor called\n";
	deepCopy(other);
}


Dog& Dog::operator = (const Dog &other)
{
	std::cout << "Dog Copy Assignment Called\n";
	Animal::operator=(other);
	deepCopy(other);
	return *this;
}
void Dog::deepCopy(const Dog &other)
{
	if (this == &other) // self-assignment check
		return;
	if (m_pBrain != NULL)
		delete m_pBrain;
	m_pBrain = new Brain(*(other.m_pBrain));
}

void Dog::makeSound() const
{
	std::cout << "Hoew\n";
}
