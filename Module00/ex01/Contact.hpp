#ifndef CONTACT_7147_HPP
#define CONTACT_7147_HPP

#include <string>
#include <iostream>

class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_num;
		std::string _dark_secrit;
		bool		_valid() const;
	public:
		Contact();
		Contact(std::istream &);
		std::istream &read_fist_name(std::istream &);
		std::istream &read_last_name(std::istream &);
		std::istream &read_nickname(std::istream &);
		std::istream &read_phone_num(std::istream &);
		std::istream &read_dark_secrit(std::istream &);
		std::string  get_info(int) const;
};

#endif
