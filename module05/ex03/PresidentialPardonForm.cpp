#include "PresidentialPardonForm.hpp"

#include "Bureaucrat.hpp"
#include <string>

PresidentialPardonForm::PresidentialPardonForm( const std::string target )
: Form("PresidentialPardonForm", 72, 45),  m_target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & Sbc )
: Form(Sbc), m_target(Sbc.m_target) {}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm &Sbc )
{
	m_target = Sbc.m_target;
	return *this;
}

void PresidentialPardonForm::excute( Bureaucrat const &bure ) const
{
	isEligible(bure); // if not exception will be thrown;
	std::cout << m_target + " has been pardoned by Zafod Beeblebrox.\n";
}
