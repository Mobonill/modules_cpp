/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 22:37:06 by morgane           #+#    #+#             */
/*   Updated: 2025/03/04 09:57:42 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// THIS = instance courante

#pragma once 

#include <iostream>
#include <cmath>

class Fixed {

    public:
        Fixed();
        Fixed(const int integer);
        Fixed(const float number);
        Fixed(const Fixed &a);
        ~Fixed();
        void setRawBits(int const raw);
        int getRawBits(void)const;
        Fixed& operator=(const Fixed &other);
        float toFloat( void ) const;
        int toInt( void ) const;
        bool operator>(const Fixed &rhs) const;
        bool operator<(const Fixed &rhs) const;
        bool operator>=(const Fixed &rhs) const;
        bool operator<=(const Fixed &rhs) const;
        bool operator==(const Fixed &rhs) const;
        bool operator!=(const Fixed &rhs) const;
        Fixed operator+(const Fixed &rhs) const;
        Fixed operator-(const Fixed &rsh) const;
        Fixed operator*(const Fixed &rsh) const;
        Fixed operator/(const Fixed &rsh) const;
        Fixed& operator++(); // preincrementation;
        Fixed operator++(int); //post incrementation
        Fixed& operator--(); // predecrementation;
        Fixed operator--(int); //post decrementation
        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);


    private:
        int _value;
        static const int _bits = 8;
    
};

std::ostream &operator<<(std::ostream& x, const Fixed& rhs);
