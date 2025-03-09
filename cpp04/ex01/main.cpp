/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:33:19 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/09 20:48:26 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {

	Animal* animals[100];

	for (int i = 0; i < 100 / 2; i++)
		animals[i] = new Dog();

	for (int i = 100 / 2; i < 100; i++)
		animals[i] = new Cat();

	for (int i = 0; i < 100; i++) 
		animals[i]->makeSound();

	for (int i = 0; i < 100; i++)
		delete animals[i];

	std::cout << std::endl << std::endl;
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	
	delete j;
	delete i;

	return 0;

}