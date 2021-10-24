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
	Fixed det(0.0f);
	det =
			(a.get_x() * (b.get_y() - c.get_y())) +
			(b.get_x() * (c.get_y() - a.get_y())) +
			(c.get_x() * (a.get_y() - b.get_y()));
	return (det * Fixed(0.5f));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed bigTriangle = triangleArea(a, b, c);
	Fixed triangle1 = triangleArea(point, a, b);
	Fixed triangle2 = triangleArea(point, b, c);
	Fixed triangle3 = triangleArea(point, a, c);
	//get absolute value // no area is nigative;
	if (bigTriangle.toFloat() < 0)
		bigTriangle = bigTriangle * Fixed(-1);
	if (triangle1.toInt() < 0)
		triangle1 = triangle1 * Fixed(-1);
	if (triangle2.toInt() < 0)
		triangle2 = triangle2 * Fixed(-1);
	if (triangle3.toInt() < 0)
		triangle3 = triangle3 * Fixed(-1);
	// check if areas are bigger ;
	if ((triangle1 + triangle2 + triangle3) > bigTriangle)
		return (false);
	//if any point is on the edge return false
	else if (triangle1 == 0 || triangle2 == 0 || triangle3 == 0)
		return (false);
	return (true);
}
