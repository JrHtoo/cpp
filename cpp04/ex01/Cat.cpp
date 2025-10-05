/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 19:25:49 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/10/04 20:26:43 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called\n";
	_type = "Cat";
	_own_brain = new Brain();
}

Cat::Cat (std::string type) : Animal(type)
{
	std::cout << "Cat constructor called\n";
	_type = type;
	_own_brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy constructor called\n";
	_own_brain = new Brain(*(other._own_brain));
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment constructor called\n";
	_type = other._type;
	delete _own_brain;
	_own_brain = new Brain(*(other._own_brain));
	return (*this);
}

Cat::~Cat()
{
	delete _own_brain;
	std::cout << "Cat deconstructor called\n";
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow Meow\n";
}

std::string Cat::getIdea(int idea_nr) const
{
	if (idea_nr >= 0 && idea_nr < 100)
		return (_own_brain->ideas[idea_nr]);
	else
		return ("Cat brain just have 100 ideas");
}

void Cat::setIdea(int idea_nr, std::string new_idea)
{
	if (idea_nr >= 0 && idea_nr < 100)
		_own_brain->ideas[idea_nr] = new_idea;
	else
		std::cout << "Cat brain can just save 100 ideas";
}
