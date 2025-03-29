/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:56:06 by morgane           #+#    #+#             */
/*   Updated: 2025/03/13 13:05:52 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap() : ClapTrap() {

	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& x): ClapTrap() {

	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = x;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {

	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::~FragTrap() {

	std::cout << "FragTrap default destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other) {

	std::cout << "FragTrap Copy assignement operator called" << std::endl;
	if (this != &other) {
		this->_attack = other._attack;
		this->_energy = other._energy;
		this->_hit = other._hit;
		this->_name = other._name;
	}
	return (*this);
}


void FragTrap::attack(const std::string& target){

	if (this->_hit <= 0) {
		std::cout << _name <<" can't attack, he is dead" << std::endl;
		this->_hit = 0;
	}
	else if (this->_energy <= 0){
		std::cout << _name <<" can't attack, he has no energy left" << std::endl;
		this->_energy = 0;
	}
	else {
		this->_energy -= 1;
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << this->_attack << " points of damage. He has " << this->_energy << " energy points" << std::endl;
	}
}

void FragTrap::highFivesGuys(void) {
    
    std::cout << "FragTrap " << _name << " gives you a High Five !" << std::endl;
}
