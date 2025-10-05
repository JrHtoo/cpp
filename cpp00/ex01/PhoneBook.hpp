/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 17:02:21 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/04 11:22:02 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

# define MAX_CONTACT 8

class PhoneBook
{
	private:
		int		_num_entries;
	
	public:
		Contact contacts[MAX_CONTACT];
		// Constructors
		PhoneBook();
		~PhoneBook();

		void	addContact(std::string first_name, std::string last_name, std::string nick_name,
				std::string phone_number, std::string darkest_secret);
		int		getNumEntries();
};

#endif
