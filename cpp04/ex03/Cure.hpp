/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <morgane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:36:18 by morgane           #+#    #+#             */
/*   Updated: 2025/03/12 20:18:55 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"


class Cure : public AMateria {
	public:
		Cure();
		virtual ~Cure();
		Cure(const Cure& rhs);
		Cure& operator=(const Cure& rhs);
		void setType(std::string type);
		std::string getType() const;
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
			
	private:
		std::string	_type;
};