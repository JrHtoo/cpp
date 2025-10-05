/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:15:32 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/04 11:20:38 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBERABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (argv[i] != NULL)
		{
			while (*argv[i] != '\0')
			{
				if (std::isalpha(*argv[i]))
					std::cout << (char)std::toupper(*argv[i]);
				else
					std::cout << *argv[i];
				argv[i]++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}