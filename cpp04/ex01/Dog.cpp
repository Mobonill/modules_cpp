/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:12:48 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/09 20:42:57 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {

	_type = "Dog";
	brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal() {

	*this = other;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::Dog(std::string type): Animal() {

	this->_type = type;
	new Brain();
	std::cout << _type << " constructor called" << std::endl;
}

Dog::~Dog() {

	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {

	if (this != &other)
		*this = other;

	return (*this);
}

void Dog::setIdea(int index) {

	brain->setIdea(index, "Oh, a friend !");
}

std::string Dog::getIdea(int index) const {
	
	return (brain->getIdea(index));
}

void Dog::makeSound(void) {

	std::cout << _type << ": Ouaf !" << std::endl;

}