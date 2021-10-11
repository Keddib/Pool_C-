#include "Fony.hpp"
#include <iostream>
#include <iomanip>

Fony::Fony(): _cont_number(0) {}

void	Fony::_delete_old_contact()
{
	for (int i = 0; i != 7; i++)
	{
		std::cout << i << '\n';
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
	for (int i = 0; i != _cont_number; i++)
	{
		std::string pip = "|";
		Contact c = _contacts[i];
		std::cout << std::setw(11);
		std::cout << std::to_string(i) + pip;
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
	char ch(0);
	while (1)
	{
		std::cout << "Index : ";
		if (!(std::cin >> ch))
			return;
		std::cin.ignore(1000, '\n');
		if (ch >= 48 && ch <= 56)
			break ;
		std::cout << "NOT A VALID INDEX" << std::endl;
	}
	ch -= 48;
	if (ch < 0 || ch >= _cont_number)
	{
		std::cout << "No contact with this Index" << std::endl;
		return ;
	}
	Contact c = _contacts[(int)ch];
	std::cout << "First Name : " << c.get_info(0) << std::endl;
	std::cout << "Last Name : "<< c.get_info(1) << std::endl;
	std::cout << "NickName : " << c.get_info(2) << std::endl;
	std::cout << "Phone Number : "<< c.get_info(3) << std::endl;
	std::cout << "Darkest Secret : "<< c.get_info(4) << std::endl;
}
