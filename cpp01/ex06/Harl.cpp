/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 10:58:47 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/04 11:26:19 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!"
		<< std::endl;
}

void	Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
		<< std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years, whereas you started working here just last month."
		<< std::endl;
}

void	Harl::_error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int	i;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	i = 0;
	while(i < 4)
	{
		if (level == levels[i])
			break ;
		i++;
	}
	switch (i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			Harl::_debug();
			std::cout << std::endl << "[ INFO ]" << std::endl;
			Harl::_info();
			std::cout << std::endl << "[ WARNING ]" << std::endl;
			Harl::_warning();
			std::cout << std::endl << "[ ERROR ]" << std::endl;
			Harl::_error();
			std::cout << std::endl;
			break;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			Harl::_info();
			std::cout << std::endl << "[ WARNING ]" << std::endl;
			Harl::_warning();
			std::cout << std::endl << "[ ERROR ]" << std::endl;
			Harl::_error();
			std::cout << std::endl;
			break;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			Harl::_warning();
			std::cout << std::endl << "[ ERROR ]" << std::endl;
			Harl::_error();
			std::cout << std::endl;
			break;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			Harl::_error();
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
	}
}
