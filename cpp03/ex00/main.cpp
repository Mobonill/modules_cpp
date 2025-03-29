/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:32:49 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/13 13:03:24 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

int main() {

	ClapTrap nico;
	ClapTrap edgar("Edgar");
	nico.setName("Nico");

	edgar = nico;
	nico.attack("Edgar");
	edgar.takeDamage(2);
	edgar.beRepaired(1);
	edgar.attack("Nico");
	nico.takeDamage(15);
	edgar.attack("Nico");
	nico.attack("Edgar");
	nico.takeDamage(1);
	nico.beRepaired(5);

	edgar.attack("Nico");
	edgar.attack("Nico");
	edgar.attack("Nico");
	edgar.attack("Nico");
	edgar.attack("Nico");
	edgar.attack("Nico");
	edgar.attack("Nico");
	edgar.attack("Nico");
	edgar.beRepaired(1);
	edgar.takeDamage(2);
	nico.takeDamage(1);

	return 0;
}