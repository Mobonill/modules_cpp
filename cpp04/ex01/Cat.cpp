/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:20:22 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/09 20:43:21 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {

	_type = "Cat";
	brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal() {

	*this = other;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::Cat(std::string type): Animal() {

	this->_type = type;
	new Brain();
	std::cout << _type << " constructor called" << std::endl;
}

Cat::~Cat() {

	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {

	if (this != &other)
		*this = other;

	return (*this);
}

void Cat::setIdea(int index) {

	brain->setIdea(index, "A human servant is approaching..");
}

std::string Cat::getIdea(int index) const {
	
	return (brain->getIdea(index));
}

void Cat::makeSound(void) {

	std::cout << _type << ": Miaouuuu" << std::endl;

}