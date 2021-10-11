#include "Contact.hpp"
#include <iostream>

Contact::Contact(){}

Contact::Contact(std::istream &in)
{
	read_info(in);
}

bool		Contact::_valid(const std::string &s, int i) const
{
	char c(0);
	std::string::size_type sz;
	if (i == 3)
	{
		for (sz = 0; sz != s.size(); sz++)
		{
			c = s[sz];
			if (!isdigit(c))
				if (c != '-' && c != '+')
					return false;
		}
	}
	return true;
}

std::istream& Contact::read_info(std::istream& in)
{
	std::string s[5] = {"first name", "last name", "nickname", "phone number",
						"darkest secret"};
	for (int i = 0; i < 5; i++)
	{
		std::cout << s[i] + " : ";
		std::getline(std::cin, _info[i]);
		if (!_info[i].size() || !_valid(_info[i], i))
			i -= 1;
	}
	return in;
}

std::string  Contact::get_info(int i) const
{
	if (i < 0 && i >= 11)
		return "";
	return _info[i];
}
