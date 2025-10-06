/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 11:58:55 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/06 10:28:09 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << a+b << std::endl;
	std::cout << a-b << std::endl;
	std::cout << a*b << std::endl;
	std::cout << b/a << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	
	bool output;
	output = a < b;
	std::cout << "a < b : " << output << std::endl;
	output = a <= b;
	std::cout << "a <= b : " << output << std::endl;
	output = a > b;
	std::cout << "a > b : " << output << std::endl;
	output = a >= b;
	std::cout << "a >= b : " << output << std::endl;
	output = a == b;
	std::cout << "a == b : " << output << std::endl;
	output = a != b;
	std::cout << "a != b : " << output << std::endl;
	
	return 0;
}
