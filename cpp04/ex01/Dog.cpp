/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:12:48 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/12 15:49:43 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {

	_type = "Dog";
	brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal() {

	this->_type = other._type;
    this->brain = new Brain(*other.brain);
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

	if (this != &other) {
        this->_type = other._type;
        if (this->brain)
         	delete this->brain;
       	this->brain = new Brain(*other.brain);
	}
	return (*this);
}

void Dog::makeSound(void) const{

	std::cout << _type << ": Ouaf !" << std::endl;

}