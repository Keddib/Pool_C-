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
	det = ((a.get_x() - c.get_x()) * (b.get_y() - c.get_y())) - ((b.get_x() - c.get_x()) * (a.get_y() - c.get_y()));
	return (det / Fixed(2.0f));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	point.get_x();
	Fixed bigTriangle = triangleArea(a, b, c);
	Fixed triangle1 = triangleArea(point, a, b);
	Fixed triangle2 = triangleArea(point, b, c);
	Fixed triangle3 = triangleArea(point, a, c);
	if (triangle1 == 0 || triangle2 == 0 || triangle3 == 0)
		return (false);
	else if ((triangle1 + triangle2 + triangle3) > bigTriangle)
		return (false);
	return (true);
}
