/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:56:50 by cesasanc          #+#    #+#             */
/*   Updated: 2025/02/11 15:03:27 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* Constructor */
Animal::Animal() : type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
}

/* Destructor */
Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

/* Copy constructor */
Animal::Animal(const Animal &other)
{
	*this = other;
	std::cout << "Animal copy constructor called" << std::endl;
}

/* Assignation operator */
Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
		type = other.type;
	std::cout << "Animal assignation operator called" << std::endl;
	return (*this);		
}

/* Member function to make the sound */
void Animal::makeSound() const
{
	std::cout << "Animal makes an animal sound" << std::endl;
}

/* Member function to get the type */
std::string Animal::getType() const
{
	return (type);
}
