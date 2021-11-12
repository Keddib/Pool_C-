#include "iter.hpp"
#include <iostream>
#include <vector>


template<typename T>
void printElement(T &element)
{
	std::cout << element << std::endl;
}


int main()
{

	double arrayd[4] = {10.30, 20.40, 30.59, 40.60};
	int arrayi[4] = {10, 20, 30, 40};
	std::string s[4] = {"aaa", "bbbb", "cccc", "fffff"};
	iter<double, int>(arrayd, 4, printElement);
	iter<>(arrayi, 4, printElement);
	iter(s, 4, printElement);
	int * a = new int();
	// std::cout << *a;
}
