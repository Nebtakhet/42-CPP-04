/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:27:53 by cesasanc          #+#    #+#             */
/*   Updated: 2025/02/11 15:06:37 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/* Constructor */
WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

/* Destructor */
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

/* Copy constructor */
WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	*this = other;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

/* Assignation operator */
WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		type = other.type;
	std::cout << "WrongCat assignation operator called" << std::endl;
	return (*this);		
}

/* Member function to make the sound */
void WrongCat::makeSound() const
{
	std::cout << "WrongCat: Guau! Guau! Guau!!" << std::endl;
}
