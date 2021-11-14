#include "Base.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>


Base * generate(void);
void identify(Base* p);
void identify(Base &p);


int main()
{

	Base *pb = generate();
	Base &rb = *pb;
	identify(pb);
	identify(rb);
	delete pb;
}
