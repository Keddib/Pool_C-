#include "Fony.hpp"
#include <iostream>
#include <iomanip>

Fony::Fony(): _cont_number(0) {}

void	Fony::_delete_old_contact()
{
	for (int i = 0; i != 7; i++)
	{
		_contacts[i] = _contacts[i + 1];
	}
}

void	Fony::add_contact()
{
	if (_cont_number == 8)
	{
		_delete_old_contact();
		_contacts[_cont_number - 1] = Contact(std::cin);
		return ;
	}
	_contacts[_cont_number] = Contact(std::cin);
	_cont_number++;
}


bool	Fony::search() const
{
	int valid(0);
	std::cout << "\033[1;32m     INDEX|    F.NAME|    L.NAME|  NICKNAME|\033[0m \n";
	for (int i = 0; i != _cont_number; i++)
	{
		std::string pip = "|";
		Contact c = _contacts[i];
		std::cout << std::setw(11);
		std::cout << std::to_string(i + 1) + pip;
		for(int i = 0; i != 3; i++)
		{
			std::string s = c.get_info(i);
			if (s.size() >= MAXLEN)
				s = std::string(s.begin(), s.begin() + 9) + '.';
			std::cout << std::setw(11);
			std::cout << s + pip;
		}
		std::cout << std::endl;
		valid = 1;
	}
	if (valid)
		return true;
	return false;
}

void	Fony::display_contact() const
{
	int i;

	i = _which_contact();
	if (i < 1 || i > _cont_number)
	{
		std::cout << "No contact with this Index" << std::endl;
		return ;
	}
	Contact c = _contacts[i - 1];
	std::cout << "First Name : " << c.get_info(0) << std::endl;
	std::cout << "Last Name : "<< c.get_info(1) << std::endl;
	std::cout << "NickName : " << c.get_info(2) << std::endl;
	std::cout << "Phone Number : "<< c.get_info(3) << std::endl;
	std::cout << "Darkest Secret : "<< c.get_info(4) << std::endl;
}

int		Fony::_which_contact() const
{
	int i(0);
	std::string line;
	while (1)
	{
		std::cout << std::endl;
		std::cout << "\033[1;33mIndex : \033[0m ";
		std::getline(std::cin, line);
		if (is_valid(line))
		{
			i = std::stoi(line);
			break ;
		}
		std::cout << "NOT A VALID INDEX" << std::endl;
	}
	std::cout << std::endl;
	return (i);
}

bool	is_valid(const std::string &s)
{
	char c(0);
	std::string::size_type sz;
	for (sz = 0; sz != s.size(); sz++)
	{
		c = s[sz];
		if (!isdigit(c))
			return false;
	}
	return true;
}
