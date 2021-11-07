#include <iostream>

class Point
{
private:
	int m_x;
	int m_y;
	int m_z;

public:
	Point(int x, int y, int z)
		: m_x(x), m_y(y), m_z(z)
	{

	}

	friend std::ostream& operator<<(std::ostream& out, const Point& p)
	{
		return out << "Point(" << p.m_x << ", " << p.m_y << ", " << p.m_z << ')';
	}
};


class Shape
{
	public:
		virtual ~Shape() {}
		virtual std::ostream& print( std::ostream & ) = 0;
};

std::ostream& opeartor<<(std::ostream &out ,  Shape &shape )
{
	return shape.print(out);
}

class Circle: public Shape
{
	private:
		Point x;
		int raduis;
	public:
		Circle(const Point &p, int r):x(p), raduis(r) {}
		std::ostream& print( std::ostream &out)
		{
			out << x << raduis;
			return out;
		}
};

int main()
{
    Circle c( Point( 1, 2, 3 ), 7 );
   // std::cout << c << '\n';

    return 0;
}



/*
int main()
{
    std::cout << "bool:\t\t" << sizeof(bool) << " bytes\n";
    std::cout << "char:\t\t" << sizeof(char) << " bytes\n";
    std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes\n";
    std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes\n";
    std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes\n";
    std::cout << "short:\t\t" << sizeof(short) << " bytes\n";
    std::cout << "int:\t\t" << sizeof(int) << " bytes\n";
    std::cout << "long:\t\t" << sizeof(long) << " bytes\n";
    std::cout << "long long:\t" << sizeof(long long) << " bytes\n";
    std::cout << "float:\t\t" << sizeof(float) << " bytes\n";
    std::cout << "double:\t\t" << sizeof(double) << " bytes\n";
    std::cout << "long double:\t" << sizeof(long double) << " bytes\n";

    return 0;
}

*/
