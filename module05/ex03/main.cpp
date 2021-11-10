#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include <exception>

int main()
{



	std::cout << " ====== ShrubberyCreationForm =====\n";
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Home");
		std::cout << *rrf << '\n';
		Bureaucrat bure1("M9ADEM", 110);
		std::cout << bure1 << '\n';
		bure1.signForm(*rrf);
		std::cout << *rrf << '\n';
		rrf->excute(bure1);
	}
	catch( const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Home");
		std::cout << *rrf << '\n';
		Bureaucrat bure1("M9ADEM", 150);
		std::cout << bure1 << '\n';
		bure1.signForm(*rrf);
		std::cout << *rrf << '\n';
		rrf->excute(bure1);
	}
	catch( const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	std::cout << " ====== RobotomyRequestForm =====\n";
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "POP");
		std::cout << *rrf << '\n';
		Bureaucrat bure1("M9ADEM", 40);
		std::cout << bure1 << '\n';
		bure1.signForm(*rrf);
		std::cout << *rrf << '\n';
		rrf->excute(bure1);
	}
	catch( const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "POP");
		std::cout << *rrf << '\n';
		Bureaucrat bure1("M9ADEM", 90);
		std::cout << bure1 << '\n';
		bure1.signForm(*rrf);
		std::cout << *rrf << '\n';
		rrf->excute(bure1);
	}
	catch( const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}


	std::cout << " ====== PresidentialPardonForm =====\n";
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy reque", "WOLF");
		std::cout << *rrf << '\n';
		Bureaucrat bure1("M9ADEM", 4);
		std::cout << bure1 << '\n';
		bure1.signForm(*rrf);
		std::cout << *rrf << '\n';
		rrf->excute(bure1);
	}

	catch( const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy reque", "WOLF");
		std::cout << *rrf << '\n';
		Bureaucrat bure1("M9ADEM", 9);
		std::cout << bure1 << '\n';
		bure1.signForm(*rrf);
		std::cout << *rrf << '\n';
		rrf->excute(bure1);
	}
	catch( const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	return (0);
}
