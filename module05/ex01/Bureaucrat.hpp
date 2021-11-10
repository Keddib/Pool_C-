#ifndef BUREAUCRAT_0909_HPP
#define BUREAUCRAT_0909_HPP

#include "Form.hpp"
#include <string>
#include <exception>
#include <iostream>

class Bureaucrat
{
	private:
		std::string const	m_name;
		int					m_grade;

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
		Bureaucrat( std::string, int );
		Bureaucrat( const Bureaucrat& );
		Bureaucrat& operator = ( const Bureaucrat& );
		~Bureaucrat();
		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm();
};

std::ostream& operator<<( std::ostream&, const Bureaucrat& );

#endif
