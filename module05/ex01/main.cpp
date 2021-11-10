#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <exception>

int main()
{
	try
	{
		Form form("WATI9A", 50, 20);
		std::cout << form << '\n';
		Bureaucrat bure1("M9ADEM", 2);
		std::cout << bure1 << '\n';
		bure1.signForm(form);
		std::cout << form << '\n';
	}
	catch( const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		Form form("WATI9A", -11, 150);
		std::cout << form << '\n';
		Bureaucrat bure1("M9ADEM", 2);
		std::cout << bure1 << '\n';
		bure1.signForm(form);
		std::cout << form << '\n';
	}
	catch( const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		Form form("WATI9A", 12, 2);
		std::cout << form << '\n';
		Bureaucrat bure1("M9ADEM", 20);
		std::cout << bure1 << '\n';
		bure1.signForm(form);
		std::cout << form << '\n';
	}
	catch( const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	return (0);
}
