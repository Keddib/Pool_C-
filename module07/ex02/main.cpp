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
}
