/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:11:20 by morgane           #+#    #+#             */
/*   Updated: 2025/02/19 15:56:35 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {

}

HumanB::~HumanB() {
    
}

void HumanB::setWeapon(Weapon &weapon) {
    
    this->_weapon = &weapon;
}

void HumanB::attack(void) {
    
    if (this->_weapon)
        std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
    else
        std::cout << "some other type of club" << std::endl;
    return;
}
