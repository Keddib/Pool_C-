#include "RobotomyRequestForm.hpp"

#include "Bureaucrat.hpp"
#include <string>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm( const std::string target )
: Form("RobotomyRequestForm", 25, 5),  m_target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & Sbc )
: Form(Sbc), m_target(Sbc.m_target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm &Sbc )
{
	m_target = Sbc.m_target;
	return *this;
}

void RobotomyRequestForm::excute( Bureaucrat const &bure ) const
{
	isEligible(bure); // if not exception will be thrown;

	srand(time(0));
	if (rand() % 2 == 0)
		std::cout << m_target + "as been robotomized successfully\n";
	else
		std::cout << m_target + "failed\n";
}
