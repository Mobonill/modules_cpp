/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:20:22 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/12 15:09:23 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {

	_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal() {

	*this = other;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::Cat(std::string type): Animal() {

	this->_type = type;
	std::cout << _type << " constructor called" << std::endl;
}

Cat::~Cat() {

	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {

	if (this != &other)
		this->_type = other._type;

	return (*this);
}


void Cat::makeSound(void) const {

	std::cout << _type << ": Miaouuuu" << std::endl;

}