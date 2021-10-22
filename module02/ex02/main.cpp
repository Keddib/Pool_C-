#include "Fixed.hpp"
#include <iostream>

#include <iostream>
#include <string>
#include <sstream>

std::string bool_cast(const bool b)
{
	std::ostringstream ss;
	ss << std::boolalpha << b;
	return ss.str();
}

int main()
{
	Fixed a(195);
	Fixed b(95);
	Fixed x(12.21f);
	Fixed y(1.023f);

	//overload operators tests
	std::cout << bool_cast(a == b) << "\n";
	std::cout << bool_cast(a != b) << "\n";
	std::cout << bool_cast(a > b) << "\n";
	std::cout << bool_cast(a < b) << "\n";
	std::cout << bool_cast(a <= b) << "\n";
	std::cout << bool_cast(x > y) << "\n";
	std::cout << bool_cast(x <= y) << "\n";
	std::cout << bool_cast(x == y) << "\n";
	std::cout << bool_cast(x != y) << "\n";

	// arithmetic operations tests;
	//int
	std::cout << "built-in + " << 195 + 95 << "\n";
	std::cout << "overload + " << a + b << "\n";
	std::cout << "built-in - " << 195 - 95 << "\n";
	std::cout << "overload - " << a - b << "\n";
	std::cout << "built-in * " << 195 * 95 << "\n";
	std::cout << "overload * " << a * b << "\n";
	std::cout << "built-in / " << 195 / 95 << "\n";
	std::cout << "overload / " << a / b << "\n";
	// float
	std::cout << "built-in + " << 12.21f + 1.023f << "\n";
	std::cout << "overload + " << x + y << "\n";
	std::cout << "built-in - " << 12.21f - 1.023f << "\n";
	std::cout << "overload - " << x - y << "\n";
	std::cout << "built-in * " << 12.21f * 1.023f<< "\n";
	std::cout << "overload * " << x * y << "\n";
	std::cout << "built-in / " << 12.21f / 1.023f << "\n";
	std::cout << "overload / " << x / y << "\n";

	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
