#include "Base.hpp"

#include <iostream>

Base * generate(void)
{
	srand(time(0));  // Initialize random number generator.
	int randNum = (rand() % 10) + 1;
	if (randNum < 4)
		return new A;
	else if (randNum < 7)
		return new B;
	return new C;
}

void identify(Base* p)
{
	A *pa = dynamic_cast<A *>(p);
	B *pb = dynamic_cast<B *>(p);
	C *pc = dynamic_cast<C *>(p);
	if (pa != 0)
		std::cout << "A\n";
	else if (pb != 0)
		std::cout << "B\n";
	else if (pc != 0)
		std::cout << "C\n";
}

void identify(Base &p)
{
	try {
		A &pa = dynamic_cast<A&>(p);
		std::cout << "A\n";
	}
	catch(const std::exception& e) {}

	try {
		B &pb = dynamic_cast<B&>(p);
		std::cout << "B\n";
	}
	catch(const std::exception& e) {}

	try {
		C &pc = dynamic_cast<C&>(p);
		std::cout << "C\n";
	}
	catch(const std::exception&) {}
}
