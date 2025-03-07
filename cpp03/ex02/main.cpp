/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 17:08:54 by morgane           #+#    #+#             */
/*   Updated: 2025/03/07 17:20:39 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {

    FragTrap yentl("Yentl");
	ScavTrap nico("Nico");
	ClapTrap edgar("Edgar");
	std::cout << std::endl;

    yentl.attack("Edgar");
    edgar.takeDamage(30);
	nico.attack("yentl");
	yentl.takeDamage(30);
	edgar.attack("Nico");
	nico.takeDamage(30);
	nico.beRepaired(10);
	std::cout << std::endl;

	nico.attack("Edgar");
	edgar.takeDamage(30);
	edgar.attack("Nico");
	edgar.beRepaired(1);
	edgar.attack("Nico");
    yentl.highFivesGuys();
	std::cout << std::endl;

	return 0;
}