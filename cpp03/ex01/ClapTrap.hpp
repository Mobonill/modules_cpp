/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:32:43 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/07 17:06:54 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>


class ClapTrap {

	public:

		ClapTrap();
		ClapTrap(ClapTrap& user);
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