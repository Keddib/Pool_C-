#include "convert.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Accept one argument only\n";
		return (1);
	}
	std::string sNum(argv[1]);
	convertToChar(sNum);
	convertToInt(sNum);
	convertToFloat(sNum);
	convertToDouble(sNum);
	return 0;
}
