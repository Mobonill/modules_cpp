/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:33:19 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/12 15:10:19 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {

	Animal* a = new Animal();
	Cat* b = new Cat();
	Dog* c = new Dog();
	Dog* d = c;
	const WrongAnimal* wrong_a = new WrongAnimal("Wrong Animal");
	const WrongAnimal* wrong_cat = new WrongCat();
	
	std::cout << std::endl;
	a->setType("\"Animal\" is not a type");
	std::cout << "animal type = ---> " << a->getType() << std::endl;
	std::cout << "cat type = ---> " << b->getType() << std::endl;
	std::cout << "dog type = ---> " << d->getType() << std::endl << std::endl;
	a->makeSound();
	b->makeSound();
	c->makeSound();
	wrong_a->makeSound();
	wrong_cat->makeSound();
	std::cout << std::endl;

	delete b;
	delete c;
	delete a;
	delete wrong_cat;
	delete wrong_a;
	
	return 0;

}