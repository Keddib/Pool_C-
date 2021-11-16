#include "Base.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>


int main()
{

	Base *pb = generate();
	Base &rb = *pb;
	identify(pb);
	identify(rb);
	delete pb;
}
