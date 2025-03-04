/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 22:37:06 by morgane           #+#    #+#             */
/*   Updated: 2025/03/03 20:27:33 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

class Fixed {

    public:
        Fixed();
        Fixed(Fixed &a);
        ~Fixed();
        void setRawBits(int const raw);
        int getRawBits(void)const;
        Fixed& operator=(const Fixed &other); 

    private:
        int _value;
        static const int _bits = 8;
    
};

std::ostream& operator<<(std::ostream& x, const Fixed& rhs);
