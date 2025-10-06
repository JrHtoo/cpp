/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 17:12:01 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/06 09:01:32 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	_firstName = "";
	_lastName = "";
	time(&_created);
}

Contact::~Contact()
{
}

Contact::Contact(std::string first_name, std::string last_name, std::string nick_name,
				std::string phone_number, std::string darkest_secret)
{
	_firstName = first_name;
	_lastName = last_name;
	_nickName = nick_name;
	_phoneNumber = phone_number;
	_darkestSecret = darkest_secret;
	time(&_created);
}

std::string Contact::get_first_name() const
{
	return (_firstName);
}

std::string Contact::get_last_name() const
{
	return (_lastName);
}

std::string Contact::get_nick_name() const
{
	return (_nickName);
}

std::string Contact::get_phone_number() const
{
	return (_phoneNumber);
}

std::string Contact::get_darkest_secret() const
{
	return (_darkestSecret);
}

time_t Contact::get_created() const
{
	return (_created);
}
