/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:32:49 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/05 21:04:21 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {

	ScavTrap nico("Nico");
	ClapTrap edgar("Edgar");
	std::cout << std::endl;

	nico.attack("Edgar");
	edgar.takeDamage(20);
	edgar.attack("Nico");
	nico.takeDamage(20);
	nico.beRepaired(5);
	std::cout << std::endl;

	nico.attack("Edgar");
	edgar.takeDamage(80);
	edgar.attack("Nico");
	edgar.beRepaired(1);
	edgar.attack("Nico");
	std::cout << std::endl;

	return 0;
}