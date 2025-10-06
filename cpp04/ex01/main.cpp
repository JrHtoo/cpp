/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:52:12 by cgodecke          #+#    #+#             */
/*   Updated: 2025/10/06 11:58:49 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << std::endl;
	{
		Cat cat;
		Cat copy_cat(cat);
		
		std::cout << std::endl;

		std::cout << "This is idea 10 from cat: " << cat.getIdea(10) << std::endl;
		cat.setIdea(10, "This is the new idea to paint the moon");
		std::cout << "This is the new idea 10 from cat: " << cat.getIdea(10) << std::endl;
		std::cout << "This is idea 10 from copy_cat: " << copy_cat.getIdea(10) << std::endl;

		std::cout << std::endl;
	}

	{
		Dog dog;
		Dog copy_dog(dog);
		
		std::cout << std::endl;

		std::cout << "This is idea 10 from dog: " << dog.getIdea(10) << std::endl;
		dog.setIdea(10, "Go fight with other");
		std::cout << "This is the new idea 10 from dog: " << dog.getIdea(10) << std::endl;
		std::cout << "This is idea 10 from copy_dog: " << copy_dog.getIdea(10) << std::endl;

		std::cout << std::endl;
	}

	{
		// const int number = 100;
		// Animal* animals[number];
    	// for (int k = 0 ; k < number ; k++) {
        // 	if (k % 2 == 0) 
		// 	{
        //     	animals[k] = new Cat();
		// 		std::cout << "Animal " << k << " , Cat " << (k / 2) << std::endl;
        // 	} 
		// 	else {
        //     animals[k] = new Dog();
		// 	std::cout << "Animal " << k << " , Dog " << (k / 2) << std::endl;
        // 	}
    	// }
    
    	// for (int l = 0; l < number ; l++) {
        // 	delete animals[l];
    	// }
	}
	
	std::cout << std::endl;
	return 0;
}
