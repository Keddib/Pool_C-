#include "ShrubberyCreationForm.hpp"

#include "Bureaucrat.hpp"
#include <string>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( const std::string target)
: Form("ShrubberyCreationForm", 145, 137),  m_target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & Sbc)
: Form(Sbc), m_target(Sbc.m_target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm &Sbc )
{
	m_target = Sbc.m_target;
	return *this;
}

void ShrubberyCreationForm::excute( Bureaucrat const &bure ) const
{
	isEligible(bure); // if not exception will be thrown;
	std::ofstream myFile(m_target);
	myFile <<
	"                      ***************                        \n"
	"                     // *********** \\                       \n"
	"                    //  ***********  \\                      \n"
	"                   //  -***********-  \\                     \n"
	"                  //  --***********--  \\                    \n"
	"                 //  ---***********---  \\                   \n"
	"                 || ----***********---- ||                   \n"
	"                 || ----***********---- ||                   \n"
	"                            888                              \n"
	"                            888                              \n"
	"                            888                              \n"
	"                            888                              \n"
	"                            888                              \n";
	myFile.close();
}
