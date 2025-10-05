/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_contact.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 18:42:51 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/04 11:22:07 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

static void	print_text(std::string text, bool newline)
{
	if (text.length() > 10)
	{
		text.resize(9);
		text.append(".");
	}
	if (newline)
		std::cout << std::setfill(' ') << std::setw(10) << text << std::endl;
	else
		std::cout << std::setfill(' ') << std::setw(10) << text << "|";
}

static void	print_layout(PhoneBook *phoneBook)
{
	print_text("index", false);
	print_text("first name", false);
	print_text("last name", false);
	print_text("nick name", true);
	for (int i = 0; i < phoneBook->getNumEntries(); i++)
	{
		std::cout << std::setfill(' ') << std::setw(10) << i + 1 << "|";
		print_text(phoneBook->contacts[i].get_first_name(), false);
		print_text(phoneBook->contacts[i].get_last_name(), false);
		print_text(phoneBook->contacts[i].get_nick_name(), true);
	}
}

static void	print_contact(Contact contact)
{
	std::cout << std::endl << "First name     : " << contact.get_first_name() << std::endl;
	std::cout << "Last name      : " << contact.get_last_name() << std::endl;
	std::cout << "Nick name      : " << contact.get_nick_name() << std::endl;
	std::cout << "Phone number   : " << contact.get_phone_number() << std::endl;
	std::cout << "Darkest Secret : " << contact.get_darkest_secret() << std::endl;
}

void	search_contact(PhoneBook *phoneBook)
{
	int	index;

	print_layout(phoneBook);
	std::cout << "Enter index: ";
	if(!(std::cin >> index))
	{
		std::cout << "Invalid index" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	else if (index > 0 && index <= phoneBook->getNumEntries())
	{
		print_contact(phoneBook->contacts[index - 1]);
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	else
	{
		std::cout << "Invalid index" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}
