/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 13:07:25 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/06 11:18:09 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap a;
	a.whoAmI();

	DiamondTrap b("Johnny");
	a.set_name("Amiguel");
	DiamondTrap c(a);
	std::cout << "\n\n\n";
	a.attack("Bruh");
	a.guardGate();
	a.highFivesGuys();
	b.whoAmI();
	b.attack("Berry");
	b.highFivesGuys();
	c.whoAmI();
	c.set_name("Bruh");
	c.whoAmI();
	c.guardGate();
	std::cout << "\n\n\n";
	return (0);
}
