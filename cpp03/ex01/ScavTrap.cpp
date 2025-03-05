/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 15:24:38 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/05 20:31:10 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {

	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& x) {

	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = x;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {

	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {

	std::cout << "ScavTrap default destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {

	std::cout << "ScavTrap Copy assignement operator called" << std::endl;
	if (this != &other)
		*this = other;
	return (*this);
}

void guardGate() {

	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target){

	if (this->_energy <= 0){
		std::cout << _name <<" can't attack, he has no energy left" << std::endl;
		this->_energy = 0;
	}
	else if (this->_hit <= 0) {
		std::cout << _name <<" can't attack, he has no hit points" << std::endl;
		this->_hit = 0;
	}
	else {
		this->_energy -= 1;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << this->_attack << " points of damage. He has " << this->_energy << " energy points" << std::endl;
	}
}