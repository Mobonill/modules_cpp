/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobonill <mobonill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:32:43 by mobonill          #+#    #+#             */
/*   Updated: 2025/03/05 19:16:59 by mobonill         ###   ########.fr       */
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