#ifndef FORM_77_HPP
#define FORM_77_HPP

#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string m_name;
		const int m_gradeToSigne;
		const int m_gradeToExecute;
		bool m_isSigned;
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const _NOEXCEPT;
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const _NOEXCEPT;
		};

	public:
		Form( const std::string , const int , const int );
		Form(const Form &);
		~Form();
		Form& operator=(const Form &);
		std::string getName() const;
		int getGradeToSigne() const;
		int getGradeToExcute() const;
		bool isSigned() const;
		void beSigned( const Bureaucrat & );
};

std::ostream& operator<<( std::ostream &out, const Form &f );

#endif
