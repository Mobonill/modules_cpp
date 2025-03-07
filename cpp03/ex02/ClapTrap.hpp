/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:21:08 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/07 17:34:26 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>


class ClapTrap {

	public:

		ClapTrap();
		ClapTrap(const ClapTrap& user);
		ClapTrap(std::string name);
		~ClapTrap();

		void setName(std::string name);
		std::string getName(void);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap& operator=(const ClapTrap &other);

	protected:
		std::string _name;
		int			_hit;
		int			_energy;
		int			_attack;
};