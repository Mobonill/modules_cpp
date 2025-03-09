/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:36:19 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/09 19:39:54 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {

	_type = "Wrong Cat";
	std::cout << "Wrong Cat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal() {

	*this = other;
	std::cout << "Wrong Cat copy constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type): WrongAnimal() {

	this->_type = type;
	std::cout << _type << " constructor called" << std::endl;
}

WrongCat::~WrongCat() {

	std::cout << "Wrong Cat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {

	if (this != &other)
		*this = other;

	return (*this);
}
