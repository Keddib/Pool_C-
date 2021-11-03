#include "Cat.hpp"

#include <iostream>

Cat::Cat(void): Animal(), m_pBrain( new Brain )
{
	m_type = "Cat";
	std::cout << "Cat default constructor called\n";
}

Cat::~Cat(void)
{
	delete m_pBrain;
	std::cout << "Cat Destructor called\n";
}

Cat::Cat(const Cat &other): Animal(other), m_pBrain(NULL)
{
	std::cout << "Cat Copy constructor called\n";
	deepCopy(other);
}

Cat& Cat::operator = (const Cat &other)
{
	std::cout << "Cat Copy Assignment Called\n";
	Animal::operator=(other);
	deepCopy(other);
	return *this;
}

void Cat::deepCopy(const Cat &other)
{
	if (this == &other) // self-assignment check
		return;
	if (m_pBrain != NULL)
		delete m_pBrain;
	m_pBrain = new Brain(*(other.m_pBrain));
	std::cout << m_pBrain->getIdea(7) << "||\n";
}

void Cat::makeSound() const
{
	std::cout << "Meow\n";
}
