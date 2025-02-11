/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:29:42 by cesasanc          #+#    #+#             */
/*   Updated: 2025/02/11 14:52:19 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	std::cout << "Animal tests:" << std::endl;
	const Animal *i = new Dog();
	const Animal *j = new Cat();
	
	std::cout << std::endl;
	
	std::cout << i->getType() << ": ";
	i->makeSound();

	std::cout << std::endl;
	std::cout << j->getType() << ": ";
	j->makeSound();

	std::cout << std::endl;
	
	delete j;
	delete i;

	return (0);
}
