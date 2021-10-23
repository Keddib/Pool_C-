#include "Point.hpp"

Point::Point( void ) {}

Point::~Point( void ) {}

Point::Point( const Point &other ): _x(other._x), _y(other._y) {}

Point::Point( const float x, const float y ): _x(x), _y(y) {}

Fixed Point::get_x() const
{
	return(_x);
}

Fixed Point::get_y() const
{
	return(_y);
}

Fixed triangleArea(Point const a, Point const b, Point const c)
{
	Fixed one = ( a.get_x() * (b.get_y() - c.get_y()) );
	std::cout << "one = " << one << '\n';
	Fixed two = ( b.get_x() * (a.get_y() - c.get_y()) );
	std::cout << "two = " << two << '\n';
	Fixed tre = ( c.get_x() * (a.get_y() - b.get_y()) );
	std::cout << "tre = " << tre << '\n';
	Fixed sum = one + two + tre;
	std::cout << "sum = " << sum << '\n';
	Fixed result = (one + two + tre) / Fixed(2);
	std::cout << "result = " << result << '\n';
	return result;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	point.get_x();
	Fixed bigTriangle = triangleArea(a, b, c);
	std::cout << "big = " << bigTriangle << '\n';
	std::cout << "-----------------\n";
	Fixed triangle1 = triangleArea(a, point, b);
	std::cout << "ft1 = " << triangle1 << '\n';
	std::cout << "-----------------\n";
	Fixed triangle2 = triangleArea(a, point, c);
	std::cout << "ft2 = " << triangle2 << '\n';
	std::cout << "-----------------\n";
	Fixed triangle3 = triangleArea(point, b, c);
	std::cout << "ft3 = " << triangle3 << '\n';
	std::cout << "-----------------\n";
	// if ((triangle1 + triangle2 + triangle3) == bigTriangle)
		return (true);
	return (false);
}
