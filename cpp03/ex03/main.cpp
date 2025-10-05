/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 13:07:25 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/05 13:27:27 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	std::cout << "Constructing........." << std::endl;
	DiamondTrap a;
	DiamondTrap b("Johnny");
	DiamondTrap c(a);

	a.whoAmI();
	a.attack("Bruh");
	b.whoAmI();
	b.attack("Berry");
	c.whoAmI();
	std::cout << "Deconstructing........." << std::endl;
	return (0);
}
