/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 17:05:46 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/06 09:36:57 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <string>
# include <ctime>

class Contact
{
	private:
		std::string	_firstName;
		std::string _lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
		time_t		_created;

		public:
			Contact();
			~Contact();
			Contact(std::string first_name, std::string last_name, std::string nick_name,
				std::string phone_number, std::string darkest_secret);
			
			std::string get_first_name() const;
			std::string get_last_name() const;
			std::string get_nick_name() const;
			std::string get_phone_number() const;
			std::string get_darkest_secret() const;
			time_t		get_created() const;
};
#endif
