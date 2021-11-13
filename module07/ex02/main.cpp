#include "Array.hpp"
#include <iostream>


int main()
{
	Array<int> a(10);
	Array<std::string> my_strings(10);
	Array<int>::t_size i = 0;
	Array<int> x(a);
	while (i < 10)
	{
		std::cout << x[i] << '\n';
		i++;
	}
	x = a;
	try
	{
		x[11];

	}
	catch(std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
}
