/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:21:17 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/06 17:29:19 by mobonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {

	std::cout << "ClapTrap Constructor default called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& user) {

	*this = user;
	std::cout << "ClapTrap constructor copy called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	
}



