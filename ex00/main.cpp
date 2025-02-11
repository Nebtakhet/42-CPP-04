/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:29:42 by cesasanc          #+#    #+#             */
/*   Updated: 2025/02/11 15:08:24 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	std::cout << "Now testing Animal, Dog and Cat\n" << std::endl;
	
    const Animal *meta = new Animal();
    const Animal *i = new Dog();
    const Animal *j = new Cat();

	std::cout << "Animal type: " << meta->getType() << std::endl;
    std::cout << "Animal type: " << i->getType() << std::endl;
    std::cout << "Animal type: " << j->getType() << std::endl;

	meta->makeSound();
    i->makeSound();
    j->makeSound();

	std::cout << std::endl;

    delete meta;
    delete i;
    delete j;

    std::cout << "\nNow testing WrongAnimal and WrongCat\n" << std::endl;

    const WrongAnimal *wrongMeta = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();

    std::cout << "Animal type: " << wrongCat->getType() << std::endl;
	std::cout << "Animal type: " << wrongMeta->getType() << std::endl;
	
    wrongCat->makeSound();
    wrongMeta->makeSound();

    delete wrongMeta;
    delete wrongCat;
	
	return (0);
}
