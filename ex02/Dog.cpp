/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:04:53 by cesasanc          #+#    #+#             */
/*   Updated: 2025/02/26 16:29:53 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Constructor */
Dog::Dog() : brain(new Brain())
{
	type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

/* Destructor */
Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

/* Copy constructor */
Dog::Dog(const Dog &other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "Dog copy constructor called" << std::endl;
}

/* Assignation operator */
Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete brain;
		*brain = *other.brain;
	}
	std::cout << "Dog assignation operator called" << std::endl;
	return (*this);		
}

/* Member function to make the sound */
void Dog::makeSound() const
{
	std::cout << "Guau! Guau! Guau!" << std::endl;
}

/* Member function to get the brain */
Brain *Dog::getBrain() const
{
	return (brain);
}
