/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 00:22:51 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/04 11:26:03 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl harl;

	std::cout << std::endl << "------ DEBUG Level ------" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl << "------ INFO Level ------" << std::endl;;
	harl.complain("INFO");
	std::cout << std::endl << "------ WARNING Level ------" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl << "------ ERROR Level ------" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl << "------ No valid Level ------" << std::endl;
	harl.complain("ALARM");
	return (0);
}
