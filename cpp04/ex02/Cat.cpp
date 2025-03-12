/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:20:22 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/12 14:51:52 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {

	_type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal() {

	this->_type = other._type;
    this->brain = new Brain(*other.brain);
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::Cat(std::string type): Animal() {

	this->_type = type;
	this->brain = new Brain();
	std::cout << _type << " constructor called" << std::endl;
}

Cat::~Cat() {

	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {

	    if (this != &other) {
        	this->_type = other._type;
        	if (this->brain)
         	   delete this->brain;
       		this->brain = new Brain(*other.brain);
		}
	return (*this);
}

void Cat::setIdea(int index) {

	brain->setIdea(index, "A human servant is approaching..");
}

std::string Cat::getIdea(int index) const {
	
	return (brain->getIdea(index));
}

void Cat::makeSound(void) const{

	std::cout << _type << ": Miaouuuu" << std::endl;

}