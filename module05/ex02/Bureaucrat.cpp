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

void Bureaucrat::signForm( Form &form)
{
	// if grade of bure is higher or equal to form grad // bure will signe the form
	//otherwise bure can't sign the form;
	if (m_grade <= form.getGradeToSigne())
	{
		std::cout << m_name + " signs " + form.getName() + " \n";
		form.beSigned(*this);
		return ;
	}
	std::cout << m_name + " cannot sign " + form.getName() + " because "
	" Grade is low \n";
}


void Bureaucrat::executeForm(Form const & form)
{
	if (form.isSigned() &&  m_grade <= form.getGradeToSigne())
	{
		form.excute(*this);
		std::cout << m_name + " excute " + form.getName() + " \n";
		return;
	}
	std::cout << m_name + " cannot excute " + form.getName() + " because "
	" Grade is low \n";

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
