/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:12:48 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/09 19:13:15 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {

	_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal() {

	*this = other;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::Dog(std::string type): Animal() {

	this->_type = type;
	std::cout << _type << " constructor called" << std::endl;
}

Dog::~Dog() {

	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {

	if (this != &other)
		*this = other;

	return (*this);
}


void Dog::makeSound(void) {

	std::cout << _type << ": Ouaf !" << std::endl;

}