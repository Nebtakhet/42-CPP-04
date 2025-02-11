/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:07:41 by cesasanc          #+#    #+#             */
/*   Updated: 2025/02/11 15:01:49 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Constructor */
Cat::Cat() : brain(new Brain())
{
	type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

/* Destructor */
Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

/* Copy constructor */
Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*other.brain))
{
	*this = other;
	std::cout << "Cat copy constructor called" << std::endl;
}

/* Assignation operator */
Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete brain;
		*brain = *other.brain;
	}
	std::cout << "Cat assignation operator called" << std::endl;
	return (*this);		
}

/* Member function to make the sound */
void Cat::makeSound() const
{
	std::cout << "Miau! Miau! Miau!" << std::endl;
}
