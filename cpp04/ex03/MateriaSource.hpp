/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 18:59:16 by morgane           #+#    #+#             */
/*   Updated: 2025/03/12 20:29:51 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"


class MateriaSource : public IMateriaSource {
	
	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(const MateriaSource& other);
		MateriaSource& operator=(const MateriaSource& rhs);
		void learnMateria(AMateria*);
		AMateria* 	createMateria(std::string const& type);

	private:	
		AMateria* _inventory[4];
};