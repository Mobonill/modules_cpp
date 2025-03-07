/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:53:33 by morgane           #+#    #+#             */
/*   Updated: 2025/03/07 18:20:12 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
    
    	public:
            FragTrap(void);
            FragTrap(const FragTrap& x);
            FragTrap(std::string name);
            ~FragTrap();
            FragTrap& operator=(const FragTrap& other);
            void attack(const std::string &target);
            void highFivesGuys(void);
};