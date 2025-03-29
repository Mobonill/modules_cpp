/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:21:17 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/13 13:07:03 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Unknown"), _hit(100), _energy(100), _attack(30) {

	std::cout << "ClapTrap Constructor default called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& user) {

	*this = user;
	std::cout << "ClapTrap constructor copy called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(100), _energy(100), _attack(30) {

}

ClapTrap::~ClapTrap() {
	
	std::cout << "ClapTrap default destructor called" << std::endl;
}

void ClapTrap::setName(std::string name) {

	this->_name = name;

}
std::string ClapTrap::getName(void) {

	return (this->_name);
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_attack = other._attack;
		this->_energy = other._energy;
		this->_hit = other._hit;
		this->_name = other._name;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target){

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
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << this->_attack << " points of damage. He has " << this->_energy << " energy points" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	
	if (this->_hit <= 0){
			std::cout << _name << " is already dead " << std::endl;
			this->_hit = 0;
	}
	else {
		this->_hit -= amount;
		std::cout << _name << " takes " << amount << " damage points : he has " << this->_hit << " hit points and " << this->_energy << " energy points" << std::endl;
	}
}


void ClapTrap::beRepaired(unsigned int amount) {

if (this->_energy <= 0) {
	std::cout << _name <<" can't repaire, he has no energy left" << std::endl;
	this->_energy = 0;
}
else if (this->_hit <= 0) {
	std::cout << _name << " can't repair, he's dead" << std::endl;
}
else {
	this->_energy -= 1;
	this->_hit += amount;
	std::cout << _name << " gets " << amount << " points back : he has " << this->_hit << " hit points and " << this->_energy << " energy points " << std::endl;
	}
}




