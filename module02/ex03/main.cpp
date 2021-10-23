#include "Point.hpp"
#include <iostream>
#include <string>
#include <sstream>
// ((a.x * (b.y - c.y)) + (b.x * (a.y - c.y))  + (c.x * (a.y - b.y))) / 2;

std::string bool_cast(const bool b)
{
	std::ostringstream ss;
	ss << std::boolalpha << b;
	return ss.str();
}

int main()
{
	// Fixed a(1);
	// Fixed b(2.13f);
	// Fixed c(4.75f);
	// Fixed a1(1.49f);
	// Fixed b1(5);
	// Fixed c1(4.75f);
	// Fixed a2(4.99f);
	// Fixed b2(5);
	// Fixed c2(2.13f);
	// std::cout << a * ( b - c ) << '\n';
	// std::cout << a1 * ( b1 - c1) << '\n';
	// std::cout << a2 * ( b2 - c2) << '\n';
	// std::cout << ((a * ( b - c )) + (a1 * ( b1 - c1)) + (a2 * ( b2 - c2))) / 2 << '\n';

	Point a(1, 5);
	Point b(1.19f, 2.13f);
	Point c(4.19f, 4.75f);
	Point p(2.21f, 4.05f);
	// std::cout << a.get_x() << '\n';
	// std::cout << a.get_y() << '\n';
	// std::cout << b.get_x() << '\n';
	// std::cout << b.get_y() << '\n';
	// std::cout << c.get_x() << '\n';
	// std::cout << c.get_y() << '\n';
	// std::cout << a.get_y() << '\n';
	bool x = bsp(a, b, c, p);
	std::cout << bool_cast(x) << '\n';
	return 0;
}
