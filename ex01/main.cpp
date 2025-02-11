/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:29:42 by cesasanc          #+#    #+#             */
/*   Updated: 2025/02/11 14:33:28 by cesasanc         ###   ########.fr       */
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

	std::cout << std::endl;
	std::cout << "Dog and Cat tests: \n" << std::endl;
	Animal *animals[6];
	for (int i = 0; i < 6; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < 6; i++)
	{
		delete animals[i];
	}
	
	std::cout << std::endl;
	std::cout << "Dog tests: \n" << std::endl;
	std::cout << "Original Dog:" << std::endl;
	Dog originalDog;
	originalDog.makeSound();
	originalDog.getBrain()->setIdea(0, "I am a dog");
	std::cout << originalDog.getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl;
	std::cout << "Copy Dog:" << std::endl;
	Dog copyDog(originalDog);
	copyDog.makeSound();
	std::cout << copyDog.getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl;
	std::cout << "Assignation Dog:" << std::endl;
	Dog assignationDog;
	assignationDog = originalDog;
	assignationDog.makeSound();
	std::cout << assignationDog.getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl;
	
	return (0);
}
