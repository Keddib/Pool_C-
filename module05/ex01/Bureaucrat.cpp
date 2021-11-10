#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name, int grade)
: m_name(name), m_grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat( const Bureaucrat &bure)
{
	*this = bure;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat &bure )
{
	m_grade = bure.m_grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const
{
	return m_name;
}

int Bureaucrat::getGrade() const
{
	return m_grade;
}

void Bureaucrat::incrementGrade()
{
	if (--m_grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	if (++m_grade > 150)
		throw GradeTooLowException();
}

void Bureaucrat::signForm()
{
	// if grade of bure is higher or equal to form grad
	std::cout << "<bureaucrat> signs <form>\n";
	//otherwise
	std::cout << "<bureaucrat> cannot sign <form> because <reason>\n";
}


const char *Bureaucrat::GradeTooHighException::what() const _NOEXCEPT
{
	return "GRADE is too Hight :(";
}

const char *Bureaucrat::GradeTooLowException::what() const _NOEXCEPT
{
	return "GRADE is too Low :(";
}

std::ostream& operator<<( std::ostream &out, const Bureaucrat &b )
{
	out << b.getName() + ", " << "bureaucrat grade " << b.getGrade();
	return out;
}
