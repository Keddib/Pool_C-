#ifndef SHRUBBERYCREATIONFORM_77_HPP
#define SHRUBBERYCREATIONFORM_77_HPP

#include "Form.hpp"
#include <string>

class ShrubberyCreationForm : public Form
{
	private:
		std::string m_target;
	public:
		ShrubberyCreationForm( const std::string );
		~ShrubberyCreationForm();
		ShrubberyCreationForm( const ShrubberyCreationForm& );
		ShrubberyCreationForm& operator=( const ShrubberyCreationForm& );
		void excute( Bureaucrat const & ) const;
};

#endif
