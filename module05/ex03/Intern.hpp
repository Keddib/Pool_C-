#ifndef INTERN_777_HPP
#define INTERN_777_HPP

#include <string>
#include "Form.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern( const Intern& );
		Intern& operator=( const Intern& );
		Form*	makeForm(const std::string, const std::string);
};

#endif
