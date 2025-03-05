/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:32:32 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/05 21:05:27 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Unknown"), _hit(10), _energy(10), _attack(0) {

}

ClapTrap::ClapTrap(ClapTrap& user) {

	*this = user;
}


ClapTrap::ClapTrap(std::string name): _name(name), _hit(10), _energy(10), _attack(0) {

	std::cout << "Constructor default" << std::endl;
}

ClapTrap::~ClapTrap() {

	std::cout <<"Destructor default" << std::endl;
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
	if (this != &other)
		*this = other;
	return *this;
}

void ClapTrap::attack(const std::string& target){

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
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << this->_attack << " points of damage. He has " << this->_energy << " energy points" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	
	if (this->_hit <= 0){
			std::cout << "ClapTrap " << _name << " has no hit points " << std::endl;
			this->_hit = 0;
	}
	else {
		this->_hit -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount << " damage points : he has " << this->_hit << " hit points and " << this->_energy << " energy points" << std::endl;
	}
}


void ClapTrap::beRepaired(unsigned int amount) {

if (this->_energy <= 0) {
	std::cout << _name <<" can't repaire, he has no energy left" << std::endl;
	this->_energy = 0;
}
else {
	this->_energy -= 1;
	this->_hit += amount;
	std::cout << "ClapTrap " << _name << " gets " << amount << " points back : he has " << this->_hit << " hit points and " << this->_energy << " energy points " << std::endl;
	}
}
