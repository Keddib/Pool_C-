#include <iostream>

class Point3d
{
	private:
		int _x;
		int _y;
		int _z;

	public:
		void setValues(int x, int y, int z)
		{
			_x = x;
			_y = y;
			_z = z;
		}
		void print(){
			std::cout << "<" << _x << ", " << _y << ", " << _z << ">";
		}
		bool isEqual(const Point3d &other){
			if (_x == other._x && _y == other._y && _z == other._z)
				return true;
			return false;
		}
};


int main()
{
	Point3d point1;
    point1.setValues(1, 2, 3);

    Point3d point2;
    point2.setValues(1, 2, 3);

    if (point1.isEqual(point2))
    {
        std::cout << "point1 and point2 are equal\n";
    }
    else
    {
        std::cout << "point1 and point2 are not equal\n";
    }

    Point3d point3;
    point3.setValues(3, 4, 5);

    if (point1.isEqual(point3))
    {
        std::cout << "point1 and point3 are equal\n";
    }
    else
    {
        std::cout << "point1 and point3 are not equal\n";
    }

    return 0;

    return 0;
}
