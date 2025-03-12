/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:37:38 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/12 15:33:23 by morgane          ###   ########.fr       */
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
		this->_type = other._type;
	return (*this);
}


void Animal::setType(std::string type) {

	this->_type = type;
}

std::string Animal::getType(void) const{

	return(this->_type);
}


void Animal::makeSound(void) const {
	
	std::cout << _type << ": What is the sound of this animal ?" << std::endl;
}