#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


Intern::Intern(){}
Intern::~Intern(){}
Intern::Intern( const Intern& ){}
Intern& Intern::operator=( const Intern& ) { return *this; }


int whichIndex(const std::string form)
{
	std::string forms[3] = {
		"shrubbery creation",
		"robotomy reque",
		"presidential pardon"
	};
	for (int i = 0; i < 3; i++)
		if (form == forms[i])
			return i;
	return -1;
}

Form* Intern::makeForm( const std::string form, const std::string target)
{
	Form *forms[3]; = {
			new ShrubberyCreationForm(target),
			new RobotomyRequestForm(target),
			new PresidentialPardonForm(target)
		};

	int index = whichIndex(form);
	for (int i = 0; i < 3; i++)
		if (i != index)
			delete forms[i];
	if (index >= 0)
		return forms[index];
	return NULL;
}
