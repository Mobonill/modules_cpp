/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 22:37:16 by morgane           #+#    #+#             */
/*   Updated: 2025/03/04 10:11:07 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {

}

Fixed::Fixed(const int integer) {
    
    this->_value = integer << this->_bits;
}

Fixed::Fixed(const float number) {
    
    this->_value = roundf(number * (1 << this->_bits));
}

Fixed::Fixed(const Fixed &a) {

    *this = a;
}

Fixed::~Fixed() {
    
    
}
Fixed &Fixed::operator=(const Fixed &other) {

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
            
    return (this->_value >> this->_bits);
}

std::ostream &operator<<(std::ostream& x, const Fixed& rhs){
   
    x << rhs.toFloat();
    return (x);
}

bool Fixed::operator>(const Fixed &rhs) const{
    
    if (this->_value > rhs._value)
        return true;
    else
        return false;
}

bool Fixed::operator<(const Fixed &rhs) const{
    
    if (this->_value < rhs._value)
        return true;
    else
        return false;
}

bool Fixed::operator>=(const Fixed &rhs) const{
    
    if (this->_value >= rhs._value)
        return true;
    else
        return false;
}

bool Fixed::operator<=(const Fixed &rhs) const{
    
    if (this->_value <= rhs._value)
        return true;
    else
        return false;
}

bool Fixed::operator==(const Fixed &rhs) const{
    
    if (this->_value == rhs._value)
        return true;
    else
        return false;
}

bool Fixed::operator!=(const Fixed &rhs) const{
    
    if (this->_value != rhs._value)
        return true;
    else
        return false;
}

Fixed Fixed::operator+(const Fixed &rhs) const{
    
    Fixed res;
    
    res._value = this->_value + rhs._value;
    return (res);
}

Fixed Fixed::operator-(const Fixed &rhs) const{
    
    Fixed res;
    
    res._value = this->_value - rhs._value;
    return (res);
}

Fixed Fixed::operator*(const Fixed &rhs) const{
    
    Fixed res;
    
    res._value = (this->_value * rhs._value) >> this->_bits;
    return (res);
}

Fixed Fixed::operator/(const Fixed &rhs) const{
    
    Fixed res;
    
    res._value = (this->_value << this->_bits) / rhs._value;
    return (res);
}

Fixed &Fixed::operator++() {
    
    this->_value++;
    return (*this);
}

Fixed Fixed::operator++(int) {
    
    Fixed tmp;
    
    tmp = *this;
    this->_value++;
    return (tmp);
}

Fixed &Fixed::operator--() {
    
    this->_value--;
    return (*this);
}

Fixed Fixed::operator--(int) {
    
    Fixed tmp;
    
    tmp = *this;
    this->_value--;
    return (tmp);
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
    
    if (a < b)
        return (a);
    else
        return (b);
    
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
    
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
    
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
    
    if (a > b)
        return (a);
    else
        return (b);
}