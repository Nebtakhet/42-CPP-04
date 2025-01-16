/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:29:42 by cesasanc          #+#    #+#             */
/*   Updated: 2025/01/16 17:42:28 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    std::cout << "\nNow testing WrongAnimal and WrongCat\n";

    const WrongAnimal *wrongMeta = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();

    std::cout << wrongCat->getType() << " " << std::endl;
    wrongCat->makeSound();
    wrongMeta->makeSound();

    delete wrongMeta;
    delete wrongCat;
	
	return (0);
}
