#include <string>
#include <iostream>
#include <iomanip>      // std::setprecision


int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Accept only one argument\n";
		return (1);
	}

	std::string s_num(argv[1]);
	int iNumber = std::stoi(s_num);
	char cNumber = static_cast<char>(iNumber);
	float fNumber = std::stof(s_num);
	double dNumber = std::stod(s_num);


	if (std::isprint(cNumber))
		std::cout << "char : " << cNumber << '\n';
	else
		std::cout << "char : Non displayable\n";

	std::cout << "int : " << iNumber << '\n';
	std::cout << std::setprecision(1) << std::fixed << "float : " << fNumber << '\n';
	std::cout << "double : " << dNumber << '\n';
	
	return 0;
}
