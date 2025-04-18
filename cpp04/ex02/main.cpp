/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:33:19 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/12 15:43:26 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {

	Animal* animals[10];

	for (int i = 0; i < 6; i++) {
		animals[i] = new Dog();
		animals[i]->setIdea(0);
	}

	for (int i = 6; i < 10; i++) {
		animals[i] = new Cat();
		animals[i]->setIdea(0);
	}

	for (int i = 0; i < 10; i++)  {
		animals[i]->makeSound();
        std::cout << "Idea [" << i << "]: " << animals[i]->getIdea(0) << std::endl;
	}


	std::cout << std::endl << std::endl;
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << std::endl << std::endl;
	
	std::cout << "dog idea : --> " << j->getIdea(0) << std::endl;
	std::cout << "cat idea : --> " << i->getIdea(0) << std::endl << std::endl;
	
	delete j;
	delete i;
	for (int i = 0; i < 10; i++)
		delete animals[i];

	return 0;

}