/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:37:38 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/09 19:17:32 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Animal") {

	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& other) {
	
	*this = other;
	std::cout << "Animal copy constructor called" << std::endl;

}

Animal::Animal(std::string name) {

	_type = name;
	std::cout << "Constructor called for Animal" << _type << std::endl;
}

Animal::~Animal() {

	std::cout << "Animal default destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {

	if (this != &other)
		*this = other;
	return (*this);
}


void Animal::setType(std::string type) {

	this->_type = type;
}

std::string Animal::getType(void) {

	return(this->_type);
}


void Animal::makeSound(void) {
	
	std::cout << _type << ": What is the sound of this animal ?" << std::endl;
}