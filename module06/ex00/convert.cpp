#include <string>
#include <iostream>
#include <exception>

void convertToChar(const std::string &sNum)
{
	int	num;
	try
	{
		num = std::stoi(sNum);
		if (num < 0 || num > 255)
		{
			std::cout << "char : imposible\n";
			return;
		}
	}
	catch(const std::exception& e)
	{
		std::cout << "char : imposible\n";
		return;
	}
	unsigned char c = (unsigned char)num;
	if (std::isprint(c))
		std::cout << "char : " << c << '\n';
	else
		std::cout << "char : is not printable\n";
}

void convertToInt(const std::string &sNum)
{
	int iNumber;
	try
	{
		iNumber = std::stoi(sNum);
	}
	catch(const std::exception& e)
	{
		std::cout << "int : imposible\n";
		return;
	}
	std::cout << "int : " << iNumber << '\n';
}

void convertToFloat(const std::string &sNum)
{
	float fNumber;
	try
	{
		fNumber = std::stof(sNum);
	}
	catch(const std::exception& e)
	{
		std::cout << "float : nanf\n";
		return;
	}
	if (fNumber != static_cast<int>(fNumber))
		std::cout << "float : " << fNumber << "f\n";
	else
		std::cout << "float : " << fNumber << ".0f\n";

}

void convertToDouble(const std::string &sNum)
{
	double dNumber;
	try
	{
		dNumber = std::stod(sNum);
	}
	catch(const std::exception& e)
	{
		std::cout << "double : nan\n";
		return;
	}
	if (dNumber != static_cast<int>(dNumber))
		std::cout << "double : " << dNumber << '\n';
	else
		std::cout << "double : " << dNumber << ".0\n";


}
