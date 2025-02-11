/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:07:41 by cesasanc          #+#    #+#             */
/*   Updated: 2025/02/11 15:08:52 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Constructor */
Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

/* Destructor */
Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

/* Copy constructor */
Cat::Cat(const Cat &other) : Animal(other)
{
	*this = other;
	std::cout << "Cat copy constructor called" << std::endl;
}

/* Assignation operator */
Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "Cat assignation operator called" << std::endl;
	return (*this);		
}

/* Member function to make the sound */
void Cat::makeSound() const
{
	std::cout << "Cat: Miau! Miau! Miau!" << std::endl;
}
