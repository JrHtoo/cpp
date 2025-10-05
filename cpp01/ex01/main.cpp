/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 22:52:42 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/04 11:23:42 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int		N = 3;

	horde = zombieHorde(N, "Horde");
	for (int i = 0; i < N; i++)
	{
		std::cout << "Index " << i << ": ";
		horde[i].announce();
	}
	
	delete[] horde;
	return (0);
}
