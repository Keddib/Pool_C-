#ifndef POINT_TRG_HPP
#define POINT_TRG_HPP

#include "../ex02/Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;
	public:
		Point ( void );
		~Point ( void );
		Point ( const Point &);
		Point ( const float, const float);
		Point& operator = (const Point&);
		Fixed get_x() const;
		Fixed get_y() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
