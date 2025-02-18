/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:52:07 by morgane           #+#    #+#             */
/*   Updated: 2025/02/18 17:47:32 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {

}

Zombie::~Zombie(void) {
    
    std::cout << _name << " is definitively dead" << std::endl;
}

void Zombie::setName(std::string name) {
    
    this->_name = name;
    return ;
}

void Zombie::announce(void) {
    
    std::cout << _name; std::cout << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}
