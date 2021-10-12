#include "Contact.hpp"
#include <iostream>

Contact::Contact() {}

Contact::Contact(std::istream &in)
{
	read_fist_name(in);
	read_last_name(in);
	read_nickname(in);
	read_phone_num(in);
	read_dark_secrit(in);
}

bool		Contact::_valid() const
{
	char c(0);
	std::string::size_type sz;
	for (sz = 0; sz != _phone_num.size(); sz++)
	{
		c = _phone_num[sz];
		if (!isdigit(c))
			if (c != '-' && c != '+')
				return false;
	}
	return true;
}

std::istream &Contact::read_fist_name(std::istream &in)
{
	while (!_first_name.size())
	{
		std::cout << "first name : ";
		std::getline(std::cin, _first_name);
	}
	return in;
}
std::istream &Contact::read_last_name(std::istream &in)
{
	while (!_last_name.size())
	{
		std::cout << "last name : ";
		std::getline(std::cin, _last_name);
	}
	return in;
}
std::istream &Contact::read_nickname(std::istream &in)
{
	std::cout << "nickname : ";
	std::getline(std::cin, _nickname);
	return in;
}
std::istream &Contact::read_phone_num(std::istream &in)
{
	while (!_phone_num.size() || !_valid())
	{
		std::cout << "Phone number : ";
		std::getline(std::cin, _phone_num);
	}
	return in;
}
std::istream &Contact::read_dark_secrit(std::istream &in)
{
	std::cout << "Darkest secrit : ";
	std::getline(std::cin, _dark_secrit);
	return in;
}

std::string	Contact::get_info(int i) const
{
	if (i == 0)
		return _first_name;
	else if (i == 1)
		return _last_name;
	else if (i == 2)
		return _nickname;
	else if (i == 3)
		return _phone_num;
	else if (i == 4)
		return _dark_secrit;
	return "";
}
