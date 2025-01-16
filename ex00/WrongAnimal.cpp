/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:25:06 by cesasanc          #+#    #+#             */
/*   Updated: 2025/01/16 17:38:37 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	return (*this);		
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal: AGRWAGRWIGRWAGRWOOO!!!!!!" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}
