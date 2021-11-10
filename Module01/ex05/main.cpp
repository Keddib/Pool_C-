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


	(void ) (*f[4]) () = { f1, f2, }
	return (0);
}
