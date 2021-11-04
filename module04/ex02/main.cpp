#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	// const Animal* meta = new Animal();
	//this won't compile / we can't instantiate an abstract class
	// pure virtual funcs are up to direvied to define
	// meta->makeSound();

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	delete j;
	delete i;
	return (0);
}
