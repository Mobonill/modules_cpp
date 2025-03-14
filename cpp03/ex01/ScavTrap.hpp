/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 15:14:23 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/07 17:07:32 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public:
		ScavTrap(void);
		ScavTrap(ScavTrap& x);
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap& operator=(const ScavTrap& other);
		void guardGate();
		void attack(const std::string &target);

};
