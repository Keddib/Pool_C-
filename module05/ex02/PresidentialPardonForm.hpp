#ifndef PRESIDENTIALPARDONFORM_77_HPP
#define PRESIDENTIALPARDONFORM_77_HPP

#include "Form.hpp"
#include <string>

class PresidentialPardonForm : public Form
{
	private:
		std::string m_target;
	public:
		PresidentialPardonForm( const std::string );
		~PresidentialPardonForm();
		PresidentialPardonForm( const PresidentialPardonForm& );
		PresidentialPardonForm& operator=( const PresidentialPardonForm& );
		void excute( Bureaucrat const & ) const;
};

#endif
