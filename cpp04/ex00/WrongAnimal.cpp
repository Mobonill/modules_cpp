/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:34:51 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/12 15:29:44 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal") {

	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	
	*this = other;
	std::cout << "WrongAnimal copy constructor called" << std::endl;

}

WrongAnimal::WrongAnimal(std::string name) {

	_type = name;
	std::cout << "Constructor called for WrongAnimal" << _type << std::endl;
}

WrongAnimal::~WrongAnimal() {

	std::cout << "WrongAnimal default destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {

	if (this != &other)
		this->_type = other._type;
	return (*this);
}


void WrongAnimal::setType(std::string type) {

	this->_type = type;
}

std::string WrongAnimal::getType(void) const{

	return(this->_type);
}


void WrongAnimal::makeSound(void) const {
	
	std::cout << _type << ": What is the sound of this Wronganimal ?" << std::endl;
}