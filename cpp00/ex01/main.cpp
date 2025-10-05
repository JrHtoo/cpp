/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 17:00:16 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/04 11:21:36 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string getUserInput(std::string message)
{
	std::string	user_input = "";
	
	while (user_input.length() == 0)
	{
		std::cout << message;
		std::getline(std::cin, user_input);
	}
	return (user_input);
}

void	add_contact(PhoneBook *phoneBook)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string	darkest_secret;
	
	first_name = getUserInput("Enter your first name: ");
	last_name = getUserInput("Enter your last name: ");
	nick_name = getUserInput("Enter your nick name: ");
	phone_number = getUserInput("Enter your phone number: ");
	darkest_secret = getUserInput("Enter your darkest secret: ");
	phoneBook->addContact(first_name, last_name, nick_name, phone_number, darkest_secret);
}

int main (void)
{
	std::string command;
	PhoneBook	phoneBook;

	while (1)
	{
		std::cout << std::endl << "Type ADD to save a new contact, SEARCH to search for a contact or EXIT to exit the program" << std::endl;
		std::cout << "Enter command: ";
		if (!(std::getline(std::cin, command)))
			return (1);
		if (command.compare("ADD") == 0)
			add_contact(&phoneBook);
		else if (command.compare("SEARCH") == 0)
			search_contact(&phoneBook);
		else if (command.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Invalid command!" << std::endl;
	}
	return (0);
}
