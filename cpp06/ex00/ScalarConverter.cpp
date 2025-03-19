/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 17:52:45 by morgane           #+#    #+#             */
/*   Updated: 2025/03/18 21:27:02 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
    *this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs) {
    
    if (this != &rhs)
    {
        *this = rhs;
    }
    return (*this);
}

static void convert(std::string literal) {
    (void) literal;
    return ;
}