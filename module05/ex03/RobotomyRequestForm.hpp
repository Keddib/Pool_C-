#ifndef ROBOTOMYREQUESTFORM_77_HPP
#define ROBOTOMYREQUESTFORM_77_HPP

#include "Form.hpp"
#include <string>

class RobotomyRequestForm : public Form
{
	private:
		std::string m_target;
	public:
		RobotomyRequestForm( const std::string );
		~RobotomyRequestForm();
		RobotomyRequestForm( const RobotomyRequestForm& );
		RobotomyRequestForm& operator=( const RobotomyRequestForm& );
		void excute( Bureaucrat const & ) const;
};

#endif
