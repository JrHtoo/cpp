/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 22:02:16 by juhtoo-h          #+#    #+#             */
/*   Updated: 2026/03/02 22:20:50 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char ** argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./btc [file]" << std::endl;
		return(1);
	}
	
	try
	{
		BitcoinExchange exchange;
		exchange.execute(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}