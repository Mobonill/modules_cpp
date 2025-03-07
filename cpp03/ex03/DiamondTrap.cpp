/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 18:26:41 by morgane           #+#    #+#             */
/*   Updated: 2025/03/07 18:59:59 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap() {
    
    std::cout << "DiamondTrap default constructor called" << std::endl;
    _hit = FragTrap::_hit;
    _energy = ScavTrap::_energy;
    _attack = FragTrap::_attack;
    _name = "Unknown_clap_name";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name+ "_clap_name"), FragTrap(name+ "_clap_name") {
    
    std::cout << "DiamondTrap named constructor called" << std::endl;
    _hit = FragTrap::_hit;
    _energy = ScavTrap::_energy;
    _attack = FragTrap::_attack;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other), ScavTrap(other), FragTrap(other) {
    
    _name = _name + "_clap_name";
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called" << _name << std::endl;
}

void DiamondTrap::setName(std::string name) {

	ClapTrap::_name = name + "_clap_name";

}
std::string DiamondTrap::getName(void) {

	return (this->_name);
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other) {

	std::cout << "DiamondTrap Copy assignement operator called" << std::endl;
	if (this != &other)
		*this = other;
	return (*this);
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "I am " << _name << std::endl;
}