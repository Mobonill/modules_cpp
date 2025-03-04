/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 22:37:06 by morgane           #+#    #+#             */
/*   Updated: 2025/03/03 22:27:48 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

    private:
        int _value;
        static const int _bits = 8;
    
};

std::ostream &operator<<(std::ostream& x, const Fixed& rhs);
