/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 18:01:32 by morgane           #+#    #+#             */
/*   Updated: 2025/03/12 22:20:11 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class Character : public ICharacter {
	
	public:	
    	Character();
		Character(std::string name);
		~Character();
		Character(const Character& rhs);
		Character&	operator=(const Character& rhs);
		void setName(std::string name);
		std::string	getName(void);
		std::string const& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

			
	private:
		std::string _name;
		AMateria* _inv[4];
		AMateria* _dropped[100];
		int _droppedCount;

};