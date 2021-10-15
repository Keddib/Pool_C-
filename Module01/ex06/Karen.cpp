#include "Karen.hpp"
#include <iostream>
#include <string>

Karen::Karen(){}

Karen::~Karen(){}

void	Karen::debug() {
	std::cout << "[ DEBUG ]\n"
	"I love to get extra bacon "
	"for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void	Karen::info() {
	std::cout << "[ INFO ]\n"
	"I cannot believe adding extra bacon cost more money. "
	"You don’t put enough! If you did I would not have to ask for it!\n";
}

void	Karen::warning() {

	std::cout << "[ WARNING ]\n"
	"I think I deserve to have some extra bacon for free. I've been "
	"coming here for years an you just started working here last month.\n";
}

void	Karen::error() {
	std::cout << "[ ERROR ]\n"
	"This is unacceptable, I want to speak to the manager now.\n";
}

void	Karen::complain( std::string level )
{
	std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	// horible syntax :D
	void (Karen::*fptr[])(void) =
	{ &Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	uppercase(level);
	for (int i = 0; i < 4; i++)
	{
		if (level == lvl[i])
			(this->*fptr[i])();
	}
}

void	uppercase(std::string &cmd)
{
		std::string::size_type size;
		std::string::size_type i;
		size = cmd.size();
		for (i = 0; i < size; i++)
			cmd[i] = toupper(cmd[i]);
}
