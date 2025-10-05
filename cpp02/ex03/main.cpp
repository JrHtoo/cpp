/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 21:54:39 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/04 22:03:05 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point a(0, 0);
	Point b(10, 0);
	Point c(5, 10);
	Point point(-5, -5);

	if (bsp(a, b, c, point))
		std::cout << "The point is inside the triangle\n";
	else
		std::cout << "The point is outside the triangle\n";
	return (0);
}
