#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <iostream>
int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete i;
	delete meta;
	delete j;
	std::cout << std::endl;
	std::cout << "Wrong Example\n";
	std::cout << std::endl;
	// wrong example
	const WrongAnimal* WrongMeta = new WrongAnimal();
	const WrongAnimal* Wrongi = new WrongCat();
	std::cout << Wrongi->getType() << " " << std::endl;
	Wrongi->makeSound(); //will output the cat sound!
	WrongMeta->makeSound();
	delete Wrongi;
	delete WrongMeta;

	return (0);
}
