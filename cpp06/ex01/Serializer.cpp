/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 21:18:49 by morgane           #+#    #+#             */
/*   Updated: 2025/03/18 21:55:47 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer& other){
    *this = other;
}

Serializer::~Serializer() {}

Serializer& Serializer::operator=(const Serializer& rhs) {
    
    if (this != &rhs) {
        
    }
    return (*this);
}

uintptr_t Serializer::serialize(Data* ptr) {
    
}

Data* QSerializer::deserialize(uintptr_t raw) {
    
}

