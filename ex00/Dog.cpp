/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:04:53 by cesasanc          #+#    #+#             */
/*   Updated: 2025/02/11 15:08:45 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Constructor */
Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

/* Destructor */
Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

/* Copy constructor */
Dog::Dog(const Dog &other) : Animal(other)
{
	*this = other;
	std::cout << "Dog copy constructor called" << std::endl;
}

/* Assignation operator */
Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "Dog assignation operator called" << std::endl;
	return (*this);		
}

/* Member function to make the sound */
void Dog::makeSound() const
{
	std::cout << "Dog: Guau! Guau! Guau!" << std::endl;
}
