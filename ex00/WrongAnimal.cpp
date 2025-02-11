/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:25:06 by cesasanc          #+#    #+#             */
/*   Updated: 2025/02/11 15:06:14 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* Constructor */
WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

/* Destructor */
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

/* Copy constructor */
WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

/* Assignation operator */
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		type = other.type;
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	return (*this);		
}

/* Member function to make the sound */
void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal: AGRWAGRWIGRWAGRWOOO!!!!!!" << std::endl;
}

/* Member function to get the type */
std::string WrongAnimal::getType() const
{
	return (type);
}
