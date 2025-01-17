/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:29:42 by cesasanc          #+#    #+#             */
/*   Updated: 2025/01/17 16:48:00 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
    const Animal *i = new Dog();
    const Animal *j = new Cat();

    std::cout << i->getType() << " ";
	i->makeSound();
	std::cout << std::endl;

	std::cout << j->getType() << " ";
	j->makeSound();
	std::cout << std::endl;


    delete j;
    delete i;

	Animal *animals[20];
	for (int i = 0; i < 20; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < 20; i++)
	{
		delete animals[i];
	}

	Dog originalDog;
	originalDog.makeSound();
	originalDog.brain->setIdea(0, "I am a dog");
	std::cout << originalDog.brain->getIdea(0) << std::endl;

	Dog copyDog(originalDog);
	copyDog.makeSound();
	std::cout << copyDog.brain->getIdea(0) << std::endl;

	Dog assignationDog;
	assignationDog = originalDog;
	assignationDog.makeSound();
	std::cout << assignationDog.brain->getIdea(0) << std::endl;
	
	return (0);
}
