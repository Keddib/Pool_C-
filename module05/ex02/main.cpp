#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <exception>

int main()
{

	std::cout << " ====== ShrubberyCreationForm =====\n";
	try
	{
		ShrubberyCreationForm shur("Home");
		std::cout << shur << '\n';
		Bureaucrat bure1("M9ADEM", 110);
		std::cout << bure1 << '\n';
		bure1.signForm(shur);
		std::cout << shur << '\n';
		shur.excute(bure1);
	}
	catch( const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		ShrubberyCreationForm shur("Home");
		std::cout << shur << '\n';
		Bureaucrat bure1("M9ADEM", 150);
		std::cout << bure1 << '\n';
		bure1.signForm(shur);
		std::cout << shur << '\n';
		shur.excute(bure1);
	}
	catch( const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	std::cout << " ====== PresidentialPardonForm =====\n";
	try
	{
		PresidentialPardonForm pres("WOLF");
		std::cout << pres << '\n';
		Bureaucrat bure1("M9ADEM", 40);
		std::cout << bure1 << '\n';
		bure1.signForm(pres);
		std::cout << pres << '\n';
		pres.excute(bure1);
	}

	catch( const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		PresidentialPardonForm pres("WOLF");
		std::cout << pres << '\n';
		Bureaucrat bure1("M9ADEM", 90);
		std::cout << bure1 << '\n';
		bure1.signForm(pres);
		std::cout << pres << '\n';
		pres.excute(bure1);
	}

	catch( const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	std::cout << " ====== RobotomyRequestForm =====\n";
	try
	{
		RobotomyRequestForm robo("PEP");
		std::cout << robo << '\n';
		Bureaucrat bure1("M9ADEM", 4);
		std::cout << bure1 << '\n';
		bure1.signForm(robo);
		std::cout << robo << '\n';
		robo.excute(bure1);
	}
	catch( const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		RobotomyRequestForm robo("PEP");
		std::cout << robo << '\n';
		Bureaucrat bure1("M9ADEM", 9);
		std::cout << bure1 << '\n';
		bure1.signForm(robo);
		std::cout << robo << '\n';
		robo.excute(bure1);
	}
	catch( const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	return (0);
}
