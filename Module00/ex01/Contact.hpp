#ifndef CONTACT_7147_HPP
#define CONTACT_7147_HPP

#include <string>
#include <iostream>

class Contact
{
	private:
		std::string _info[5];
		bool		_valid(const std::string &, int) const;
	public:
		Contact();
		Contact(std::istream &);
		std::istream &read_info(std::istream &);
		std::string  get_info(int) const;
};

#endif
