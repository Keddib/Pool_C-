#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string name, const int toSigne, const int toExcute)
: m_name(name), m_gradeToSigne(toSigne), m_gradeToExecute(toExcute), m_isSigned(false)
{
	if (m_gradeToSigne > 150 || m_gradeToExecute > 150)
		throw GradeTooLowException();
	if (m_gradeToSigne < 1  || m_gradeToExecute < 1)
		throw GradeTooHighException();
}

Form::Form( const Form &form)
: m_name(form.m_name), m_gradeToSigne(form.m_gradeToSigne), m_gradeToExecute(form.m_gradeToExecute)
{
	m_isSigned = form.m_isSigned;
}

Form& Form::operator=( const Form &form )
{
	m_isSigned = form.m_isSigned;
	return *this;
}

Form::~Form() {}

std::string Form::getName() const
{
	return m_name;
}

int Form::getGradeToSigne() const
{
	return m_gradeToSigne;
}

int Form::getGradeToExcute() const
{
	return m_gradeToExecute;
}

bool Form::isSigned() const
{
	return m_isSigned;
}

const char *Form::GradeTooHighException::what() const _NOEXCEPT
{
	return "GRADE is too Hight :(";
}

const char *Form::GradeTooLowException::what() const _NOEXCEPT
{
	return "GRADE is too Low :(";
}

void Form::beSigned( const Bureaucrat &bure )
{
	// if the bure grade is higher than sign grade the form is signed
	//otherwise throw exception;
	if(bure.getGrade() > m_gradeToSigne)
		throw GradeTooLowException();
	m_isSigned = true;
}

bool Form::isEligible( Bureaucrat const &bure ) const
{
	if (isSigned() && bure.getGrade() <= getGradeToExcute())
		return true;
	else
		throw GradeTooLowException();
}

std::ostream& operator<<( std::ostream &out, const Form &f )
{
	out << f.getName() + ", " << "Grade To Sign " << f.getGradeToSigne() <<
	", Grade To Excute " << f.getGradeToExcute() << '\n' <<
	"Is it signed: " << std::boolalpha << f.isSigned();
	return out;
}
