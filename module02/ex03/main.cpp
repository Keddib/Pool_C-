#include "Point.hpp"
#include <iostream>
#include <string>
#include <sstream>


// equasion to get the triangle area
// ((a.x - c.x) * (b.y - c.y)) - ((b.x - c.x) * (a.y - c.y))

std::string bool_cast(const bool b)
{
	std::ostringstream ss;
	ss << std::boolalpha << b;
	return ss.str();
}

int main()
{

	Point a(1, 1);
	Point b(4, 3);
	Point c(1, 3);
	Point d(0.85f, 1.87f);
	bool x = bsp(a, b, c, d);
	std::cout << bool_cast(x) << '\n';
	return 0;
}
