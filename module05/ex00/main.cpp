#include "Bureaucrat.hpp"
#include <exception>

int main()
{
	try
	{
		Bureaucrat a("B", 1);
		std::cout << a << '\n';
		a.incrementGrade();
	}
	catch( const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		Bureaucrat a1("B1", 20);
		std::cout << a1 << '\n';
	}
	catch( const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		Bureaucrat a2("B2", 150);
		std::cout << a2 << '\n';
		a2.decrementGrade();
	}
	catch( const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		Bureaucrat a3("B3", 10000);
		std::cout << a3 << '\n';
	}
	catch( const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		Bureaucrat a4("B4", -11);
		std::cout << a4 << '\n';
	}
	catch( const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	return (0);
}
