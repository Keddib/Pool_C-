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
	std::cout << "example + " << 195 + 95 << "\n";
	std::cout << "overload + " << a + b << "\n";
	std::cout << "example - " << 195 - 95 << "\n";
	std::cout << "overload - " << a - b << "\n";
	std::cout << "example * " << 195 * 95 << "\n";
	std::cout << "overload * " << a * b << "\n";
	std::cout << "exmple / " << 195 / 95 << "\n";
	std::cout << "overload / " << a / b << "\n";
	// float
	std::cout << "exmple + " << 12.21f + 1.023f << "\n";
	std::cout << "overload + " << x + y << "\n";
	std::cout << "exmple - " << 12.21f - 1.023f << "\n";
	std::cout << "overload - " << x - y << "\n";
	std::cout << "exmple * " << 12.21f * 1.023f << "\n";
	std::cout << "overload * " << x * y << "\n";
	std::cout << "exmple / " << 12.21f / 1.023f << "\n";
	std::cout << "overload / " << x / y << "\n";

	Fixed aa;
	Fixed const bb( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const cc(15.06f);
	std::cout << aa << std::endl;
	std::cout << ++aa << std::endl;
	std::cout << aa << std::endl;
	std::cout << aa++ << std::endl;
	std::cout << aa << std::endl;
	std::cout << bb << std::endl;
	std::cout << Fixed::max( bb, aa ) << std::endl;
	std::cout << Fixed::max( bb, cc ) << std::endl;
	return 0;
}
