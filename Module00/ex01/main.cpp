/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keddib <keddib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 08:01:47 by keddib            #+#    #+#             */
/*   Updated: 2021/10/11 15:11:36 by keddib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fony.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

void	uppercase(std::string &cmd)
{
	std::string::size_type size;
	std::string::size_type i;
	size = cmd.size();
	for (i = 0; i < size; i++)
		cmd[i] = toupper(cmd[i]);
}

int	main()
{
	Fony phonebook;
	std::string cmd;
	while (1)
	{
		std::cout << "FONY: ";
		if (!(std::getline(std::cin, cmd)))
			break ;
		uppercase(cmd);
		if (cmd == "ADD")
			phonebook.add_contact();
		else if (cmd == "SEARCH")
		{
			if (phonebook.search())
				phonebook.display_contact();
		}
		else if (cmd == "EXIT")
			break ;
	}
	return (0);
}
