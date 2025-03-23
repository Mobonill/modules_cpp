/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 21:18:49 by morgane           #+#    #+#             */
/*   Updated: 2025/03/19 17:36:43 by mobonill         ###   ########.fr       */
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

	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {

	return reinterpret_cast<Data*>(raw);
}

