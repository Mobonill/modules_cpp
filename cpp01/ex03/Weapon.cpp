/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:43:44 by morgane           #+#    #+#             */
/*   Updated: 2025/02/19 16:22:20 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
    
}

Weapon::Weapon(const std::string &type) {
    
    this->_type = type;
}

Weapon::~Weapon() {
    
}

void Weapon::setType(const std::string &type) {
    
    this->_type = type;
}

const std::string &Weapon::getType() const{
    
    return (this->_type);
}
