/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 18:22:47 by morgane           #+#    #+#             */
/*   Updated: 2025/03/07 18:51:12 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
    
    	public:
            DiamondTrap(void);
            DiamondTrap(const DiamondTrap& other);
            DiamondTrap(std::string name);
            ~DiamondTrap();
            DiamondTrap& operator=(const DiamondTrap& other);
            void setName(std::string name);
            std::string getName(void);
            void attack(const std::string &target);
            void whoAmI(void);
};