/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:54:28 by morgane           #+#    #+#             */
/*   Updated: 2025/02/19 16:17:54 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {

}

HumanA::~HumanA() {
    
}

void HumanA::attack(void) {

    const std::string type = this->_weapon.getType();
    
    std::cout << _name << " attacks with their "<< type << std::endl;
    return;
}
