#include <iostream>

int main()
{
	int i = 0;
	int &b = 100;
	int c = b;
	c = 10;
	std::cout << c << '\n';
	return (0);
}
