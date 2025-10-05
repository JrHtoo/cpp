/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 18:14:10 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/04 11:21:56 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	search_oldest_entry(Contact contacts[MAX_CONTACT])
{
	int	oldest;

	oldest = 0;
	for (int i = 0; i < MAX_CONTACT; i++)
	{
		if(contacts[i].get_created() < contacts[oldest].get_created())
			oldest = i;
	}
	return (oldest);
}

PhoneBook::PhoneBook()
{
	_num_entries = 0;
}

PhoneBook::~PhoneBook()
{
	
}

void	PhoneBook::addContact(std::string first_name, std::string last_name, std::string nick_name,
				std::string phone_number, std::string darkest_secret)
{
	if (_num_entries < MAX_CONTACT)
	{
		contacts[_num_entries] = Contact(first_name, last_name, nick_name, phone_number, darkest_secret);
		_num_entries++;
	}
	else
		contacts[search_oldest_entry(contacts)] = Contact(first_name, last_name, nick_name, phone_number, darkest_secret);
}
int	PhoneBook::getNumEntries()
{
	return (this->_num_entries);
}
