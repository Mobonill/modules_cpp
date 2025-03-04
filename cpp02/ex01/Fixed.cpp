/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 22:37:16 by morgane           #+#    #+#             */
/*   Updated: 2025/03/03 22:28:14 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int integer) {
    
    std::cout << "Int constructor called" << std::endl;
    this->_value = integer * (1 << this->_bits);
}

Fixed::Fixed(const float number) {
    
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(number * (1 << this->_bits));
}

Fixed::Fixed(const Fixed &a) {
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
    
    return this->_value;
}

float Fixed::toFloat( void ) const {
    
    return ((float)this->_value) / (float)(1 << this->_bits);
}

int Fixed::toInt( void ) const {
            
    return (roundf(this->_value / (1 << this->_bits)));
}

std::ostream &operator<<(std::ostream& x, const Fixed& rhs){
   
    x << rhs.toFloat();
    return (x);
}