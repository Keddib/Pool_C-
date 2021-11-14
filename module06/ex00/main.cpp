#include <string>
#include <iostream>
#include <iomanip>      // std::setprecision

void convertToChar(const std::string &);
void convertToInt(const std::string &);
void convertToFloat(const std::string &);
void convertToDouble(const std::string &);

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Accept only one argument\n";
		return (1);
	}
	std::string sNum(argv[1]);
	convertToChar(sNum);
	convertToInt(sNum);
	convertToFloat(sNum);
	convertToDouble(sNum);
	return 0;
}
