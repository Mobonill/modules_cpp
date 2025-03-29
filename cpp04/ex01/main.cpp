/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:33:19 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/13 14:41:14 by mobonill         ###   ########.fr       */
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
	Animal* test = new Animal();

	test->setType("hoho");
	for (int i = 0; i < 6; i++) {
		animals[i] = new Dog();
	}

	for (int i = 6; i < 10; i++) {
		animals[i] = new Cat();
	}

	for (int i = 0; i < 10; i++)  {
		animals[i]->makeSound();
	}


	std::cout << std::endl << std::endl;
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << std::endl << std::endl;
	
	
	delete j;
	delete i;
	delete test;
	for (int i = 0; i < 10; i++)
		delete animals[i];

	return 0;

}