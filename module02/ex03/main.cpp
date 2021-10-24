#include "Point.hpp"
#include <iostream>
#include <string>
#include <sstream>


// equasion to get the triangle area
// ((a.x - c.x) * (b.y - c.y)) - ((b.x - c.x) * (a.y - c.y))
//https://www.gamedev.net/forums/topic.asp?topic_id=295943
//https://ncalculators.com/geometry/triangle-area-by-3-points.htm
//Area = 1/2 * [a.x(b.y - c.y) + b.x(c.y - a.y) + c.x(a.y - b.y)]

std::string bool_cast(const bool b)
{
	std::ostringstream ss;
	ss << std::boolalpha << b;
	return ss.str();
}

int main()
{

	Point a(1, 2);
	Point b(4, 3);
	Point c(2, 3);
	Point d(2.39f, 2.79f);
	bool x = bsp(a, b, c, d);
	std::cout << bool_cast(x) << '\n';
	return 0;
}
