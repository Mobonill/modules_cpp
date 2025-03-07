/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:52:29 by morgane           #+#    #+#             */
/*   Updated: 2025/03/07 17:33:32 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap& x);
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap& operator=(const ScavTrap& other);
		void guardGate();
		void attack(const std::string &target);

};
