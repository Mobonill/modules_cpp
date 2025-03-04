/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:32:32 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/04 12:25:57 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hit(10), _energy(10), _attack(0) {

	std::cout << "Constructor default" << std::endl;
}

ClapTrap::~ClapTrap() {

	std::cout <<"Destructor default" << std::endl;
}


void ClapTrap::attack(const std::string& target){

	int damage;
	this->_energy = -1;
	
	std::cout << "ClapTrap" << _name << "attacks" << target << ", causing" << damage << "points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){

}


void ClapTrap::beRepaired(unsigned int amount) {

}
