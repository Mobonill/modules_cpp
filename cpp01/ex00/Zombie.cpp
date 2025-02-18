/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:52:07 by morgane           #+#    #+#             */
/*   Updated: 2025/02/18 15:59:47 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name) {
    
    announce();
}

Zombie::~Zombie(void) {
    
    std::cout << _name << " is definitively dead" << std::endl;
}

void Zombie::announce(void) {
    
    std::cout << _name; std::cout << ": "; std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}
