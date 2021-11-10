#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <exception>

int main()
{
	Form f("formone", 50, 20);
	std::cout << f << '\n';
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

	// try
	// {
	// 	Bureaucrat a1("B1", 20);
	// 	std::cout << a1 << '\n';
	// }
	// catch( const std::exception &e)
	// {
	// 	std::cout << e.what() << '\n';
	// }

	// try
	// {
	// 	Bureaucrat a1("B1", 20);
	// 	std::cout << a1 << '\n';
	// }
	// catch( const std::exception &e)
	// {
	// 	std::cout << e.what() << '\n';
	// }

	return (0);
}
