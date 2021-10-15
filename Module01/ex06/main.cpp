#include "Karen.hpp"
#include <string>
#include <iostream>

int which_level(std::string level)
{
	std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	uppercase(level);
	for (int i = 0; i < 4; i++)
		if (level == lvl[i])
			return i;
	return -1;
}

void filterKaren(Karen &karen, std::string level)
{
	int num_lvl = which_level(level);
	switch (num_lvl) {
		case 0:
			karen.complain("debug");
			karen.complain("info");
			karen.complain("warning");
			karen.complain("error");
			break;
		case 1:
			karen.complain("info");
			karen.complain("warning");
			karen.complain("error");
			break;
		case 2:
			karen.complain("warning");
			karen.complain("error");
			break;
		case 3:
			karen.complain("error");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}

}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Argument Error\n";
		return (1);
	}
	Karen karen;
	filterKaren(karen, argv[1]);
	return (0);
}
