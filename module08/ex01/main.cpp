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
	std::vector<int> vecT(10, 5);
	for (std::vector<int>::iterator i = vecT.begin(); i != vecT.end(); i++)
		std::cout << *i << " | ";
	std::cout << std::endl;
	Span x(20);
	x.addNumber(vecT.begin(), vecT.end());

	return 0;
}
