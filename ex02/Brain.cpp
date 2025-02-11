/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:21:51 by cesasanc          #+#    #+#             */
/*   Updated: 2025/02/11 14:56:18 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* Constructor */
Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

/* Copy constructor */
Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "Brain copy constructor called" << std::endl;
}

/* Destructor */
Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

/* Assignation operator */
Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	std::cout << "Brain assignation operator called" << std::endl;
	return (*this);
}

/* Member function to set the idea */
void Brain::setIdea(int index, const std::string &idea)
{
	this->ideas[index] = idea;
}

/* Member function to get the idea */
std::string Brain::getIdea(int index) const
{
	return (this->ideas[index]);
}
