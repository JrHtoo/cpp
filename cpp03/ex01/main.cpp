/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 13:07:25 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/06 10:59:25 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap golem("Golem");
	golem.guardGate();
	golem.attack("The intruder");
	golem.takeDamage(10);

	ScavTrap wizard(golem);
	wizard.beRepaired(5);
	wizard.beRepaired(1);
	wizard.takeDamage(100);
	wizard.takeDamage(100);
	wizard.attack("Perry");
	std::cout << "\nFights are over..." << std::endl;
}
