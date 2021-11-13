#include "Span.hpp"
#include <iostream>

int main()
{
	Span a(10);
	a.addNumber(10);
	a.addNumber(9);
	a.addNumber(12);
	a.addNumber(111);
	a.addNumber(-2);
	a.addNumber(77);
	a.addNumber(102);

	std::cout << "longest = " << a.longestSpan() << '\n';
	std::cout << "shortest = " << a.shortestSpan() << '\n';
	return 0;
}
