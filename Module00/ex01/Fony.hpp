#ifndef FONY_7147_HPP
#define FONY_7147_HPP

#include "Contact.hpp"
#include <string>
#include <iostream>
#define MAXLEN 10

class Fony
{
	private:
		Contact	_contacts[8];
		int		_cont_number;
		void	_delete_old_contact();

	public:
		Fony();
		void	add_contact();
		bool	search() const;
		void	display_contact() const;
		int		num_conts() const { return _cont_number; };
};

#endif
