#include "Karen.hpp"
#include <string>
#include <iostream>

int main()
{
	Karen one;
	one.complain("debug");

	Karen *two = &one;
	two->complain("info");

	void (Karen::*ptrf)(std::string);
	ptrf = &Karen::complain;

	(one.*ptrf)("error");
	(two->*ptrf)("warning");

	return (0);
}
