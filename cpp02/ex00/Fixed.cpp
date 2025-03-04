/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 22:37:16 by morgane           #+#    #+#             */
/*   Updated: 2025/03/03 20:32:35 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &a) {
std::cout << "Copy constructor called" << std::endl;
    *this = a;
}

Fixed::~Fixed() {
    
    std::cout << "Destructor called" << std::endl;    
    
}
Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_value = other.getRawBits();
    return *this;
}

void Fixed::setRawBits(int const raw) {
    this->_value = raw;
    
}
int Fixed::getRawBits(void)const {
    
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
    
}